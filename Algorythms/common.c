//
//  common.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/25/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include "common.h"

void print_array(int *arr, int length)
{
    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void swap(int *n, int *k){
    int t = *n;
    *n = *k;
    *k = t;
}
