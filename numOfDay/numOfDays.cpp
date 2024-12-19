#include <stdio.h>

main()
{

    int livedYear, totalDaysInLive;
    printf("pleas enter your age:");
    scanf("%d", &livedYear);

    totalDaysInLive = livedYear * 356;
    printf("You have lived days.\n %d", totalDaysInLive);
}
