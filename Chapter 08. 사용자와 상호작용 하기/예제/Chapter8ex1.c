// 8장 예제 #1
// 파일 Chapter8ex1.c

/* 사용자에게 기본적인 몇 가지 사항을 질문하고
입력된 것들을 화면에 출력한다. */

#include <stdio.h>
main()
{
    // scanf()가 채우게 될 변수들을 설정한다.
    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("이름(영어)은 무슨 글자로 시작합니까?\n");
    scanf(" %c", &firstInitial);

    printf("성(영어)은 무슨 글자로 시작합니까?\n");
    scanf(" %c", &lastInitial);

    printf("나이는 몇 살인가요?\n");
    scanf(" %d", &age);

    printf("제일 좋아하는 숫자는(정수만)?\n");
    scanf(" %d", &favorite_number);

    printf("\n당신의 이니셜은 %c.%c. 나이는 %d입니다. ", firstInitial, lastInitial, age);
    printf("\n제일 좋아하는 숫자는 %d입니다.\n\n", favorite_number);

    return 0;
}
