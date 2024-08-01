#include <stdio.h>

main()
{
    int sum = 0, num;

    do {
        printf("정수를 입력하시오: ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("합계=%d", sum);

    return 0;
}
