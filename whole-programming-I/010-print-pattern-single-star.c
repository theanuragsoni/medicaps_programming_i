// 10. Write a program to print the following pattern:
// *
// **
// ***
// ****

#include <stdio.h>

int main()
{
    int i, j, rows = 4;

    for(i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}