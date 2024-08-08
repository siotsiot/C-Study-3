// 29장 예제 #2
// 파일 Chapter29ex2.c

/* 이 프로그램은 이전에 생성되었던 파일을 연다.
문자 중의 하나를 *로 변경한다.
그리고 새로운 파일의 내용을 출력한다. */

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

main()
{
    char letter;
    int i;

    fptr = fopen("C:\\Users\\oopsla\\Desktop\\CTest\\letters.txt", "r+");

    if (fptr == 0)
    {
        printf("파일 오픈 오류\n");
        exit(1);
    }

    printf("어떤 문자를 변경하시겠습니까(1-26)? ");
    scanf(" %d", &i);

    // 파일의 처음부터 그 위치로 간다.

    fseek(fptr, (i - 1), SEEK_SET); // 위치로부터 1을 뺀다.
    // 왜냐하면 배열이 0부터 시작하기 때문이다.

    // 현재의 위치에 *을 덮어쓴다.
    fputc('*', fptr);

    // 다시 파일의 처음으로 와서 내용을 출력한다.

    fseek(fptr, 0, SEEK_SET);

    printf("현재 파일의 내용:\n");

    for (i = 0; i < 26; i++)
    {
        letter = fgetc(fptr);
        printf("다음 문자는 %c.\n", letter);
    }

    fclose(fptr); // 항상 파일을 닫아야 한다.

    return 0;
}
