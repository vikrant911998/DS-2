#include<stdio.h>
#include<stdlib.h>
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
Node *deleteNode(Node *,int);


int main(){
    int index=0;
    Node *head = createList();
    display(head);
    printf("Enter the index\n");
    scanf("%d",&index);
    Node *newHead = deleteNode(head,index);
    display(newHead);
    return 0;
}



Node *deleteNode(Node *head,int index){
    Node *temp = head;
    int count=0;
    if(index == 0 ){
        head = head->next;
    }
    else{
        while(count<index-1){
            temp = temp->next;
            count++;
        }
        
        temp->next = temp->next->next;
        
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