#pragma once
#include "Header.h"

//_____в данной реализации функция возвращает ближайший квадратный корень к Val с помощью формулы Герона
unsigned int SqrtNewton(unsigned int Val)
{
    int rslt = Val;
    int div = Val;
    if (Val <= 0) return 0;

    while (1)
    {
        div = (Val / div + div) / 2; //итерационная формула Герона -> сходится к корню из Val
        if (rslt > div) rslt = div; // ищем это самое схождение
        else return rslt;
    }
}
