#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 1000 // prevent overflowing

typedef struct {
    int items[MAX];
    int size;
} priority_queue;

void swap(int *a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(priority_queue *pq, int index) {
    if (index && pq->items[index] < pq->items[(index - 1) / 2]) {
        swap(&pq->items[index], &pq->items[(index - 1) / 2]);
        heapifyUp(pq, (index - 1) / 2);
    }
}

void priority_queue_enqueue(priority_queue *pq, int value) {
    if (pq->size == MAX) return;
    pq->items[pq->size++] = value;
    heapifyUp(pq, pq->size - 1);    
}

void heapifyDown(priority_queue *pq, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < pq->size && pq->items[left] < pq->items[smallest]) 
        smallest = left;
    if (right < pq->size && pq->items[right] < pq->items[smallest])
        smallest = right;

    if (smallest != index) {    
        swap(&pq->items[index], &pq->items[smallest]);
        heapifyDown(pq, smallest);
    }
}

int priority_queue_dequeue(priority_queue *pq) {
    if (!pq->size) return -1;
    int item = pq->items[0];
    pq->items[0] = pq->items[--pq->size];
    heapifyDown(pq, 0);
    return item;
}

int priority_queue_top(priority_queue *pq) {
    if (!pq->size) return -1;
    return pq->items[0];
} 

int main() {
    priority_queue pq = { { 0 }, 0 };
    
    priority_queue_enqueue(&pq, 3);
    priority_queue_enqueue(&pq, 2);
    priority_queue_enqueue(&pq, 15);
    priority_queue_enqueue(&pq, 5);
    priority_queue_enqueue(&pq, 4);
    priority_queue_enqueue(&pq, 45);

    printf("%d\n", priority_queue_dequeue(&pq));
    printf("%d", priority_queue_top(&pq));
    return 0;
}   
