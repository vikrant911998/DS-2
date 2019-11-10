#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
    
}Node;

Node *createList();
void display(Node *);
Node* insertNode(Node *, int , int);

int main(){
    int index=0,element = 0;
    Node *last = createList();
    display(last);
    // printf("*******\n");
    // Node *newHead = insertNode(head,0,100);
    // display(newHead);
    return 0;
}

Node* insertNode(Node *head,int index, int element){
    Node *temp = head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->next = NULL;
    Node *last = head;
    while(last->next != head){
        last = last->next;
    }
    temp = last;
    if(index == 0){
        newNode->next = last->next;
        last = newNode;
        temp->next = newNode;
    }

    return last;
}



void display(Node * last){
    Node *temp = last->next;

    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != last->next);
}

Node * createList(){
    Node *head=NULL;
    Node *temp=NULL;

    int value=0;
    printf("Enter the elements of the linked list\n");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
       
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        scanf("%d",&value);
    }
    temp->next = head;

    return temp;
}