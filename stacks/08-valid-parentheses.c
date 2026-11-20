#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) return false;
            char topChar = stack[top--];
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    // Test Case 1: Valid string[cite: 12]
    printf("Test 1: %s\n", isValid("()[]{}") ? "true" : "false"); // Expected: true
    // Test Case 2: Mismatched brackets edge case[cite: 12]
    printf("Test 2: %s\n", isValid("(]") ? "true" : "false");     // Expected: false
    return 0;
}