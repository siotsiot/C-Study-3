// 32장 예제 #1
// 파일 Chapter32ex1.c

#include <stdio.h>
#include <stdlib.h>

get_scores(int scores[10], int n);
cal_average(int scores[10], int n);
print_average(int average);

main()
{
    int scores[10];
    int average;

    get_scores(scores, 10);
    average = cal_average(scores, 10);
    print_average(average);
    return 0;
}

get_scores(int scores[10], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("성적을 입력하시오 : ");
        scanf("%d", &scores[i]);
    }
}
cal_average(int scores[10], int n)
{
    int i, sum = 0, average;
    for (i = 0; i < 10; i++)
    {
        sum += scores[i];
    }
    average = sum / 10;
    return average;
}
print_average(int average)
{
    printf("평균은 %d입니다.\n", average);
}
