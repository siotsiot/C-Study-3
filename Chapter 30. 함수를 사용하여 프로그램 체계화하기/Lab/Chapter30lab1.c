#include <stdio.h>

int scores[10];
int average;

main()
{
    get_scores();
    cal_average();
    print_average();
    return 0;
}

get_scores()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("성적을 입력하시오 : ");
        scanf("%d", &scores[i]);
    }
}

cal_average()
{
    int i, sum = 0;
    for (i = 0; i <10; i++)
    {
        sum += scores[i];
    }
    average = sum / 10;
}

print_average()
{
    printf("평균은 %d입니다.\n", average);
}
