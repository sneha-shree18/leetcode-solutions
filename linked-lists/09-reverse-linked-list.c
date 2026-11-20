#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *nextTemp = NULL;

    while (curr != NULL) {
        nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

// Helper functions to build and print the linked list locally
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void printList(struct ListNode* head) {
    if (head == NULL) {
        printf("[]\n");
        return;
    }
    printf("[");
    while (head != NULL) {
        printf("%d", head->val);
        if (head->next != NULL) printf(", ");
        head = head->next;
    }
    printf("]\n");
}

int main() {
    // Test Case 1: Typical case [1 -> 2 -> 3 -> 4 -> 5]
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    struct ListNode* rev1 = reverseList(head1);
    printf("Test 1 Output: ");
    printList(rev1); // Expected: [5, 4, 3, 2, 1]

    // Test Case 2: Edge case (empty list [])
    struct ListNode* head2 = NULL;
    struct ListNode* rev2 = reverseList(head2);
    printf("Test 2 Output: ");
    printList(rev2); // Expected: []

    return 0;
}