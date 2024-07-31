#include <stdio.h>

main()
{
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    if ((num % 2) == 0)               // 나머지가 0인지를 검사한다.
        printf("%d는 짝수입니다.\n", num);
    else
        printf("%d는 홀수입니다.\n", num);

    return 0;
}
