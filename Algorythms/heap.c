//
//  heap.c
//  Algorythms
//
//  Created by Kate Semyonova on 10/27/15.
//  Copyright © 2015 abc. All rights reserved.
//

#include "heap.h"
#include "common.h"

int pq_parent(int n)
{
    if (n == 1) return -1;
    return (int)n/2;
}

int pr_child(int n)
{
    return (2 * n);
}

//move element to the right position
void bubble_up(priority_queue *q, int p)
{
    int parent_index = pq_parent(p);

    if (!(parent_index == -1)){
        printf("Buble_up %d\n", q->arr[p]);
        if (q->arr[parent_index] > q->arr[p]){
        swap(&(q->arr[parent_index]), &(q->arr[p]));
        }
    }
}

void pq_insert(priority_queue *q, int x)
{
    if(q->size >= PQ_SIZE) printf("Priority queue overflow insert x=%d;\n", x);
    else{
        q->size += 1;
        q->arr[q->size] = x;
        bubble_up(q, q->size);
    }
}

void pq_init(priority_queue *q)
{
    q->size = 0;
}

void make_heap(priority_queue *q, int *arr, int size)
{
    pq_init(q);
    for(int i = 0; i <size; i++){
        pq_insert(q, arr[i]);
    }
}

void bubble_down(priority_queue *q, int p)
{
    int child_index = pr_child(p);
    int min_index = p;
    
    for (int i = 0; i <= 1; i++){
        if((child_index + i) <= q->size){
            if(q->arr[min_index] > q->arr[child_index + i]){
                min_index = child_index + i;
            }
        }
    }
    
    if(min_index != p){
        swap(&(q->arr[p]), &(q->arr[min_index]));
        bubble_down(q, min_index);
    }
    
}

int extract_min(priority_queue *q)
{
    int min = -1;
    
    if (q->size <=0) printf("Warning: empty priority queue \n");
    else{
        min = q->arr[1];
        q->arr[1] = q->arr[q->size];
        q->size = q->size - 1;
        bubble_down(q, 1);
    }
    
    return min;
}

void heap_sort(int *s, int size)
{
    priority_queue q;
    make_heap(&q, s, size);
    for (int i=0; i<size; i++){
        s[i] = extract_min(&q);
    }
}
