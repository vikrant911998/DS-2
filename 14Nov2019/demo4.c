#include<stdio.h>
#include<stdlib.h>

// "{a+b-(c-[d])+e-[f]}"

typedef struct Stack{
    int data;
    struct Stack *next;
}Stack;

Stack *top = NULL;

void push(int data){
    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->data = data;
    temp->next  = NULL;

    if(!temp){
        printf("Stack Overflow\n");
        return ;
    }

    if(top == NULL){
        top = temp;
    }
    else{
        temp->next = top;
        top =  temp;
    }
}

int pop(){
    if(top == NULL){
        printf("Stack Underflow\n");
        return 0;
    }

    int temp = top->data;
    top = top->next;

    return temp;
}

int peek(){
    if(top == NULL){
        printf("Stack Underflow\n");
        return 0;
    }

    return top->data;
}

int isEmpty(){
    return (top== NULL);
}


void display(){
    Stack *temp = top;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();
    printf("\n");

    while(top != NULL){
        printf("Popped Element : %d \n",pop());
    }
    // printf("Popped Element : %d ",pop());
    // printf("Popped Element : %d ",pop());
    
    // printf("\n");

    // display();
    return 0;
}