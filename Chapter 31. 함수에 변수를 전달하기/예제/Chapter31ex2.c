// 31장 예제 #2
// 파일 Chapter31ex2.c

/* 이 프로그램은 함수에 배열을 전달하는 경우를 보여준다. */

#include <stdio.h>
#include <string.h>
main()
{
    char name[15] = "Michael Hatton";

    change(name);

    printf("in main(), name은 %s.\n", name);
    return (0); // 프로그램을 종료한다.
}

/*************************************************************************/

/* 가끔은 위와 같이 함수를 분리하는 줄을 넣는 것도 좋다. */

change(char name[15]) // name의 주소를 받는다.
{
    // name에 의하여 가리켜진 주소에 문자열을 저장한다.
    strcpy(name, "XXXXXXXXXXXXXX");
    return; // main()으로 복귀한다.
}
