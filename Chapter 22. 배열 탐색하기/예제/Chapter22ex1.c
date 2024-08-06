// 22장 예제 #1
// 파일 Chapter22ex1.c

/* 이 프로그램은 사용자로부터 ID 번호를 받는다.
ID를 가지고 데이터베이스에서 고객들의 리스트를 탐색한다.
고객이 있으면 현재 카드 사용액을 검사하기 위하여 발견된 첨자를 이용한다.
그리고 현재 카드 사용액이 100달러 이상이면 경고한다. */

#include <stdio.h>
main()
{
    int ctr; // 루프 카운터
    int idSearch; // 탐색할 고객(키)
    int found = 0; // 고객이 발견되면 1 (true)

    // 2개의 평행 배열에 10개의 요소를 정의한다.
    int custID[10] = { 313, 453, 502, 101, 892, 475, 792, 912, 343, 633 };
    float custBal[10] = { 0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54 };

    /* 사용자와 상호작용한다. */

    printf("\n\n*** 고객 카드 사용액 검색 ***\n");
    printf("어떤 고객의 카드 사용액을 검색하시겠습니까? ");
    scanf(" %d", &idSearch);

    /* 고객 배열에서 입력받은 고객 ID가 존재하는 지를 검사한다. */

    for (ctr = 0; ctr < 10; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        if (custBal[ctr] > 100.00)
        {
            printf("\n** 고객의 카드 사용액은 $%.2f.\n", custBal[ctr]);
            printf(" 더 이상의 사용은 불가능합니다.\n");
        }
        else
        {
            printf("\n** 고객의 카드 사용액이 아직 여유가 있습니다!\n");
        }
    }
    else
    {
        printf("** 잘못된 사용자 ID입니다.");
        printf("\nID %3d은 발견되지 않았습니다.\n", idSearch);
    }
    return(0);
}
