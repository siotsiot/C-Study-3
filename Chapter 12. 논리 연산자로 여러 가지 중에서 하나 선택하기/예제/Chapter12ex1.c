// 12장 예제 #1
// 파일 Chapter12ex1.c

/* 이 프로그램은 변수와 수식을 정의한다.
그리고 변수를 검사하기 위하여 관계 연산자와 논리 연산자를 사용한다. */

#include <stdio.h>
main()
{
    // 프로그램에서 사용되는 공통적인 정수를 정의한다.
    int planets = 8;
    int friends = 6;
    int potterBooks = 7;
    int starWars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;

    // 첫 번째 논리 문장은 AND 연산자를 사용한다.
    // 시트콤 프렌즈 주인공 수와 비틀즈 멤버의 수를 합치면
    // 야구단을 만들 수 있는지를 검사한다.
    // 또 시트콤 프렌즈 주인공 수와 어벤저스 멤버의 수를 합치면
    // 야구단을 만들 수 있는지 검사한다.
    if ((friends + beatles >= baseball) && (friends + avengers >= baseball))
    {
        printf("시트콤 프렌즈 배우와 비틀즈 멤버의 수를 합치면 ");
        printf("야구단을 만들 수 있다.\n");
        printf("AND 시트콤 프렌즈 배우와 어벤저스 멤버의 수를 합치면 ");
        printf("야구단을 만들 수 있다.\n");
    }
    else
    {
        printf("시트콤 프렌즈의 멤버와 비틀즈 멤버의 수를 합쳐도 ");
        printf("야구팀을 만들지 못하거나, \n");
        printf("시트콤 프렌즈의 멤버와 어벤저스 멤버가 합쳐서 ");
        printf("야구단을 만들 수 없다.\n");
    }

    // 두 번째 논리 문장은 OR 연산자를 사용해서
    // 스타워즈 영화의 수가 1년 중의 월의 개수보다 적거나
    // 해리포터 책의 개수가 1년 중의 월의 개수보다 적은지 검사한다.
    // 어느 쪽 하나만 참이면 true가 되어서
    // if 문장이 실행된다.

    if ((starWars <= months) || (potterBooks <= months))
    {
        printf("\n해리포터 책을 한 달에 한 권씩 읽으면,\n");
        printf("1년 안에 끝낼 수 있거나,\n");
        printf("스타워즈 영화를 한 달에 한 편씩 보면,\n");
        printf("1년 안에 끝낼 수 있다.\n");
    }
    else
    {
        printf("너무 많은 책과 영화가 있어서 둘 다 불가능하다,\n");
        printf("충분한 시간이 없다!\n\n");
    }

    // 마지막 논리 문장은 NOT 연산자를 사용하여 검사한다.
    // 야구팀의 선수단과 농구팀의 선수단을 합한 수가 미식축구 선수단보다
    // 크지 않으면
    // if 문장이 실행된다.
    if (!(baseball + basketball > football))
    {
        printf("\n야구와 농구팀의 선수단을 합쳐도\n");
        printf("미식축구 선수단보다 적다.");
    }
    else
    {
        printf("\n야구와 농구팀의 선수단을 합치면\n");
        printf("미식축구 선수단보다 많다.");
    }

    return 0;
}
