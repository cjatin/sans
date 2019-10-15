#ifndef ISSUES_H
#define ISSUES_H

#include <iostream>

int memLeak(int d) {
    int* a = new int;
    *a = d + 2;
    return *a;  // Leak
}

int divByZero(int d) {
    if(d==2) {
        d-=2;
    }
    return 2/d; //div by 0
}

#endif
