
//    3) Take input and generate a table of any number


#include <stdio.h>

main()
{
    int TableNum;

    printf("Please enter how many Table Of Any Number:");
    scanf("%d", &TableNum);

    // printf("%d",printNum);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",TableNum, i , 2 * i);
    }
}


