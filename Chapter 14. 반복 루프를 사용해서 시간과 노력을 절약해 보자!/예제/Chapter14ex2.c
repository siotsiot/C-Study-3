// 14장 예제 #2
// 파일 Chapter14ex2.c

/* 이 프로그램은 2개의 숫자를 곱한 후에 사용자가 원하면 결과를 표시한다.
사용자가 'N'라고 하면 루프를 탈출한다. */

#include <stdio.h>

main()
{
    float num1, num2, result;
    char choice;

    do {
        printf("첫 번째 숫자를 입력하시오: ");
        scanf(" %f", &num1);

        printf("두 번째 숫자를 입력하시오: ");
        scanf(" %f", &num2);

        result = num1 * num2;

        printf("%.2f 곱하기 %.2f 은 %.2f이다.\n\n", num1, num2, result);

        printf("다른 숫자를 곱하기를 원하십니까?(Y/N):");

        scanf(" %c", &choice);
        // 만약 사용자가 소문자 n을 입력하면
        // if 문장이 대문자 N으로 변경한다.
        if (choice == 'n')
        {
            choice = 'N';
        }
    } while (choice != 'N');

    return 0;
}
