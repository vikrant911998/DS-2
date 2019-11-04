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
Node * reverse(Node *);


int main(){
    
    Node *head = createList();
    display(head);
    printf("\n");
    Node * newHead = reverse(head);
    display(newHead);
    return 0;
}

Node *reverse(Node *head){
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = head;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
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
            newNode->prev = temp;
            temp->next = newNode;
            temp = newNode;
        }
        scanf("%d",&value);
    }
    return head;
}