#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CONST 6
#include <iostream>


// &
//*
int main() {
    int *x;
    x = (int *) malloc(sizeof(int));
    (*x) = 10;
    printf("%d", &x);
    std::cout << &x << std::endl;
    return 0;
}