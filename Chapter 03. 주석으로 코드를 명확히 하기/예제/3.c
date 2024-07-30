#include <stdio.h>
main()
{
    float a, b;

    printf("보너스를 얼마나 받았습니까?");
    scanf(" %f", &a);

    b = .85 * a;
    printf("만약 15%를 자선단체에 기부하더라도 당신은");
    printf(" 아직 %.2f를 가지고 있습니다.", b);
    return 0;
}
