#include<stdio.h>
int decimal(int number){
    int i=0;
    int bianry[32];
    while (number>0)
    {
        bianry[i]=number%2;
        number=number/2;
        i++;
    }
    printf("BINARY NUMBER IS:");
    for (int j = i-1; j >=0; j--)
    {
        printf("%d",bianry[j]);
    }
    
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    decimal(number);
}