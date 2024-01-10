// Write a program in C to handle a file. How to open a file in C code 
#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("Sample.txt", "r");
    if (fp != NULL) {
        if (fgets(data, 100, fp) != NULL) {
            printf("%s", data);
        } else {
            printf("Unable to read from the file.\n");
        }
        fclose(fp); // Don't forget to close the file after opening and reading
    } else {
        printf("ERROR! Unable to open the file.\n");
    }

    return 0;
}
