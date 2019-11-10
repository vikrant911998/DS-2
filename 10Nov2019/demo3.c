#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
    
}Node;

Node *createList();
void display(Node *);
int detect1(Node *);
int detect2(Node *);
int detect3(Node *);

int main(){
    int index=0,element = 0;
    Node *head = createList();
    // display(head);
    if(detect3(head)){
        printf("Loop Detected\n");
    }
    else{
        printf("Loop Not Detected\n");
    }
    
    return 0;
}

int detect3(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return 1;
        }

    }
    return 0;
}


int detect2(Node *head){
    Node * temp = head;

    do{
        temp = temp->next;
        if(temp == head){
            return 1;
        }
        
    }while(temp);
    return 0;

}

int detect1(Node *head){
    Node * temp = head;

    while(temp){
        if(temp == head){
            return 1;
        }
        temp = temp->next;
    }
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