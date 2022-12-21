#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CONST 6
#define TAM 5
#include <iostream>


void modifica_array(int *arr, int valor){ 
    for(int i = 0; i < TAM; i++) {
        *((*arr) + i * sizeof(int)) = valor;  // == x[i]
    }
}

// &
//*
int main() {
    int *x;
    x = (int *) malloc(TAM * sizeof(int))
    (*x) = 10; // modificando o endereço, não o x
    printf("%d", *x);
    std::cout << &x << std::endl;
    return 0;
    modifica_array(x, valor)
    for(int i = 0; i < TAAM; i++) {
        printf("%d", x[i]);
    }
    return 0;
}

