#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;


bool isEmpty(){
    if(front == NULL)
    {
        return true;
    }

    else {
         false;
    }

}

void EnQueue(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;

}

void DeQueue(){
    struct Node* temp = NULL;
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else if(front == rear)
    {
        free(front);
        front = NULL;
        rear = NULL;
    }
    else{
        temp = front;
        front = front->next;
        free(temp); 
    }
    
}


void PrintQueue(){
    struct Node* temp = NULL;
    temp = front;
    while (temp!=NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}

void main(){
    EnQueue(2); 
    // PrintQueue();
    EnQueue(4);
    // PrintQueue();
    EnQueue(6);
    // PrintQueue();
    // PrintQueue();
    EnQueue(8);PrintQueue();
}