#include "Header.h"


int main()
{
    //делаем рандомный вектор
    std::vector<int> v(100);
    std::random_device r;
    std::uniform_int_distribution<int> dist(-100,100);
    generate(v.begin(), v.end(), [&]{return dist(r);});

    //сортировка вставкой
    //InsertionSort(v);

    //сортировка выбором
    //SelectionSort(v);

    //сортировка слиянием
    MergeSort(v,0,(v.size()-1));

    return 0;
}
