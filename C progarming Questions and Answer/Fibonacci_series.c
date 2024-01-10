#include<stdio.h>
int main() {
    int num, temp, no1 = 0, no2 = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= num; ++i) {
        printf("%d ", no1);
        temp = no1 + no2;
        no1 = no2;
        no2 = temp;
    }
    return 0;
}