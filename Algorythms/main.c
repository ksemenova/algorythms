//
//  main.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/23/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include <stdio.h>
const int N = 4;

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

int * selection_sort(int *arr, int n){
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&(arr[i]), &(arr[min]));
    }
    return arr;
}

int * insertion_sort(int *arr, int n){
    for (int i = 1; i < n; i++) {
        int j = i;
        while ((j>0) && (arr[j] < arr[j-1])){
            swap(&(arr[j]), &(arr[j-1]));
            j--;
        }
    }
    return arr;
}


int main(int argc, const char * argv[]) {
    printf("Lets sort arrays!\n");
    
    //Selection sort
    int arr1[] = {10,5,3,4};
    print_array(arr1, N);
    selection_sort(arr1, N);
    print_array(arr1, N);
    
    //Insertion sort
    int arr2[] = {10,5,3,4};
    print_array(arr2, N);
    insertion_sort(arr2, N);
    print_array(arr2, N);

    
    return 0;
}




