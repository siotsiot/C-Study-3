// 27장 예제 #1
// 파일 Chapter27ex1.c

/* 이 프로그램은 bookInfo.h에서 bookInfo 구조체 정보를 얻는다.
그리고 사용자에게 3개의 구조체를 채울 데이터를 요청한다.
구조체를 화면에 출력한다. */

// 구조체 정의를 가지고 있는 파일을 포함시킨다.

#include "bookinfo.h"
#include <stdio.h>

main()
{
    int ctr;
    struct bookInfo books[3]; // 3개 구조체로 된 배열 structure variables

    // 사용자로부터 책에 대한 정보를 얻는다.

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

    // 헤더 라인을 출력하고 루프를 돌면서 책의 정보를 출력한다.

    printf("\n\n책의 컬렉션 정보: \n");

    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s 저자는 %s", (ctr +1), books[ctr].title, books[ctr].author);
        printf("\n%d 페이지와 가격은 $%.2f", books[ctr].pages, books[ctr].price);
        printf("\n\n");
    }

    return 0;
}
