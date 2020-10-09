#pragma once

#include <QCoreApplication>
#include <iostream>
#include <random>
#include <algorithm>

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
        size_t minIndex=array[i];

        for(size_t j=i+1;j<array.size();j++){
            if(array[j]<array[minIndex]){
                minIndex=j;
            }

        }
        if(minIndex!=i){
            std::swap(array[i],array[minIndex]); //ломается здесь!
        }
    }
}
