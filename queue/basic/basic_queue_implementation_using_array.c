#include<stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear = -1;

int is_empty(){
    return front==-1;
}
int is_full(){
    return rear==size-1;
}
void enqueue(int value){
    if(is_full()){
        printf("queue overflow");
    }
    if (is_empty()){
        front=0;
    }
    queue[++rear]=value;
}
void dequeue(){
    if(is_empty()){
        printf("queue underflow");
    }
    printf("\ndeleted  %d\n", queue[front]);
    front++;
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void display (){
    if(is_empty()){
      printf("queue underflow");
    }
    for(int i = front; i <= rear ; i++){
        printf("%d ", queue[i]);
    }
}
int main (){
    int value;
for(int i=0;i<size;i++){
    printf("enter value %d : ",i+1);
    scanf("%d",&value);
    enqueue(value);

}
display();
dequeue();
display();
    return 0;
}
