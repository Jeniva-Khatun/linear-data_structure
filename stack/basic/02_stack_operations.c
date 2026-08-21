// Check if Stack is Empty
#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

int is_stackempty (){
    return top == -1;
}
int main() {
    stack[++top]=20;
    if (is_stackempty()) {
        printf("Stack is Empty.\n");
    } else {
        printf("Stack is Not Empty.\n");
    }
    stack[++top]=10;

    if (is_stackempty()) {
        printf("Stack is Empty.\n");
    } else {
        printf("Stack is Not Empty.\n");
    }


return 0;

}
