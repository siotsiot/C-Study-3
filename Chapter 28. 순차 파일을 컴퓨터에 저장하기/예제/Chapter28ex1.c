// 28장 예제 #1
// 파일 Chapter28ex1.c

/* 이 프로그램은 27장의 책 정보를 받아서 bookinfo.txt 파일에 저장한다. */

// 구조체 정의가 들어 있는 파일을 포함시킨다.

#include "bookinfo.h"
#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

main()
{
    int ctr;
    struct bookInfo books[3]; // 3개의 구조체 변수들의 배열

    // 사용자로부터 각 책에 대한 정보를 얻는다.

    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("책 #%d의 이름은?\n", (ctr + 1));
        gets(books[ctr].title);
        puts("책의 저자는? ");
        gets(books[ctr].author);
        puts("책의 가격은? ");
        scanf(" $%f", &books[ctr].price);
        puts("책의 페이지수는? ");
        scanf(" %d", &books[ctr].pages);
        getchar(); // 다음 반복을 위하여 줄바꿈 문자를 삭제
    }

    // 파일 경로를 타이핑할 때는 백슬래시를 2개를 사용하여야 한다.
    // 하나만 사용하면 이스케이프 시퀀스로 간주한다.

    fptr = fopen("C:\\Users\\oopsla\\Desktop\\CTest\\BookInfo.txt", "w");

    // 파일이 올바르게 열렸는지를 검사한다.

    if (fptr == 0)
    {
        printf("오류-파일이 열리지 않았음.\n");
        exit(1);
    }

    // 헤더 라인을 출력하고 반복 루프를 통하여 책 정보를 파일로 출력한다.
    // 이번에는 출력이 화면에 나타나는 것이 아니고 파일에 저장된다.

    fprintf(fptr, "\n\n책의 컬렉션 정보: \n");

    for (ctr = 0; ctr < 3; ctr++)
    {
        fprintf(fptr, "#%d: %s 저자는 %s", (ctr +1), books[ctr].title, books[ctr].author);
        fprintf(fptr, "\n%d 페이지와 가격은 $%.2f", books[ctr].pages, books[ctr].price);
        fprintf(fptr, "\n\n");
    }

    fclose(fptr); // 항상 파일을 닫도록 하자.

    return 0;
}
