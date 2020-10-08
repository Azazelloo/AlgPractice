#pragma once

#include <QCoreApplication>
#include <iostream>

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
