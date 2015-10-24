//
//  main.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/23/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include <stdio.h>

void print_array(int *arr, int length)
{
    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void swap(int arr[], int n, int k){
    int t = arr[n];
    arr[n] = arr[k];
    arr[k] = t;
}

int * selection_sort(int *arr, int n){
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr, i, min);
    }
    return arr;
}


int main(int argc, const char * argv[]) {
    printf("Lets sort arrays!\n");
    // insert code here...
    int n = 4, arr[] = {10,5,3,4};
    print_array(arr, n);
    
    int *sorted_arr = selection_sort(arr, n);
    print_array(sorted_arr, n);
    
    return 0;
}




