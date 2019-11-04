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
Node *insertNode(Node *,int ,int);


int main(){
    
    Node *head = createList();
    display(head);
    printf("\n\n");
    Node * newHead = insertNode(head,100,0);
    display(newHead);
    return 0;
}

Node * insertNode(Node *head,int element, int index){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    Node *temp = head;
    if(index == 0){
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        return head;
    }
    else{

    }
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