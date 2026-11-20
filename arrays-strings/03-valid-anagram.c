#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    // Test Case 1: Typical case
    printf("Test 1: %s\n", isAnagram("anagram", "nagaram") ? "true" : "false"); // Expected: true
    // Test Case 2: Edge case (different lengths)
    printf("Test 2: %s\n", isAnagram("rat", "car") ? "true" : "false"); // Expected: false
    return 0;
}