#include <stdio.h>

main()
{
    int time;
    printf("현재 시각을 입력하시오: ");
    scanf("%d", &time);

    if (time < 10) {
        printf("Good morning");
    }
    else if (time < 20) {
        printf("Good day");
    }
    else {
        printf("Good evening");
    }

    return 0;
}
