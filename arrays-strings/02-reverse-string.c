#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Typical case
    char str1[] = "hello";
    reverseString(str1, 5);
    printf("Test 1: %s\n", str1); // Expected: olleh

    // Test Case 2: Edge case (single element)
    char str2[] = "A";
    reverseString(str2, 1);
    printf("Test 2: %s\n", str2); // Expected: A

    return 0;
}