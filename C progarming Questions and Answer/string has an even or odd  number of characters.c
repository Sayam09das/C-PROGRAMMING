#include<stdio.h>
int main(){
    char input[100];
    int count=0;
    printf("Enter a string: ");
    scanf("%d",input);
    for ( int count = 0; input[count]!= '\0'; count++)
    {
        if (count%2==0)
        {
            printf("The string has an even number of characters.\n");
        }
        else{
            printf("The string has an odd number of characters.\n");
        }
    }  
}