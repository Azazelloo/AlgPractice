#pragma once

#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <random>
#include <algorithm>
#include <limits>

//сортировка вставкой
template < typename T >
void InsertionSort(std::vector<T>& array){

    int j;
    for (size_t i = 1; i < array.size();i++) {
        int key = array[i];
        j = i - 1;
        while (j>=0 && array[j]>key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}


//сортировка выбором
template <typename T>
void SelectionSort(std::vector<T>& array){

    for(size_t i=0;i<(array.size()-1);i++){
        size_t minIndex=i;

        for(size_t j=i+1;j<array.size();j++){
            if(array[j]<array[minIndex]){
                minIndex=j;
            }

        }
        if(minIndex!=i){
            std::swap(array[i],array[minIndex]);
        }
    }
}


//сортировка слиянием

template<typename T>
void MergeSort(std::vector<T>& array, size_t firstIndx, size_t lastIndx){

    if(firstIndx < lastIndx){

        size_t sprt=(firstIndx+lastIndx)/2;

        MergeSort(array,firstIndx,sprt); //строим дерево для левой половины
        MergeSort(array,sprt+1,lastIndx); //строим дерево для правой половины

        //сортировка и слияние

        size_t leftSize=(sprt-firstIndx)+1;
        size_t rightSize=lastIndx-sprt;

        std::vector<T> leftArray(leftSize+1); //резервируем на один элемент больше для сигнального слова
        std::vector<T> rightArray(rightSize+1); //резервируем на один элемент больше для сигнального слова

        for(size_t i=0;i<leftSize;i++){
            leftArray[i]=array[firstIndx+i];
        }

        for(size_t j=0;j<rightSize;j++){
            rightArray[j]=array[sprt+j+1];
        }

        //сигнальные слова, помещаются в конец каждого массива.
        //с их помощью происходит обмен в конце массивов
        leftArray[leftSize]=std::numeric_limits<T>::max();
        rightArray[rightSize]=std::numeric_limits<T>::max();

        size_t i=0,j=0;

        for(size_t k=firstIndx;k<lastIndx+1;k++){

            if(leftArray[i]<=rightArray[j]){
                array[k]=leftArray[i++];
            }
            else{
                array[k]=rightArray[j++];
            }
        }
    }
}
