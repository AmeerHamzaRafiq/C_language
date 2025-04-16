#include <stdio.h>

main() {
    int rows, columns;

    printf("Please enter number of rows: ");
    scanf("%d", &rows);

    printf("Please enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf(" * ");
        }
        printf("\n");
    }

}


// output row = 5, columns = 10

// * * * * * * * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 