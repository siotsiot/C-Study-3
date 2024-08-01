// 17장 예제 #1
// 파일 Chapter17ex1.c

/* 이 프로그램은 사용자에게 메뉴를 제공한다.
사용자로부터 입력을 받아서 switch 문을 이용해서 해당되는 코드를 실행한다.
(사실 사용자가 수행하기를 원하는 코드는 구현되지 않았다.
 다만 이것은 swtich 문을 가르치기 위하여 선택 구조만을 가지고 있다.) */

#include <stdio.h>
#include <stdlib.h>

main()
{
    int choice;

    printf("무엇을 하시겠습니까?\n");
    printf("1. 새로운 연락처 추가\n");
    printf("2. 기존 연락처 편집\n");
    printf("3. 연락처 전화\n");
    printf("4. 연락처 문자 메시지\n");
    printf("5. 종료\n");

    do
    {
        printf("여러분의 선택은 무엇입니까: ");
        scanf(" %d", &choice);

        switch(choice)
        {
        case (1) : printf("\n연락처를 추가하기 위해서는 ");
            printf("연락처의 이름과 전화번호가 필요합니다.\n");
            break;
        case (2) : printf("\n변경을 원하는 ");
            printf("연락처의 이름을 입력하시오.\n");
            break;
        case (3) : printf("\n어떤 연락처에 ");
            printf("전화할까요?\n");
            break;
        case (4) : printf("\n어떤 연락처에 문자를 ");
            printf("보낼까요?\n");
            break;
        case (5) : exit(1); // 프로그램을 일찍 종료한다.

        default: printf("\n%d은 올바른 메뉴 값이 아닙니다.\n", choice);
            printf("다시 입력하시오.\n");
            break;
        }
    } while ((choice < 1) || (choice > 5));

    return 0;
}
