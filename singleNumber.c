#include<stdio.h>

int singleNumber(int* nums, int numsSize) {
    int i,j;
    int res;
    for(j=0;j<numsSize;j++){
        int count=0;
        for(i=0;i<numsSize;i++){
            if(nums[j]==nums[i]){
                count++;
            }
        }
        if(count==1){
            res=nums[j];
        }
    }
    return res;
}

void main(){
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("The single value is :%d",singleNumber(arr,n));
}
