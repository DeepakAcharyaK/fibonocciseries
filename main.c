#include <stdio.h>

int fib(int n);

int main() {
    int i, n;

    printf("Enter the number of terms:\n");
    scanf("%d", &n); // Add & before n to store user input

    for (i = 0; i < n; i++) {
        printf("%d\t", fib(i));
    }

    return 0;
}

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
