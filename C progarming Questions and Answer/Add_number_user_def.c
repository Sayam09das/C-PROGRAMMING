// Write a program in C to add two number using user define funcition
#include<stdio.h>
int addnumber(float *number1, float *number2, float *sum){
    *sum=(*number1+*number2);
}
int main(){
    float number1,number2,sum;
    printf("Enter the 1st number: ");
    scanf("%f",&number1);
    printf("Enter the 2nd number: ");
    scanf("%f",&number2);    
    addnumber(&number1,&number2,&sum);
    printf("The sum of two number is: %.2f",sum);
}