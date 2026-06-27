#include <stdio.h>
int climbStairs(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n;
    printf("Enter number of steps: ");
    scanf("%d", &n);
    int result = climbStairs(n);
    printf("Number of ways to climb %d steps = %d\n", n, result);
    return 0;
}
