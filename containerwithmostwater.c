#include<stdio.h>

int maxArea(int* height, int heightSize) {
  
    int left = 0;
    int right = heightSize - 1;

    int max = 0;

    while (left < right) {

        int width = right - left;

        int h;

        if (height[left] < height[right]) {
            h = height[left];
        } else {
            h = height[right];
        }

        int a= width * h;

        if (a > max) {
            max = a;
        }
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max;  
}

void main(){
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array values:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]):
}
int res=maxArea(arr,n);
printf("The max area of water is :%d",res);
}
