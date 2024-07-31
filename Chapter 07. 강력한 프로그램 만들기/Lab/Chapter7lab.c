#include <stdio.h>

#define PI 3.141592

main()
{
    double radius = 5.0;
    double area;

    area = PI *radius * radius;

    printf("반지름이 %.1f인 원의 면적은 %.1f입니다.\n", radius, area);

    return 0;
}
