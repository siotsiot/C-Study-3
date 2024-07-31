#include <stdio.h>

main()
{
    // 변수를 정의하고 초기화한다.
    int value1;
    int value2;
    int quotient;
    int remainder;

    printf("첫 번째 정수: ");
    scanf("%d", &value1);

    printf("두 번째 정수: ");
    scanf("%d", &value2);

    quotient = value1 / value2;
    remainder = value1 % value2;

    printf("\n몫은 %d입니다.\n", quotient);
    printf("\나머지는 %d입니다.\n", remainder);

    return 0;
}
