/* print this pattern

$ * * * $ 
* $   $ *
*   $   *
* $   $ *
$ * * * $


*/
#include <stdio.h>
int main() {
    int size = 5; // Size of the pattern (rows and columns)

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size) {
                if (j == 1 || j == size) {
                    printf("$ ");
                }
                else {
                    printf("* ");
                }
            } 
            else if (j == 1 || j == size) {
                printf("* ");
            }
            else if (i == j || i + j == size + 1) {
                printf("$ ");
            } 
            else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}