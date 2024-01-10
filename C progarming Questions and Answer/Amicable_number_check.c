#include<stdio.h>
int main(){
    int sum1=0,sum2=0,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number/2; i++)
    {
        if(number%i==0){
        sum1+=i;
        }
    }
    for (int j = 1; j <= sum1/2; j++)
    {
        if(sum1%j==0){
        sum2+=j;
        }
    }
    if (number==sum2 && sum1!=sum2)
    {
        printf("%d amicable number is",number);
    }
    else
      printf("%d not amicable number is",number);
}