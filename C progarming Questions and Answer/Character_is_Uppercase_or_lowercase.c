#include<stdio.h>
int main(){
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("The character '%c' is an uppercase letter.\n",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
            printf("The character '%c' is an lowercase letter.\n",ch);
    }   
    else{
         printf("The character '%c' is not a letter.\n", ch);
    }
}