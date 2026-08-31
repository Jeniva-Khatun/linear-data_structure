#include<stdio.h>
 int linear_search(int size,int *arr,int target){
     for(int i=0; i<size; i++){
         if(arr[i]==target){
             return i;
         }
     }
     return -1;
 }

 int main (){
int size;
printf("enter size of array: ");
scanf("%d", &size );
int arr[size];
printf("enter array elements: ");
for(int i=0; i<size;i++){
scanf("%d", &arr[i]);
}
int target;
printf("enter your target element to search: ");
scanf("%d", &target);

int result = linear_search(size,arr,target);

if(result!=-1){
    printf("element found at index %d\n", result);
}
else {
    printf("element not found\n");
}
     return 0;
 }
