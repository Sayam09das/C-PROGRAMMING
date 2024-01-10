#include<stdio.h>
int bianry(int number){
    int decimal[225];
    int i=0;
    int base;
    while (number>0)
    {
        int digit=number%2;
        number=number/2;
        i++;
        decimal[225] +=digit* base;
        base *= 2;
    }
    printf("DECIMAL NUMBER IS:");
    for (int j = i-1; i > 0; j--)
    {
        printf("%d",decimal[j]);
    }
    
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    bianry(number);
}