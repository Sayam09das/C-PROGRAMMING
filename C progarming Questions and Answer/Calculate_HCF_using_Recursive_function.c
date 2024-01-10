// Write a program to calculate the HCF of a number using recursive function
#include<stdio.h>
int hcf(int number1, int number2){
    while (number2!=0)
    {
        int temp=number2;
        number2=number1%number2;   
        number1=temp;
    }
    return number1;
}
int main(){
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d",&number1);
    printf("Enter the second number: ");
    scanf("%d",&number2);
    int hcf=(number1,number2);
    printf("\nThe HCF of %d and %d is %d\n", number1, number2, hcf);
}