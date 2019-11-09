#include<stdio.h>
#include<stdlib.h>

//function declaration
// 123456->
// 123456->561234
// detect a loop in link list


typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node *createList();
void display(Node *);
Node *deleteNode(Node *,int);


int main(){
    int index=0,element = 0;
    Node *head = createList();
    display(head);
    printf("\n");
    Node *newHead = deleteNode(head,3);
    display(newHead);
    
    return 0;
}

Node *deleteNode(Node *head,int index){
    Node *temp = head;
    Node *temp1 = NULL;
    int count=0;

    if(index == 0){
        head = head->next;
        head->prev = NULL;
        
    }
    else{
        while(count<index-1){
            temp = temp->next;
            count++;
        }
        if(temp->next->next != NULL){
            temp1 = temp->next->next;
            temp->next = temp1;
            temp1->prev = temp;
        }
        else{
            temp->next  =NULL;
        }
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