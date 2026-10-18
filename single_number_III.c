#include<stdio.h>
#include<stdlib.h>
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int* arr=(int*)malloc(numsSize*sizeof(int));
     if (arr == NULL) {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count == 1) {
            arr[*returnSize] = nums[i];
            (*returnSize)++;
        }
    }
    return arr;

}
void main(){
int n;

printf("Enter the size of the array:");
scanf("%d",&n);

int arr[n];

printf("Enter the array elements :\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int returnSize; 
int *result = singleNumber(arr, n, &returnSize); 
printf("Common elements between the two arrays: "); 
for (int i = 0; i < returnSize; i++){ 
printf("%d ", result[i]); 
} 
printf("\n"); 
free(result);
}
