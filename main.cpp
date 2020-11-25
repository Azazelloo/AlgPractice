#include "Header.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "SqrtNewton.h"

int main()
{
    //_____делаем рандомный вектор
    std::vector<int> v(100);
    std::random_device r;
    std::uniform_int_distribution<int> dist(-100,100);
    generate(v.begin(), v.end(), [&]{return dist(r);});

    //_____сортировка вставкой
    //InsertionSort(v);

    //_____сортировка выбором
    //SelectionSort(v);

    //_____сортировка слиянием
    //MergeSort(v,0,(v.size()-1));

    //_____поиск квадратного корня по формуле Герона
    //unsigned int sqrtGer=SqrtNewton(24);

    return 0;
}
