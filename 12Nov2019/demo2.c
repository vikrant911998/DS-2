#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node *createList();
void display(Node *);
Node* getLast(Node *);
Node* deleteNode(Node *,int);


int main(){
    int index=0,element = 0;
    Node *head = createList();
    display(head);
    printf("*******\n");
    Node *newHead = deleteNode(head,3);
    display(newHead);
    return 0;
}

Node* getLast(Node *head){
    Node *temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    return temp;
}

Node* deleteNode(Node *head, int index){
    Node* temp = head;
    Node *last = getLast(head);

    if(index == 0){
        head = head->next;
        last->next = head;
        head->prev = last;
    }
    else{
        int count = 0;
        while(count<index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next->next;
        temp->next = temp1;
        temp1->prev = temp;
    }

    return head;
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
    temp->next = head;
    head->prev = temp;

    return head;
}