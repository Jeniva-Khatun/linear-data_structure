#include<stdio.h>
#include<stdlib.h>

struct Node {
   int  data ;
    struct Node *prev;
    struct Node *next;

};

int main (){


struct Node *head = malloc(sizeof(struct Node));
struct Node *middle = malloc(sizeof(struct Node));
struct Node *last = malloc(sizeof(struct Node));

//head node
head->data=30;
head->prev=last;
head->next=middle;};


//middle node
middle->data=50;
middle->prev=head;
middle->next=last;
//last node
last->data=70;
last->prev=middle;
last->next=head;



struct Node *temp = head ;
printf("printing forward ->  ");
do {
    printf("%d-> ",temp->data);
    temp=temp->next;
}

while(temp!=head);
 printf("%d",head->data);

printf("\nprinting backward ->  ");
temp=last;
do {
    printf("%d-> ",temp->data);
    temp=temp->prev;
}
while(temp!=last);
 printf("%d",last->data);

printf("\n");


    return 0;
}
