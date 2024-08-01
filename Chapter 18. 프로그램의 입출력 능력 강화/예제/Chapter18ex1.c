// 18장 예제 #1
// 파일 Chapter18ex1.c

/* 이 프로그램은 putchar() 함수의 단순한 사용 예이다. */

// putchat()는 stdio.h에 정의된다.
// string.h은 strlen() 함수 때문에 필요하다.

#include <stdio.h>
#include <string.h>

main()
{
    int i;
    char msg[] = "C is fun";

    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]); // 문자 하나를 출력한다.
    }

    putchar('\n'); // 루프가 완료되면 줄바꿈 문자를 하나 출력한다.

    return 0;
}
