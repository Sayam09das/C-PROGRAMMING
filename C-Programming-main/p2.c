//Write a c program to perform arithmetic operation like add,sub,multi,divi drom the user
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("The sum of a+b=%d\n",a+b);
    printf("The subtraction value of a-b=%d\n",a-b);
    printf("The multiplication value of a*b=%d\n",a*b);
    printf("The division value of a/b=%d\n",a/b);
    return 0;
}