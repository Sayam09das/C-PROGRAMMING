//Write a program in c to implement of logical opertors
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if (a>0&&b>0)
    {
        printf("Both numbers are positive\n");
    }
    else
    {
        printf("At last one number is non-positive");
    }
}