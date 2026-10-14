#include<stdio.h>

int search(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}

void main(){
int n,k,t;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements in ascening order:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter value to rotate the array:");
scanf("%d",&k);
for(int i = 0; i < k; i++){ 
int temp = arr[n - 1]; 
for (int j=n -1;j>0;j--){
arr[j]=arr[j-1];
}
arr[0] = temp; 
}
printf("Array after rotate:\n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\nEnter the target value:");
scanf("%d",&t);

int result=search(arr,n,t);
printf("Result:%d",result);
}