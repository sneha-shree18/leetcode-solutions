#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    // Test Case 1: Target present[cite: 12]
    int arr[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1 Index: %d\n", search(arr, 6, 9)); // Expected: 4

    // Test Case 2: Target absent edge case[cite: 12]
    printf("Test 2 Index: %d\n", search(arr, 6, 2)); // Expected: -1
    return 0;
}