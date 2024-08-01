#include <stdio.h>

main()
{
    int number, factorial;

    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    factorial = 1;

    while (number > 0) {
        factorial = factorial * number;
        --number;
    }

    printf("팩토리얼값(n!)=%d\n", factorial);
    return 0;
}
