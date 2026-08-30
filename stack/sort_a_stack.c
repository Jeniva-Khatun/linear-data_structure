#include<stdio.h>
#define size 100
int stack[size];
int top = -1;
int stack_full(){
  return  top==size-1;
}
int stack_empty(){
  return  top==-1;
}
int push (int value){
    if(stack_full()){
    return    printf("stack overflow");
    }
    return stack[++top]=value;
}
int pop (){
    if(stack_empty()){
    return    printf("stack underflow");
    }
    return stack[top--];
}
int display (){
    if(stack_empty()){
        return printf("stack underflow");
    }
    printf("elements from top to bottom : " );
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}
int bubbleSort(){
int i,j,temp;
for(i=0;i<top;i++){
    for(j=0;j<top-i;j++){
        if(stack[j]<stack[j+1]){
            temp=stack[j];
            stack[j]=stack[j+1];
            stack[j+1]=temp;

        }
    }
}

}


int main (){
int n=5,value;
printf("enter the no elements (size of the stack is %d) : ",size);
scanf("%d",&n);
if (n>size){
    printf("stack overflow ! maximun mize is %d",size);
    return 0;
}
printf("enter elements to sort : ");
for(int i =0;i<n;i++){
    scanf("%d",&value);
    push(value);
}


printf("before sorting :\n");
display();
bubbleSort();
printf("\nafter sorting :\n");
display();



    return 0;
}
