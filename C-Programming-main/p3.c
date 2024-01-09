//Write a c program to perform swap the value of two variables
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before swapping: a=%d, b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: a=%d, b=%d\n",a,b);
    return 0;
}