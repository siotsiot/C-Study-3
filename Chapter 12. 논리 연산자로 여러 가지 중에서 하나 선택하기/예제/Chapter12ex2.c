// 12장 예제 #2
// 파일 Chapter12ex2.c

/* 이 프로그램은 사람의 성을 묻는다.
사용자가 P에서 S 사이의 성을 입력하면,
사용자는 특별한 방으로 안내된다. */

#include <stdio.h>
main()
{
    // 성을 저장할 수 있는 배열을 정의한다.
    char name[25];

    printf("영어 이름을 입력하시오: ");
    printf("(첫 글자는 대문자로!)\n");
    scanf(" %s", name); // 문자열 배열의 경우, &을 사용할 필요가 없다.

    if ((name[0] >= 'P') && name[0] <= 'S')
    {
        printf("티켓을 찾으려면 2432호로 가세요.\n");
    }
    else
    {
        printf("여기서 티켓을 찾으세요.\n");
    }

    return 0;
}
