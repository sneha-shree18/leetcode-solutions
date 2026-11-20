#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;
    int minPrice = prices[0];
    int maxProf = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProf) {
            maxProf = prices[i] - minPrice;
        }
    }
    return maxProf;
}

int main() {
    // Test Case 1: Typical profit case
    int p1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1 Profit: %d\n", maxProfit(p1, 6)); // Expected: 5

    // Test Case 2: Decreasing prices (0 profit edge case)
    int p2[] = {7, 6, 4, 3, 1};
    printf("Test 2 Profit: %d\n", maxProfit(p2, 5)); // Expected: 0
    return 0;
}