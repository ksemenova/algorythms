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
#include "heap.h"
#include "sortings.h"

int main(int argc, const char * argv[]) {
    
    int N; //number of elements in arr
    printf("Lets sort arrays!\n");
    
    printf("Selection sort\n");
    int arr1[] = {10,5,3,4};
    N = sizeof(arr1)/sizeof(arr1[0]);
    print_array(arr1, N);
    selection_sort(arr1, N);
    print_array(arr1, N);
    
    printf("Insertion sort\n");
    int arr2[] = {10,5,3,4};
    N = sizeof(arr2)/sizeof(arr2[0]);
    print_array(arr2, N);
    insertion_sort(arr2, N);
    print_array(arr2, N);
    
    printf("Merge sort\n");
    int arr3[] = {10,5,3,4};
    N = sizeof(arr3)/sizeof(arr3[0]);
    print_array(arr3, N);
    merge_sort(arr3, N);
    print_array(arr3, N);
    
    printf("Heap sort\n");
    int arr4[] = {10,5,3,4,3,1,2,22,1};
    N = sizeof(arr4)/sizeof(arr4[0]);
    print_array(arr4, N);
    heap_sort(arr4, N);
    print_array(arr4, N);
    
    printf("Quick sort v1, the latest element is a pivot\n");
    int arr5[] = {10,5,3,4,3,1,2,22,1};
    N = sizeof(arr5)/sizeof(arr5[0]);
    print_array(arr5, N);
    quick_sort1(arr5, 0, N);
    print_array(arr5, N);
    
    printf("Quick sort v2: the middle element is a pivot\n");
    int arr6[] = {10,5,3,4,3,1,2,22,1};
    N = sizeof(arr6)/sizeof(arr6[0]);
    print_array(arr6, N);
    quick_sort2(arr6, 0, N);
    print_array(arr6, N);
    
    return 0;
}




