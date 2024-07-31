#include <stdio.h>
main()
{
    // 변수를 정의하고 초기화한다.
    char location[100];
    int date;
    float temp;

    printf("어디에 살고 계시나요? ");
    scanf("%s", location);

    printf("오늘이 며칠인가요? ");
    scanf("%d", &date);

    printf("오늘 기온은 몇도인가?(실수로) ");
    scanf("%f", &temp);

    printf("\n오늘은 %d일이고 %s이라는 아주 좋은 곳에 살고 계시군요!\n", date, location);
    printf("오늘은 %.1f도이군요.\n", temp);

    return 0;
}
