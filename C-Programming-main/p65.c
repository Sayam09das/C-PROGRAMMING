// Write program to find the sum of natural number using for loop
#include<stdio.h>
int main(){
    int limit, sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++) {
         sum=sum+i;
    }
     printf("The sum of natural numbers up to %d is: %d\n", limit, sum);
}