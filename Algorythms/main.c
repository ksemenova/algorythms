//
//  main.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/23/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "sortings.h"

int main(int argc, const char * argv[]) {
    
    int N; //number of elements in arr
    printf("Lets sort arrays!\n");
    
    //Selection sort
    int arr1[] = {10,5,3,4};
    N = sizeof(arr1)/sizeof(arr1[0]);
    print_array(arr1, N);
    selection_sort(arr1, N);
    print_array(arr1, N);
    
    //Insertion sort
    int arr2[] = {10,5,3,4};
    N = sizeof(arr2)/sizeof(arr1[0]);
    print_array(arr2, N);
    insertion_sort(arr2, N);
    print_array(arr2, N);
    
    //Merge sort
    int arr3[] = {10,5,3,4};
    N = sizeof(arr3)/sizeof(arr1[0]);
    print_array(arr3, N);
    merge_sort(arr3, N);
    print_array(arr3, N);
    
    return 0;
}




