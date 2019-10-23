#include<stdio.h>
#include<stdlib.h>
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node *createList();
void display(Node *);



int main(){
    int index=0,element = 0;
    Node *head = createList();
    display(head);
    return 0;
}




void display(Node * head){

    while(head != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
}

Node * createList(){
    Node *head;
    Node *temp;

    int value;
    printf("Enter the elements of the linked list\n");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            newNode->prev = temp;
            temp->next = newNode;
            temp = newNode;
        }
        scanf("%d",&value);
    }
    return head;
}