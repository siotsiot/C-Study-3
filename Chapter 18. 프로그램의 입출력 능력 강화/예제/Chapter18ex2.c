// 18장 예제 #2
// 파일 Chapter18ex2.c

/* 이 프로그램은 getchar() 함수의 단순한 사용 예이다. */

// getchar()는 stdio.h에 정의된다.
// string.h은 strlen() 함수 때문에 필요하다.

#include <stdio.h>
#include <string.h>

main()
{
    int i;
    char msg[25];

    printf("최대 25개 이내의 문자를 입력하고 엔터키를 누르시오...\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar(); // 하나의 문자를 입력받는다.
        if (msg[i] == '\n') // 사용자가 입력한 문자가 줄바꿈 문자이면
        {
            i--;
            break; // 반복문을 빠져나간다.
        }
    }

    putchar('\n'); // 반복이 완료되면 줄바꿈 문자를 내보낸다.

    for (; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\0');

    return 0;
}
