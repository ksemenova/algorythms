//
//  heap.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/27/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include "heap.h"
#include "common.h"

int pq_parent(int n){
    if (n == 1) return -1;
    return (int)n/2;
}

int pr_child(int n){
    return (2 * n);
}

void bubble_up(priority_queue *q, int size){
    int parent_index = pq_parent(size);
    
    if (!(parent_index = -1)){
        if (q->arr[pq_parent(size)] < q->arr[size]){
        swap(&(q->arr[parent_index]), &(q->arr[size]));
        bubble_up(q, parent_index);
        }
    }
}

void pq_insert(priority_queue *q, int x){
    if(q->size >= PQ_SIZE) printf("Priority queue overflow insert x=%d;\n", x);
    else{
        q->arr[q->size + 1] = x;
        q->size += 1;
        bubble_up(q, q->size);
    }
}

void pq_init(priority_queue *q){
    q->size = 0;
}

void make_heap(priority_queue *q, int arr[], int size)
{
    pq_init(q);
    for(int i = 0; i <size; i++){
        pq_insert(q, arr[i]);
    }
}
