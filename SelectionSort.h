#pragma once
#include "Header.h"

//_____сортировка выбором
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
