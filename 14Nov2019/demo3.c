#include<stdio.h>
#include<stdlib.h>

//Array Implementation of Stack.

typedef struct Stack{
    int capacity;
    int top;
    int *arr;
}Stack;

//It is creating a stack.
Stack * createStack(int capacity){
    Stack *temp;
    temp->capacity = capacity;
    temp->top = -1;
    temp->arr = (int *)calloc(capacity,sizeof(int));

    return temp;
}

//It adds the element to stack(push operation).
void push(Stack *s,int data){
    if(s->top == s->capacity){
        printf("Stack Overflow\n");
        return;
    }

    s->top++;
    s->arr[s->top] = data;
}


//It removes the top element from the stack(POP operation).
int pop(Stack *s){
    if(s->top == -1){
        printf("Stack Undeflow\n");
        return 0;
    }

    int temp = s->arr[s->top];
    s->top--;

    return temp;
}

//It tells whether the stack is empty or not.
int isEmpty(Stack *s){

    return (s->top==-1);
}

//It gives the top element.
int peek(Stack *s){
    if(s->top == -1){
        printf("Stack Undeflow\n");
        return 0;
    }

    return s->arr[s->top];
}




int main(){
    Stack *s1 = createStack(10);
    push(s1,10);
    push(s1,20);
    push(s1,30);
    push(s1,40);
    push(s1,50);

    while(!isEmpty(s1)){
        printf("%d ",pop(s1));
    }

    return 0;
}