#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
int* arr = (int*)malloc((digitsSize + 1) * sizeof(int));

if (arr == NULL) {
    *returnSize = 0;
    return NULL;
}

for (int i = 0; i < digitsSize; i++) {
    arr[i] = digits[i];
}

*returnSize = digitsSize;

for (int i = digitsSize - 1; i >= 0; i--) {
    if (arr[i] < 9) {
        arr[i]++;
        return arr;
    }
    arr[i] = 0;
}
arr[0] = 1;
for (int i = 1; i <= digitsSize; i++) {
    arr[i] = 0;
}
*returnSize = digitsSize + 1;
return arr;
}

void main(){
int n,t;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int returnSize=0;
int* res=plusOne(arr,n,&returnSize);
	for (int i = 0; i < returnSize; i++){
		printf("%d ", res[i]);
	}
	
}