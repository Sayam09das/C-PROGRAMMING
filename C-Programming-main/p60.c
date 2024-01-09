// Write a program to a factorial of number using for loop.
#include<stdio.h>
int main(){
    int num, i = 1,fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for ( i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is: %d\n", num, fact);
}