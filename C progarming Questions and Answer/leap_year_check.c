// Write a program to check whether the year is leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if ((year%400!=0) && (year%4==0) || (year%100==0))
    {
        printf("%d leap year",year);
    }
    else{
         printf("%d Not a leap year",year);
    }
}