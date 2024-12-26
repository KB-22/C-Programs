#include <stdio.h>

// Ackermann function
int fun1(int m, int n) {
    if (m == 0) {  // Comparison using '=='
        return n + 1;
    } else if (m > 0 && n == 0) { // Corrected logical condition
        return fun1(m - 1, 1);
    } else { // Recursive case
        return fun1(m - 1, fun1(m, n - 1));
    }
}

int main() {
    int m, n;

    // Prompt the user to enter values of m and n
    printf("Please enter the value of m: ");
    scanf("%d", &m);

    printf("Please enter the value of n: ");
    scanf("%d", &n);

    // Compute and display the Ackermann result
    printf("Ackermann(%d, %d) = %d\n", m, n, fun1(m, n));

    return 0;
}
