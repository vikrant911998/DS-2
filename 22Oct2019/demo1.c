#include<stdio.h>
#include<stdlib.h>
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
int findValue(Node *,int);


int main(){
    int index=0;
    Node *head = createList();
    display(head);
    printf("Enter the index\n");
    scanf("%d",&index);
    printf("VALUE : %d\n",findValue(head,index));
    return 0;
}

int findValue(Node *head,int index){
    int count=0;
    while(head != NULL){
        if(count == index){
            return head->data;
        }
        count++;
        head = head->next;
    }
    return -1;
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