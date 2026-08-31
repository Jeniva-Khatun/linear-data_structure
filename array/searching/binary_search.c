#include<stdio.h>
int binary_search(int size,int *arr,int target){
   int high=size-1,low=0;
   while(low<=high){
       int mid = low + (high-low)/2;

if(arr[mid]==target){
    return mid;
}
else if (arr[mid]<target){
    low=mid+1;
}
else {
    high = mid-1;
}
   }
    return -1;
}

int main (){
int size;
printf("enter size of array: ");
scanf("%d", &size );
int arr[size];
printf("enter sorted array elements: ");
for(int i=0; i<size;i++){
scanf("%d", &arr[i]);
}
int target;
printf("enter your target element to search: ");
scanf("%d", &target);

int result = binary_search(size,arr,target);

if(result!=-1){
   printf("element found at index %d\n", result);
}
else {
   printf("element not found\n");
}
    return 0;
}
