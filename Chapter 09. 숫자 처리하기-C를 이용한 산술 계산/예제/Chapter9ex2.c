// 9장 예제 #2
// 파일 Chapter9ex2.c

/* 이 프로그램은 사용자에게 타이어의 개수와 가격을 묻는다. 세금을 붙여서 전체 가격을 계산한다. */


// 세율은 변경될 수 있으므로 #define을 이용하여서 한 곳에서 설정하는 것이 좋다.
#include <stdio.h>
#define SALESTAX .07

main()
{
    // 타이어 개수, 타이어 가격, 세금 전 가격, 세금 후 가격을 위한 변수들
    int numTires;
    float tirePrice, beforeTax, netSales;

    /* 구매한 타이어 개수와 타이어 가격을 얻는다. */
    printf("타이어를 몇 개나 구입하시겠습니까? ");
    scanf(" %d", &numTires);
    printf("타이어 하나의 가격은($XX.XX 형식으로)? ");
    scanf(" $%f", &tirePrice);

    /* 가격을 계산한다. */
    beforeTax = tirePrice *numTires;
    netSales = beforeTax + (beforeTax *SALESTAX);

    printf("타이어 교체 금액으로 $%.2f을 사용하셔야겠네요.\n\n\n", netSales);

    return 0;
}
