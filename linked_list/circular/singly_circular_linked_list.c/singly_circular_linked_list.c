#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main (){

    struct node *head = malloc(sizeof(struct node));
    struct node *second  = malloc(sizeof(struct node));
    struct node *third  = malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=50;
    third->next=head;

struct node *temp=head;
do {
    printf("%d -> ",temp->data);
    temp=temp->next;
}
while (temp!=head);

printf("%d(head)\n",head->data);

free(head);
free(second);
free(third);

 return 0;
    }
