#include<stdio.h>
#include<stdlib.h>

//In the below function the time complexity is O(n2)
/* int* findDuplicates(int* nums, int numsSize, int* returnSize) {
int* result = malloc(numsSize * sizeof(int));
    *returnSize=0;
    int i,j;
    
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                result[*returnSize]=nums[i];
                (*returnSize)++;
            }
        }   

    }
    return result;
	}
	*/
	
//In the below function the time complexity is O(n)

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;

        if (nums[index] < 0) {
            result[*returnSize] = index + 1;
            (*returnSize)++;
        }
        else {
            nums[index] = -nums[index];
        }
    }
    return result;

}

void main(){
int n,k;
printf("Enter the size of the array:");
scanf("%d",&n);

int arr[n];
printf("Enter the array elements:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int returnSize;
int* result = findDuplicates(arr, n, &returnSize);

if (result == NULL) {
    printf("Memory allocation failed.\n");
}

printf("Duplicate elements: ");

if (returnSize == 0) {
    printf("No duplicates found.");
}

for (int i = 0; i < returnSize; i++) {
    printf("%d ", result[i]);
}

printf("\n");

free(result);

}
