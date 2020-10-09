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

    std::vector<int> vv={5,2,4,6,1,3};
    //сортировка выбором
    SelectionSort(vv); //ломается heap пофиксить

    return 0;
}
