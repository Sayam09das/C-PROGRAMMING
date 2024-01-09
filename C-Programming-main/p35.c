//Write a program in c to implement shif opertors
#include<stdio.h>
int main(){
    int a,result,shift_amount;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter how many positive to shift: ");
    scanf("%d",&shift_amount);
    result=a<<shift_amount;
    printf("After left shifting: %d\n",result);
}