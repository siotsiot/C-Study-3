#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;
    FILE *fp;
    int date, low, high;

    fp = fopen("weather.txt", "w");
    if (fp == NULL)
    {
        printf("weather.txt을 열 수 없습니다.\n");
        exit(1);
    }
    for (i = 1; i < 31; i++)
    {
        fprintf(fp, "2015-01-%02d ", i);
        fprintf(fp, "%02d %02d  ", i, i + 10);
    }
    fclose(fp);

    fp = fopen("weather.txt", "r");
    if (fp == NULL)
    {
        printf("weather.txt을 열 수 없습니다.\n");
        exit(1);
    }
    printf("날짜를 입력하시오: ");
    scanf("%d", &date);

    fseek(fp, (long)(date - 1) * 18 + 11, SEEK_SET);
    fscanf(fp, "%d %d", &low, &high);
    printf("최저온도:%d 최고온도:%d\n", low, high);

    fclose(fp);
    return 0;
}
