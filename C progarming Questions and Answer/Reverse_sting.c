// Write a program in C to print a reverse sting
#include <stdio.h>
#include <string.h>
void reversePrint(char *str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
int main() {
    char input[100];

    printf("Enter a line of text: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    printf("Reversed characters: ");
    reversePrint(input);
}