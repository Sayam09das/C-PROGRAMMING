// Write a program to sum the series 1/1^2 + 1/2^2 + 1/3^2 ...... n
#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    float sum=0.0,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        a=(float)1/pow(i,2);
        sum=sum+a;
    }
    printf("\n The sum of the series 1/1^2+ 1/2^2 + 1/3^2 ...... 1/%d^2=%.2f",n,n);

}
 