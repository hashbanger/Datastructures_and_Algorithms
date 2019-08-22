#include<stdio.h>

#define MAX 10

typedef struct stk{
    int top;
    int s[MAX];
}STACK;

void createStack(STACK *s){
    s -> top = -1;
}

void push(STACK *s, int value){
    if(s -> top == MAX -1){
        printf("Stack is full.\n");
        return -1;
    }
    else{
        s -> top = s -> top + 1;
        s -> s[s -> top] = value;
        printf("Value pushed %d\n", value);
    }
}

int pop(STACK *s){
    int value;
    if(s -> top == -1){
        printf("Stack is empty.\n");
        return -1;
    }
    else{
        value = s -> s[s -> top]; 
        s -> top = s -> top - 1;
        return value;
    }
}

int isEmpty(STACK *s){
    if(s -> top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }

}

int peek(STACK *s){
    if(s -> top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        return s -> s[s -> top];
    }
}

int main()
{
    STACK S;
    int n;
    createStack(&S);
    push(&S, 1);
    push(&S, 2);
    push(&S, 3);
    n = pop(&S);
    printf("Value popped %d\n", n);
    n = peek(&S);
    printf("Value at top %d\n", n);
    isEmpty(&S);
    return 0;
}
