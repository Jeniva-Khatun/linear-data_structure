#include<stdio.h>
#define size 4

int stack[size];
int top = -1;

int stack_full(){
    return top == size-1;
}
int push (int value){
    if ( stack_full()){
        printf("stack overflow");
        return 0;
    }
    stack[++top] = value ;
}
void display() {
    printf("stack elements from top to bottom \n");
    for (int i = top; i>=0 ; i--){
        printf("%d\n", stack[i]);
    }
}

int main (){
push(30);
push(80);
display();

    printf("\n");
    return 0;
}
