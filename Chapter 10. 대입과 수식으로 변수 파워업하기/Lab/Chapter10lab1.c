#include <stdio.h>
main()
{
    int money, year = 0;

    printf("투자금을 입력하시오(만원 단위): ");
    scanf("%d", &money);

    ++year;
    money += (int)(money * 0.12);
    printf("%d년 뒤의 투자금은 %d만원입니다.\n", year, money);

    ++year;
    money += (int)(money * 0.12);
    printf("%d년 뒤의 투자금은 %d만원입니다.\n", year, money);

    ++year;
    money += (int)(money * 0.12);
    printf("%d년 뒤의 투자금은 %d만원입니다.\n", year, money);

    ++year;
    money += (int)(money * 0.12);
    printf("%d년 뒤의 투자금은 %d만원입니다.\n", year, money);

    ++year;
    money += (int)(money * 0.12);
    printf("%d년 뒤의 투자금은 %d만원입니다.\n", year, money);

    return 0;
}
