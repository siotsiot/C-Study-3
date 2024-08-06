// 23장 예제 #2
// 파일 Chapter23ex2.c

/* 이 프로그램은 카드 사용액을 확인하기 위하여 고객 아이디의 정렬된 리스트를 탐색한다. */

#include <stdio.h>
main()
{
    int ctr; // 루프 카운터
    int idSearch; // 탐색할 고객(키)
    int found = 0; // 고객이 발견되면 1(true)

    /* 각 평행 배열에 10개의 요소를 정의한다. */

    int custID[10] = { 313, 453, 502, 101, 892, 475, 792, 912, 343, 633 };
    float custBal[10] = { 0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54 };
    int tempID, inner, outer, didSwap, i; // 정렬을 위하여 필요하다.
    float tempBal;

    // 먼저 고객 아이디로 배열을 정렬한다. */

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // 리스트가 아직 정렬되지 않았으면 1(true)
        for (inner = outer; inner < 10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner]; // 배열 요소 교환
                tempBal = custBal[inner];

                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; // 교환이 발생하였음(true)
            }
        }

        if (didSwap == 0)
        {
            break;
        }
    }

    /* 카드 사용액을 찾는 사용자와 상호작용한다. */

    printf("\n\n*** 고객 사용 잔액 탐색 ***\n");
    printf("고객의 아이디는? ");
    scanf(" %d", &idSearch);

    // 배열에서 아이디를 찾는다.
    for (ctr = 0; ctr < 10; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1; // 일치하면 플래그를 True로 한다.
            break; // 일치하면 반복 루프를 빠져나간다.
        }

        if (custID[ctr] > idSearch) // 계속 탐색할 필요 없음
        {
            break;
        }
    }

    // 반복 루프가 종료되면 아이디가 발견되거나
    // (found = 1) 아니면 발견되지 않은 것이다.

    if (found)
    {
        if (custBal[ctr] > 100)
        {
            printf("\n*** 고객의 카드 사용액은 $%.2f.\n", custBal[ctr]);
            printf("더 이상의 지출은 불가능합니다.\n");
        }
        else // 사용 잔액이 $100.00 이하
        {
            printf("\n**더 지출할 수 있습니다!\n");
        }
    }
    else // 아이디가 발견되지 않았다.
    {
        printf("** 잘못된 사용자 ID입니다. ");
        printf("\nID %3d은 발견되지 않았습니다.\n", idSearch);
    }

    return (0);
}
