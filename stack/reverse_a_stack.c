#include <stdio.h>

#define MAX 5

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int value) {
    stack1[++top1] = value;
}

int pop1() {
    return stack1[top1--];
}

void push2(int value) {
    stack2[++top2] = value;
}

int pop2() {
    return stack2[top2--];
}

int main() {
    push1(10);
    push1(20);
    push1(30);
    push1(40);
    push1(50);

    while (top1 != -1){
        push2(pop1());
    }
    printf("Reversed Stack (Top -> Bottom): ");
    while (top2 != -1) {
        printf("%d ", pop2());
    }
    return 0;
}
