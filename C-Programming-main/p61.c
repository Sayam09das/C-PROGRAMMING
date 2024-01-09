//  Write program to find the sum of natural number using for loop.
#include<stdio.h>
int main(){
    int num,i=1,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
       sum=sum+i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", num, sum);
}