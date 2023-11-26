#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if a perfect permutation is possible
    if (n % 2 != 0) {
        // If n is odd, a perfect permutation is not possible
        printf("-1\n");
    } else {
        // If n is even, print a perfect permutation
        for (int i = 1; i <= n; i += 2) {
            printf("%d %d ", i + 1, i);
        }
        printf("\n");
    }

    return 0;
}
