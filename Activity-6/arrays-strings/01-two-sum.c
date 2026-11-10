#include <stdio.h>
#include <stdlib.h>

/* Local test cases 
   Test case 1 (Typical case):
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]

    Test case 2 (Edge case - duplicate numbers):
    Input: nums = [3,3] target = 6
    Output: [0,1]
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

