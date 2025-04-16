#include <stdio.h>

main()
{
    int oneDecrease = 4;

    for (int i = 5; i > 1; i--)
    {
        for (int j = 1; j <= oneDecrease; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        oneDecrease--;
    }
}

// output
// 5 5 5 5
// 4 4 4
// 3 3
// 2