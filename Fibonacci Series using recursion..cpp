#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int count;
    printf("Enter the number of terms: ");
    scanf("%d", &count);
    printf("Fibonacci series up to %d terms: ", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
