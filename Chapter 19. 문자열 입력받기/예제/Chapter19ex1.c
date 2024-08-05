// 19장 예제 #1
// 파일 Chapter19ex1.c

/* 이 프로그램은 사용자로부터 이름과 암호를 입력하라고 요청한다.
암호가 대문자, 소문자, 숫자로 구성되었는지를 검사한다.
올바르게 구성되어 있으면 프로그램은 사용자를 축하한다.
올바르게 구성되어 있지 않으면 보안을 위하여 다시 작성하라는 메시지를 출력한다. */

// printf()과 scanf()를 위하여 stdio.h가 필요하다.
// strlen()을 위하여 string.h가 필요하다.
// isdigit(), isupper(), islower()을 위하여 ctype.h가 필요하다.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];

    // 모든 변수를 0(거짓)으로 초기화한다.

    hasUpper = hasLower = hasDigit = 0;

    printf("사용자 이름? ");
    scanf(" %s", user);
    printf("암호를 생성하시오: ");
    scanf(" %s", password);

    // 이 반복 루프는 암호의 각 글자를 검사한다.
    // 각 글자가 숫자인지, 대문자인지, 소문자인지를 검사한다.

    for (i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }

        if (isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }

        if (islower(password[i]))
        {
            hasLower = 1;
        }
    }

    // 3개의 변수가 모두 1이면 if 문이 실행된다.
    // 이들 변수는 해당되는 문자의 종류가 발견되었을 경우에만 1이 된다.

    if ((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\n훌륭합니다, %s,\n", user);
        printf("당신의 암호는 대문자, 소문자 ");
        printf("숫자를 가지고 있습니다.");
    }
    else
    {
        printf("\n\n당신은 새로운 암호를 생각해야 합니다, %s,\n", user);
        printf("대문자, 소문자와 ");
        printf("숫자를 섞어서 사용하여야 합니다.");
    }

    return (0);
}
