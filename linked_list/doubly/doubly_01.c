#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node *prev;
struct Node *next;

};

int main (){

    struct Node *head = malloc(sizeof(struct Node));
    struct Node *tail = malloc(sizeof(struct Node));

    head -> data = 20;
    head -> prev = NULL;
    head -> next = tail;

    tail->data=50;
    tail->prev=head;
    tail->next=NULL;

    printf("forward : ");
    struct Node  *temp = head ;
    while (temp!=NULL){
        printf("%d -> ",temp->data);
        temp= temp->next;

    }

    printf("NULL\n");

    printf("\nbackward :");
    temp = tail;
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
 printf("NULL\n");

free(head);
free(tail);


    return 0;
}
