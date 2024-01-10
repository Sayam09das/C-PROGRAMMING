// Write a progarm in C to print your name in reverse
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int a[100],i=1;
    printf("Enter your name: ");
    scanf("%s",a);
    printf("hi i am %s\n",a);
    strrev(a);
    printf("REVERSE THE NAME IS: %s",a);
}