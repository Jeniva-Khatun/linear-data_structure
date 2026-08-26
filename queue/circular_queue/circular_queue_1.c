#include<stdio.h>
#define size 4
int queue[size];
int front =-1;
int rear=-1;

int isfull(){
    return ((rear+1)%size==front);
}
int isempty(){
    return (front==-1);
}

void enqueue(int value ){
if (isfull()){
    printf("queue overflow\n");
    return ;
}
if (isempty()){
    front=rear=0;
}
else {
    rear=(rear+1)%size;
}

queue[rear]=value;
printf(" inserted %d \n", value);
}

void dequeue(){
    if (isempty()){
        printf("queue underflow");
        return;
    }
printf("%d dequeue \n ", queue[front]);

if (front==rear){
    front=rear=-1;
}
else{
    front=(front+1)%size;
}
}

void display (){
    if (isempty()){
        printf("queue underflow");
        return;
    }
int i=front;
printf("queue : ");

while (1){
    printf("%d ",queue[i]);
    if(i==rear)break;
    i=(i+1)%size;
}
printf("\n");

}

int main (){

    enqueue(11);
    enqueue(22);
    enqueue(33);
    enqueue(44);
    display ();


    dequeue();
    dequeue();
    display();

    enqueue(66);
    enqueue(77);
    display();

}
