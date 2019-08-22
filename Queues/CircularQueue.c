// Implementing a Circular Queue

#include<stdio.h>

#define MAX 10

typedef struct queue{
    int front;
    int rear;
    int Q[MAX];
}QUEUE;

void createQueue(QUEUE *q){
    q -> front == -1;
    q -> rear == -1;
}

void enqueue(QUEUE *q, int value){
    if((q -> rear + 1) % MAX == q ->front){
        printf("Queue is full.\n");
        return;
    }
    else if(q -> rear == -1 && q -> front == -1 ){
        q -> rear = 0;
        q -> front = 0;
    }
    else{
        q -> rear = (q -> rear + 1) % MAX;
    }
    q -> Q[q -> rear] = value;
    printf("Values added %d\n", value);
}

int delete(QUEUE *q){
    int value;
    if(q -> front == -1){
        printf("Queue is empty.\n");
        return -1;
    }

    value = q -> Q[q -> front]; 
    if(q -> front == q -> rear){
        q -> front = -1;
        q -> rear = -1;
    }
    else{
        q -> front = (q -> front + 1) % MAX;
        return value;
    }
}

int isEmpty(QUEUE *q){
    if(q -> rear == -1 || q -> front > q -> rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }

}

void peek(QUEUE *q){
    if(q -> rear == -1 || q -> front > q -> rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Value at front %d\n", q -> Q[q -> front]);
    }
}

int main()
{
    QUEUE Q;
    int n;
    createQueue(&Q);
    add(&Q, 1);
    add(&Q, 2);
    add(&Q, 3);
    n = delete(&Q);
    printf("Value deleted %d\n", n);
    n = delete(&Q);
    printf("Value deleted %d\n", n);
    n = delete(&Q);
    printf("Value deleted %d\n", n);
    peek(&Q);
    // add(&Q, 1);
    // add(&Q, 2);
    // add(&Q, 3);
    // n = delete(&Q);
    // printf("Value deleted %d\n", n);
    // n = delete(&Q);
    // printf("Value deleted %d\n", n);
    // n = delete(&Q);
    // printf("Value deleted %d\n", n);
    return 0;
}
