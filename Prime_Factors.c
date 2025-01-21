//// . A positive integer is entered through the keyboard; write a recursive function to obtain the prime factors of that integer.
#include <stdio.h>

void primeFactors(int n, int i) {
    if (n <= 1) {
        return;
    }
    if (n % i == 0) {
        printf("%d ", i);
        primeFactors(n / i, i);
    } else {
        primeFactors(n, i + 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    primeFactors(n, 2);
    return 0;
}