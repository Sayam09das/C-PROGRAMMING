/* Write a program in C to print this pattern 
5 
4 
3 
2 
1  */
#include<stdio.h>
int main(){
    for (int i = 5; i >=1; i--)
    {
        for (int j = i; j>=i; j--)
        {
            printf("%d ",j);
        }
        printf("\n"); 
    }
    
}