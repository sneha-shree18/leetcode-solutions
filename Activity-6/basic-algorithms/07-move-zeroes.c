#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int lastNonZero = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[lastNonZero];
            nums[lastNonZero] = nums[i];
            nums[i] = temp;
            lastNonZero++;
        }
    }
}

int main() {
    // Test Case 1: Mixed values[cite: 12]
    int arr1[] = {0, 1, 0, 3, 12};
    moveZeroes(arr1, 5);
    printf("Test 1: ");
    for(int i=0; i<5; i++) printf("%d ", arr1[i]); // Expected: 1 3 12 0 0
    printf("\n");

    // Test Case 2: Single zero edge case[cite: 12]
    int arr2[] = {0};
    moveZeroes(arr2, 1);
    printf("Test 2: %d\n", arr2[0]); // Expected: 0
    return 0;
}