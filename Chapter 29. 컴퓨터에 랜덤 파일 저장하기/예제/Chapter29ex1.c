// 29장 예제 #1
// 파일 Chapter29ex1.c

/* 이 프로그램은 letters.txt 파일을 열어서 A부터 Z까지를 파일에 출력한다.
파일을 거꾸로 읽어서 Z부터 A까지를 출력한다. */

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

main()
{
    char letter;
    int i;
    fptr = fopen("C:\\Users\\oopsla\\Desktop\\CTest\\BookInfo.txt", "w+");
    if (fptr == 0)
    {
        printf("파일 오픈 오류\n");
        exit(1);
    }

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        fputc(letter, fptr);
    }

    puts("A부터 Z까지의 문자를 저장하였음");

    // 지금부터는 파일을 거꾸로 읽는다.

    fseek(fptr, -1, SEEK_END); // 파일의 끝에서 -1 바이트 위치

    printf("파일을 거꾸로 읽습니다:\n");

    for (i = 26; i > 0; i--)
    {
        letter = fgetc(fptr);
        // 문자를 읽고 거꾸로 -2만큼 간다.
        fseek(fptr, -2, SEEK_CUR);
        printf("다음 문자는 %c.\n", letter);
    }

    fclose(fptr); // 항상 파일을 닫아야 한다.

    return 0;
}
