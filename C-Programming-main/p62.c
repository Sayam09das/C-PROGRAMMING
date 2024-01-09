//Write a program to print all the odd number using for loop
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Odd numbers from 1 to %d are:\n", num);
    for ( i = 1; i <=num; i++)
    {
       if (i%2!=0)
       {
          printf("%d\n",i);
       }
    }
}
