// 19장 예제 #2
// 파일 Chapter19ex2.c

/* 이 프로그램은 사용자의 고향과 도를 나타내는 2글자 약어를 입력받는다.
문자열 결합 함수를 사용하여서 고향과 도를 결합하여 화면에 puts()를 이용하여 출력한다. */

// puts()와 gets()를 위하여 stdio.h가 필요하다.
// strcat()을 위하여 string.h가 필요하다.

#include <stdio.h>
#include <string.h>

int main()
{
    char city[15];

    // 4글자로 된 도의 약어를 저장하는 문자 배열 st[]
    // 고향을 저장하는 문자 배열 fullLocation[]
    char st[10];
    char fullLocation[18] = "";

    puts("현재 살고 있는 도시는? ");
    gets(city);
    puts("어떤 돈에 살고 있나요? (4글자 약어)");
    gets(st);

    /* 문자열을 결합한다. */
    strcat(fullLocation, st);
    strcat(fullLocation, ", "); // 콤마를 추가하고 도시와 도 사이에
    // 스페이스를 넣는다.
    strcat(fullLocation, city);

    puts("\n당신이 살고 있는 곳은 ");
    puts(fullLocation);

    return 0;
}
