#include <stdio.h>

main()
{
    int x, y, z;

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x < y && x < z)
        printf("가장 작은 수는 %d입니다.\n", x);
    else if (y < z && y < x)
        printf("가장 작은 수는 %d입니다.\n", y);
    else
        printf("가장 작은 수는 %d입니다.\n", z);

    return 0;
}
