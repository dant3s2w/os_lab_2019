#include "sum.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> 

unsigned long long int Sum(struct SumArgs *args) {
    unsigned long long int sum = 0;
    int *array = args->array;
    uint32_t begin = args->begin;
    uint32_t end = args->end;

     if(array == NULL) {
        return 0; // Или какое-либо другое значение по умолчанию
    }

    if (begin >= end) {
      return 0; // Если начало больше или равно концу, то сумма равна нулю
    }

    for (uint32_t i = begin; i < end; ++i) {
        sum += array[i];
    }

    return sum;
}