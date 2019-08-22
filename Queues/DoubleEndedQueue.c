// Implementing a Double Ended Queue

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

void enqueue_at_front(QUEUE *q, int value){
    if(q -> front == 0){
        printf("Queue is full at front end.\n");
        return;
    }
    else if(q -> front == MAX){
        q -> rear = MAX - 1;
        q -> front = MAX - 1;
    }
    else{   
        q -> front = q -> front - 1;
    }
    q -> Q[q -> front] = value;
    printf("Value added %d\n", value);
}

void enqueue_at_rear(QUEUE *q, int value){
    if(q -> rear == MAX){
        printf("Queue is full at rear end.\n");
        return;
    }
    else if(q -> rear == -1){
        q -> rear = 0;
        q -> front = 0;
    }
    else{   
        q -> rear = q -> rear + 1;
    }
    q -> Q[q -> rear] = value;
    printf("Value added %d\n", value);
}

int dequeue(QUEUE *q){
    int value;
    if(q -> front == -1){
        printf("Queue is empty.\n");
        return -1;
    }
    else if(q -> front == q -> rear){
        value = q -> Q[q -> front]; 
        q -> front = -1;
        q -> rear = -1;
        return value;
    }
    else{
        value = q -> Q[q -> front]; 
        q -> front = q -> front + 1;
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
    enqueue(&Q, 2);
    enqueue(&Q, 1);
    enqueue(&Q, 3);
    n = dequeue(&Q);
    printf("Value deleted %d\n", n);
    n = dequeue(&Q);
    printf("Value deleted %d\n", n);
    n = dequeue(&Q);
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
