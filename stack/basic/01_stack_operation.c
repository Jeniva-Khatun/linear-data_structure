// Implement Stack using Array
#include<stdio.h>
#define SIZE 5
int arr[SIZE];
int top = -1 ;

int is_stackfull() {
  return  top == SIZE - 1;
}
int is_stackempty () {
    return top == -1 ;
}
void push (int element ){
    if (is_stackfull()){
        printf("Stack overflow");
       return ;
    }
    arr[++top] = element ;
   // printf("pushed element %d\n",element);
}

int pop (){
    if (is_stackempty()){
        printf("Stack underflow");
        return -1;
    }

    arr[top--];
}
int peek (){
    if (is_stackempty()){
        printf("stack underflow");
        return -1;
    }
    return arr[top];
}
void display (){
    if(is_stackempty()){
        printf("stack underflow");
        return ;
    }
    printf("stack top to bottom : ");
    for(int i = top ; i >= 0 ; i--){
        printf("%d\n",arr[i]);

    }
}

int main (){

  push (10);
  push(20);
  push(30);

display ();
pop();
display();

push(40);
push(50);
push(60);
display ();

printf("peek = %d\n", peek());

push (70);

while(!is_stackempty()){
    printf("\nPopping = %d\n", pop());

}
  pop();
return 0;
}
