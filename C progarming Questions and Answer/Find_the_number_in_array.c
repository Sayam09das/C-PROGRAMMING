// Write a program in C to check a number in which postion in array 
#include<stdio.h>
int array_input(int array[], int *size, int element, int position) {
    for (int i = *size; i > position; i--)
    {
        array[i]=array[i-1];
    }
    array[position]=element;
    (*size)++;
    
}
int main(){
    int array[50]={1,2,3,4,5};
    int size=5;
    int element=10;
    int position=2;
    array_input(array,&size, element, position);
    for (int i = 0; i < size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}