#include<stdio.h>
#include<stdlib.h>
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* arr=(int*)malloc(10000*sizeof(int));
    *returnSize=0;
    int i=0;
    for (int i = 0; i < nums1Size; i++) {
        for (int j = i + 1; j < nums1Size; j++) {

            if (nums1[i] == nums1[j]) {

                for (int k = j; k < nums1Size - 1; k++) {
                    nums1[k] = nums1[k + 1];
                }

                nums1Size--;
                j--;
            }
        }
    }
    for (int i = 0; i < nums2Size; i++) {
        for (int j = i + 1; j < nums2Size; j++) {

            if (nums2[i] == nums2[j]) {

                for (int k = j; k < nums2Size - 1; k++) {
                    nums2[k] = nums2[k + 1];
                }

                nums2Size--;
                j--;
            }
        }
    }


    while(i<nums1Size){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                arr[*returnSize]=nums1[i];
                (*returnSize)++;
                break;
            }
    }
    i++;
    }
 
    return arr;
}

void main(){
int n1,n2;

printf("Enter the size of the 1st array:");
scanf("%d",&n1);

int a1[n1];

printf("Enter the 1st array elements :\n");
for(int i=0;i<n1;i++){
scanf("%d",&a1[i]);
}

printf("Enter the size of the 2nd array:");
scanf("%d",&n2);

int a2[n2];

printf("Enter the 2nd array elements :\n");
for(int i=0;i<n2;i++){
scanf("%d",&a2[i]);
}

int returnSize; 
int *result = intersection(a1, n1, a2, n2, &returnSize); 
printf("Common elements between the two arrays: "); 
for (int i = 0; i < returnSize; i++){ 
printf("%d ", result[i]); 
} 
printf("\n"); 
free(result);
}
