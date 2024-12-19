#include <stdio.h>

 main() {
    int second, fixSecond, fixMinute, fixHour;

    printf(" pleas enter seconds:");
    scanf("%d", &second);

    fixHour = second / 3600;
    fixMinute = (second % 3600) / 60; 
    fixSecond = second % 60 ;
    printf("Hours: %.1d, Minutes: %.1d,Seconds: %d ", fixHour,fixMinute,fixSecond);

    return 0;
}

 