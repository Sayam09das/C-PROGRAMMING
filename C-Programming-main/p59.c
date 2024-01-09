// Write a C program to print multiplication table of any number using for loop.
#include<stdio.h>
int main() {
    int num, i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
         printf("%d x %d = %d\n", num, i, num * i);
    }
}
