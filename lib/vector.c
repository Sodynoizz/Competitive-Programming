#include <stdio.h>
#include <stdlib.h>

// Vector Config
typedef struct vector {
    void **items;
    int capacity;
    int total;
} vector;


void vector_init(vector *v) {
    v->capacity = 4;
    v->total = 0;
    v->items = malloc(sizeof(void *) * v->capacity);
}

int vector_size(vector *v) {
    return v->total;
}

static void vector_resize(vector *v, int capacity) {
    void **items = realloc(v->items, sizeof(void *) * capacity);
    if (items) {
        v->items = items;
        v->capacity = capacity;
    }
}

void vector_push_back(vector *v, void *item) {
    if (v->capacity == v->total) {
        vector_resize(v, v->capacity * 2);
    }
    v->items[v->total++] = item;
}

void vector_set(vector *v, int index, void *item) {
    if (index >= 0 && index < v->total) {
        v->items[index] = item;
    }
}

void* vector_get(vector *v, int index) {
    if (index >= 0 && index < v->total) {
        return v->items[index];
    }
    return NULL;
}

int main() {
    vector v;
    vector_init(&v);

    for (int i = 0; i < 25; i++) {
        int *item = malloc(sizeof(int));
        *item = i;
        vector_push_back(&v, item);
    }

    for (int i = 0; i < vector_size(&v); i++) {
        printf("%d\n", *(int*) vector_get(&v, i));
    }
}

