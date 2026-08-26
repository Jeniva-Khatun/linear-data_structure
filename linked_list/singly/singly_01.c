#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next ;
};


int main (){

    struct node *first ;
    struct node *second ;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

first->data=10;
second->data=20;

first->next=second;
second->next=NULL;

struct node *temp=first;

while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp=temp->next;
}
printf("NULL\n");


    return 0;
}
