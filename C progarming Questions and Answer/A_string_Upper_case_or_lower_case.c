// Write a program in C to check a string is an upper case or lower case
#include<stdio.h>
int main(){
    char input[1000];
    printf("Enter a string: ");
    scanf("%s",&input);
    printf("Uppercase string:");
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i]>='a' && input[i]<='z')
        {
            input[i]=input[i]-32;
        }
        printf("%c",input[i]);
    }
    
}