//Write a program to print fibonacci series.
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d, ", first);
            next = first + second;
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
