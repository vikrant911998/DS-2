#include<stdio.h>
#include<stdlib.h>
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
    
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
    Node *temp = head;

    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);
  
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

    return head;
}