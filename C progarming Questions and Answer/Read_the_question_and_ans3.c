/*
Assume two strings S1= “HELLO” ,S2=”WORLD”. Write a program to do the following: 
a. Find the length of S1. 
b. Concatenate S1 and S2. 
c. Find the occurrence of a character ‘A’ in S1. 
d. Display the total length of the concatenation. 
e. Copy the string S2 in S1. 
f. Reverse the string S2. 
g. Convert S1 and S2 in lower case. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S1[] = "HELLO";
    char S2[] = "WORLD";

    // a. Find the length of S1
    int length_S1 = strlen(S1);
    printf("Length of S1: %d\n", length_S1);

    // b. Concatenate S1 and S2
    strcat(S1, S2);
    printf("Concatenated string: %s\n", S1);

    // c. Find the occurrence of character 'A' in S1
    int occurrence_A = 0;
    for (int i = 0; S1[i] != '\0'; i++) {
        if (S1[i] == 'A' || S1[i] == 'a') {
            occurrence_A++;
        }
    }
    printf("Occurrences of 'A' in S1: %d\n", occurrence_A);

    // d. Display the total length of the concatenation
    int total_length = strlen(S1);
    printf("Total length of concatenation: %d\n", total_length);

    // e. Copy the string S2 into S1
    strcpy(S1, S2);
    printf("S1 after copying S2: %s\n", S1);

    // f. Reverse the string S2
    int reverse=strlen(S2);
    for (int  i = 0; i < reverse/2; i++)
    {
        int temp=S2[i];
        S2[i]=S2[reverse-i-1];
        S2[reverse-i-1]=temp;
    }
    printf("Reversed S2: %s\n", S2);

//Convert S1 and S2 in lower case
   for (int  i = 0; S1[i]!='\0'; i++)
   {
        S1[i]=tolower(S1[i]);
   }
    printf("S1 in lowercase: %s\n", S1);

    for (int  i = 0; S2[i]!='\0'; i++)
   {
        S2[i]=tolower(S2[i]);
   }
    printf("S1 in lowercase: %s\n", S2);
}