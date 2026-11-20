#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char* prefix = strs[0];
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
    }
    return prefix;
}

int main() {
    // Test Case 1: Typical case
    char* s1[] = {"flower", "flow", "flight"};
    printf("Test 1: %s\n", longestCommonPrefix(s1, 3)); // Expected: fl

    // Test Case 2: No common prefix edge case[cite: 12]
    char* s2[] = {"dog", "racecar", "car"};
    printf("Test 2: %s\n", longestCommonPrefix(s2, 3)); // Expected: ""
    return 0;
}