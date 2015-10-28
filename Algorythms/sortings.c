//
//  sortings.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/27/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include <stdlib.h>
#include "sortings.h"
#include "common.h"


void selection_sort(int *arr, int n){
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&(arr[i]), &(arr[min]));
    }
}

//---------- Insertion sort, Best O(n), worst O(n^2) --------------------------
void insertion_sort(int *arr, int n){
    for (int i = 1; i < n; i++) {
        int j = i;
        while ((j>0) && (arr[j] < arr[j-1])){
            swap(&(arr[j]), &(arr[j-1]));
            j--;
        }
    }
}

//---------- Merge sort, stable, O(n (log(n))), better to use for lists -------

//merge two arrays into one sorted array
void merge(int *arr, int *left_arr, int left_length, int *right_arr, int right_length){
    
    int i = 0; // index for *arr
    int j = 0; // index for *left_arr
    int k = 0; // index for right_arr
    
    while ((j < left_length) && (k < right_length)) {
        if(left_arr[j] < right_arr[k]) arr[i++] = left_arr[j++];
        else arr[i++] = right_arr[k++];
    }
    while (j < left_length) arr[i++] = left_arr[j++];
    while (k < right_length) arr [i++] = right_arr[k++];
}

//*arr - array, n - array length
void merge_sort(int *arr, int n){
    
    int middle, *left_arr, *right_arr;
    
    if(n < 2) return; //don't need to sort an array with one element
    
    //find the middle
    middle = (int)n/2;
    
    //create left and right subarrays
    left_arr = (int*)malloc(middle * sizeof(int));
    right_arr = (int*)malloc((n - middle) * sizeof(int));
    
    for (int i = 0; i < middle; i++) left_arr[i] = arr[i];
    for (int i = middle; i < n; i++) right_arr[i-middle] = arr[i];
    
    merge_sort(left_arr, middle);
    merge_sort(right_arr, n - middle);
    merge(arr, left_arr, middle, right_arr, n - middle);
    
    //clean up
    free(left_arr);
    free(right_arr);
}

//TODO: heap sort, not stable, O(n (log(n))), better for heaps

//TODO: quick sort, not stable, O(n (log(n))), can be about two or three times faster than merge_sort or heap_sort

