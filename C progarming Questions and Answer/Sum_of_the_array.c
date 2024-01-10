#include<stdio.h>
#define rows 3
#define cols 3
int main(){
    int array1[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
    int array2[rows][cols]={{9,8,7},{6,5,4},{3,2,1}};
    int sum[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }  
    }
    printf("Sum of Arrays:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}