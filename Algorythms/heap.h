//
//  heap.h
//  Algorythms
//
//  Created by Kate Semyonova on 10/27/15.
//  Copyright © 2015 abc. All rights reserved.
//

#ifndef heap_h
#define heap_h
#include <stdio.h>


const int PQ_SIZE = 10;

typedef struct{
    int arr[PQ_SIZE + 1];
    int size;
    
}priority_queue;

int pq_parent(int n);
int pr_child(int n);
void pq_insert(priority_queue *q, int x);
void make_heap(priority_queue *q, int arr[], int size);


#endif /* heap_h */
