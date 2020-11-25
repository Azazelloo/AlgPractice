#pragma once
#include "Header.h"

//_____сортировка слиянием
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
