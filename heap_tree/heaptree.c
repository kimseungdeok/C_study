#include <stdio.h>
#include <stdlib.h>
#define MAX_COUNT 100 // 배열로 구현할 때는 0번 인덱스는 사용 안하므로 하나를 빼야함 -> 99개만 사용 가능

typedef struct
{
    int data[MAX_COUNT];
    int size; // size는 MAX_COUNT-1까지 가면은 full로 찬 것이다.
} heapType; 

void insertHeap(heapType* h, int item) {
    int index;
    if (h->size >= (MAX_COUNT-1)) {
        printf("Full!!\n");
        return;
    }

    h ->size++;
    index = h->size;
    h->data[index] = item;

    while ((index != 1) && (h->data[index/2] < h->data[index])) {
        int temp = h->data[index/2];
        h->data[index/2] = h->data[index];
        h->data[index] = temp;

        index = index / 2;
    }
}

void printHeap(heapType* h) {
    int i;
    for (i = 1; i <= h->size; i++ ){
        printf("My heap :");
        printf("%d", h->data[i]);
    printf("\n");
    }
}

int deleteHeap(heapType* h) {
    int cur, child;
    int temp;
    int topdata = h->data[1];
    if (h->size==0){
        printf("Empty!!\n");
        return 0;
    }

    h->data[1] = h->data[h->size];
    h->size--;

    cur =1;
    while((cur*2) <= h->size) // 왼쪽 자식이 있는 동안
    {
        child = cur * 2;
        if (((child+1) <= h->size) && // 오른쪽 자식이 있고
            (h->data[child] < h->data[child+1]))
            child++;
        if(h->data[child] <= h->data[cur])
            break;
        temp = h->data[child];
        h->data[child] = h->data[cur];
        h->data[cur] = temp;

        cur = child;
    }

    return topdata;
}

void main() {
    int i, count;
    heapType heap;
    heap.size = 0; // 빈 힙 생성

    insertHeap(&heap, 17);
    insertHeap(&heap, 29);
    insertHeap(&heap, 27);
    insertHeap(&heap, 15);
    insertHeap(&heap, 34);
    printHeap(&heap);

    count = heap.size;
    for(i = 0; i < count; i++)
    {
        printf("delete: %d\n", deleteHeap(&heap));
    }
}