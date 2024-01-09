#include<stdio.h>
#include<ctype.h>
int main(){
    int totalInputs;
    int num_count = 0, float_count = 0, char_count = 0, string_count = 0;
    char input[100];
     printf("Enter any input: ");
     scanf("%d", &totalInputs);
     printf("Enter %d inputs:\n", totalInputs);
      for (int i = 0; i < totalInputs; i++) {
        if (scanf("%d", &num_count) == 1) {
            num_count++;
        } else if (scanf("%f", &float_count) == 1) {
            float_count++;
        } else if (scanf(" %c", &input[0]) == 1) {
            char_count++;
        } else {
            scanf("%s", input);
            string_count++;
        }
    }
     printf("Number of integers: %d\n", num_count);
    printf("Number of floats: %d\n", float_count);
    printf("Number of characters: %d\n", char_count);
    printf("Number of strings: %d\n", string_count);
}