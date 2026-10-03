#include <stdio.h>
#include <stdlib.h>

int threeSumClosest(int* nums, int numsSize, int target) {

    // Sort the array using bubble sort
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {

            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) {

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            if (abs(target - sum) < abs(target - closest)) {
                closest = sum;
            }

            if (sum == target) {
                return sum;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return closest;
}

int main() {

    int nums[] = {-1, 2, 1, -4};
    int numsSize = 4;
    int target = 1;

    int result = threeSumClosest(nums, numsSize, target);

    printf("Closest sum = %d\n", result);

    return 0;
}