// Write a program in C to check which pointer number is bigger 
#include<stdio.h>
int main(){
    int *num1, *num2, *num3;
    int *a=&num1,*b=&num2,*c=&num3;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("Enter the 2nd number: ");
    scanf("%d",&num2);
    printf("Enter the 3rd number: ");
    scanf("%d",&num3);
    if (*a >= *b && *a >= *c) {
         printf("The %d number is bigger",*a);
    } else if (*b >= *a  && *b >= *c) {
         printf("The %d number is bigger",*b);
    } else {
         printf("The %d number is bigger",*c);

    }

}