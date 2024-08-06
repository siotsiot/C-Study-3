// 24장 예제 #1
// 파일 Chapter24ex1.c

/* 이 프로그램은 int, float, char형의 포인터를 정의하고 초기화한다.
그리고 화면에 출력한다. */

#include <stdio.h>

main()
{
    int kids;
    int *pKids;
    float price;
    float *pPrice;

    char code;
    char *pCode;

    price = 17.50;
    pPrice = &price;

    printf("\n얼마나 많은 아이들을 워터파크에 데리고 가는가? ");
    scanf(" %d", &kids);

    pKids = &kids;

    printf("\n할인 티켓을 가지고 있는가?");
    printf("\nE나 S를 입력한다. (E는 직원 할인, S는 세이브 모어)");
    printf("할인 아니면, 정상가(N): ");
    scanf(" %c", &code);

    pCode = &code;

    printf("\n먼저 변수를 사용한다:\n");
    printf("여러분들은 %d명의 아이들을 가지고 있다....\n", kids);

    switch(code) {
    case ('E') :
        printf("직원 할인은 25%%를 할인한다. ");
        printf("정상 티켓 가: $%.2f", price);
        printf("\n전체 티켓 가격: $%.2f", (price * .75 * kids));
        break;
    case ('S') :
        printf("세이브 모어는 15%%를 할인한다. ");
        printf("정상 티켓 가: $%.2f", price);
        printf("\n전체 티켓 가격: $%.2f", (price * .85 * kids));
        break;
    default: // N을 입력하였거나
        // 다른 문자를 입력하였다.
        printf("당신은 정상 가격을 지불해야 한다. ");
        printf("정상 티켓 가격 $%.2f", price);
    }
    // 같은 코드를 반복하지만 이번에는 역참조 연산자를 이용한다.

    printf("\n먼저 역참조 연산자를 사용한다:\n");
    printf("여러분들은 %d명의 아이들을 가지고 있다....\n", kids);

    switch(*pCode) {
    case ('E') :
        printf("직원 할인은 25%%를 할인한다. ");
        printf("정상 티켓 가: $%.2f", price);
        printf("\n전체 티켓 가격: $%.2f", (*pPrice * .75 * *pKids));
        break;
    case ('S') :
        printf("세이브 모어는 15%%를 할인한다. ");
        printf("정상 티켓 가격: $%.2f", price);
        printf("\n전체 티켓 가격: $%.2f", (*pPrice * .85 * *pKids));
        break;
    default: // N을 입력하였거나
        // 다른 문자를 입력하였다.
        printf("당신은 정상 가격을 지불해야 한다. ");
        printf("정상 티켓 가격 $%.2f", *pPrice);
    }

    return (0);
}
