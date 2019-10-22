#include<stdio.h>
#include<stdlib.h>
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
Node *insertNode(Node *,int,int);


int main(){
    int index=0,element = 0;
    Node *head = createList();
    display(head);
    printf("Enter the index\n");
    scanf("%d",&index);
    printf("Enter the index\n");
    scanf("%d",&element);
    Node *newHead = insertNode(head,index,element);
    display(newHead);
    return 0;
}

Node *insertNode(Node *head,int index,int element){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    int count=0;
    Node *temp = head;
    if(index == 0){
        head = newNode;
        newNode->next = temp;
    }
    else{
        
        Node *temp1 = NULL;
        while(count<index-1){
            temp = temp->next;
            count++;
        }
        temp1 = temp->next;
        temp->next = newNode;
        newNode->next = temp1;
    }

    return head;
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
            temp->next = newNode;
            temp = newNode;
        }
        scanf("%d",&value);
    }
    return head;
}