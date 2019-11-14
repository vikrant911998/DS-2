#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stack{
    char data;
    struct Stack *next;
}Stack;

Stack *top=NULL;

void push(char data){
    Stack *newNode = (Stack *)malloc(sizeof(Stack));
    newNode->data = data;
    newNode->next = NULL;
    
    if(top == NULL){
        top = newNode;
    }
    else{
        newNode->next = top;
        top = newNode;
    }
}

char pop(){
    if(top == NULL)
        return 0;
    char temp = top->data;
    top = top->next;

    return temp;
}

void display(){
    Stack *temp = top;
    while(temp != NULL){
        printf("%c ",temp->data);
        temp = temp->next;
    }
}



int main(){
    char *str = "{a+[b-c+(d)]+[e]}{";
    int length = strlen(str);
    int i=0,count1=0,count2 = 0 ;

    for(i=0;i<length;i++){
        if(str[i] == '{' || str[i]=='[' || str[i]=='('){
            push(str[i]);
            count1++;
        }

        if(str[i] == ')' || str[i]==']' || str[i] == '}'){
            char temp = pop();

            if(temp=='{' && str[i]=='}'){
                count2++;
            }
            else if(temp=='[' && str[i]==']'){
                count2++;
            }
            else if(temp=='(' && str[i]==')'){
                count2++;
            }

        }
    }

    if(count1 == count2){
        printf("Bracket Balanced\n");
    }
    else{
        printf("Unbalanced\n");
    }

    return 0;
}

//Power  calculation using recursion.
// length of string using recursion.
// replace a character in a string with another character using recursion.