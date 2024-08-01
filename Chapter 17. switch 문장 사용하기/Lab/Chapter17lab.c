#include <stdio.h>

main()
{
    int month = 2;
    int year = 2015;
    int numDays = 0;

    printf("월을 입력하시오: ");
    scanf("%d", &month);

    switch(month) {
    case 1: case 3: case 5:
    case 7: case 8: case 10:
    case 12:
        numDays = 31;
        break;
    case 4: case 6:
    case 9: case 11:
        numDays = 30;
        break;
    case 2:
        if ((year % 4 == 0) &&
            !(year % 100 == 0)
            || (year % 400 == 0))
            numDays = 29;
        else
            numDays = 28;
        break;
    default:
        printf("잘못된 월입니다.\n");
        break;
    }
    printf("%d월은 %d일까지 있습니다.\n", month, numDays);
}
