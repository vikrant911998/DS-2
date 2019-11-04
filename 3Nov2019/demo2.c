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
    int index=0,element = 0;
    Node *head = createList();
    display(head);
    printf("\n");
    Node *newHead = insertNode(head,100,2);
    display(newHead);
    return 0;
}
int len(Node *head){
    int count=0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
Node *insertNode(Node *head,int element,int index){
    Node *temp = head;
    Node *temp1 = NULL;
    int count=0;

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(index == 0){
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        
    }
    else if(index == len(head)){
        while(count<index-1){
            count++;
            temp = temp->next;
        }

        temp1 = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = temp1;
    }
    else{
        while(count<index-1){
            count++;
            temp = temp->next;
        }

        temp1 = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = temp1;
        temp1->prev = newNode;
       
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
    Node *head=NULL;
    Node *temp=NULL;

    int value=0;
    printf("Enter the elements of the linked list\n");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        scanf("%d",&value);
    }
    
    return head;
}