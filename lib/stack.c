#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 1000 // prevent overflowing

typedef struct {
    int items[MAX];
    int top;
} Stack;


void initStack(Stack *s) {
    s->top = -1;
}

int stack_isFull(Stack *s) {
    return s->top == MAX - 1;
}

int stack_isEmpty(Stack *s) {
    return s->top == -1;
}

void stack_push(Stack *s, int value) {
    if (isFull(s)) {
        // overflow
        return;
    }
    s->items[++s->top] = value;
}

int stack_pop(Stack *s) {
    if (isEmpty(s)) {
        return INT_MIN; 
    }
    return s->items[s->top--];
}

int stack_top(Stack *s) {
    if (isEmpty(s)) {
        return INT_MIN;
    }
    return s->items[s->top];
}

int main() {
    Stack s;
    initStack(&s);

    stack_push(&s, 10);
    stack_push(&s, 20);
    stack_push(&s, 30);

    printf("%d\n", stack_top(&s));
    printf("%d\n", stack_pop(&s));
    printf("%d\n", stack_pop(&s));

    return 0;
}
