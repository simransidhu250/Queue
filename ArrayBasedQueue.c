#include <stdio.h>
#define max_size 4

int arr[max_size];
int rear = -1, front = -1;

void EnQueue(int x){
    if((rear+1)%max_size == front){
        printf("Queuue is full\n");
    }
    else if((rear == -1)&&(front == -1)){
        front = rear = 0;
    }
    else{
        // printf("%d",x);
        rear = (rear+ 1) % max_size;
    }
    arr[rear] = x;
}
void DeQueue(){
    if ((front==-1)&&(rear == -1))
    {
        printf("Queue is empty\n");
    }
    else if(front == rear){
        rear = -1;
        front = -1;
    }
    else{
        front = (front+1) % max_size;
    }
    
}

void printQueue(){
    int count = (rear-front+max_size)%max_size+1;
    int index=-1;
    for (int i = 0; i < count; i++)
    {
        index  = (front+i)%max_size;
        printf("%d\t", arr[index]);
    }
    printf("\n");
}

void main(){
    EnQueue(2);
    EnQueue(4);
    EnQueue(6);
    EnQueue(8);
    printQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();

}