#include <stdio.h>

int main() {
    int a[3][3], i, j;
    printf("Enter 9 integers for the 3x3 matrix:\n");
    
    // Reading the matrix elements
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing the matrix
    printf("The 3x3 matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
