#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX 1000 // prevent overflowing

typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = 0;
}

bool queue_isEmpty(Queue *q) {
    return (q->front == q->rear - 1);
}

bool queue_isFull(Queue *q) {
    return (q->rear == MAX);

}
void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        return;
    }
    q->items[q->rear] = value;
    q->rear++;
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        return;
    }
    q->front++;
}

int queue_top(Queue *q) {
    if (isEmpty(q)) {
        return INT_MIN;
    }
    return q->items[q->front + 1];
}

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    for (int i = q.front + 1; i < q.rear; i++) {
        printf("%d\n", q.items[i]);
    }
    printf("\n");
    dequeue(&q);
    for (int i = q.front + 1; i < q.rear; i++) {
        printf("%d\n", q.items[i]);
    }

    return 0;
}