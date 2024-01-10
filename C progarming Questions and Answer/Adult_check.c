// Write a program in C to check you are an adult or not using only if-else statemate
#include<stdio.h>

int main(){
int age;
printf("Enter the year: ");
scanf("%d", &age);
int isAdult = (age >= 18) ? 1 : 0;


if (isAdult) {
  printf("You are an adult.\n");
} else {
  printf("You are not an adult.\n");
}
}