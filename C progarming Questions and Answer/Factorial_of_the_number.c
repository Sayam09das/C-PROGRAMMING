#include <stdio.h>
#include <stdint.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

uint64_t fact = 1ULL;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("The factorial of %d is: %lld\n", num, fact);
    return 0;
}
