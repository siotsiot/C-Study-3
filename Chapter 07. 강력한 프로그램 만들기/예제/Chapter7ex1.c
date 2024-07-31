// 7장 예제 #1
// 파일 Chapter7ex1.c

/* 이것은 한 가족의 정보를 출력하는 프로그램이다. */

#include <stdio.h>
#include <string.h>
#include "Chapter7ex1.h"

main()
{
    int age;
    char childname[14] = "Thomas";

    printf("\n%s는 %d명의 아이를 가지고 있다.\n", FAMILY, KIDS);

    age = 11;
    printf("첫 번째 아이 %s는 %d살이다.\n", childname, age);

    strcpy(childname, "Christopher");
    age = 6;
    printf("두 번째 아이 %s는 %d살이다.\n", childname, age);

    strcpy(childname, "Benjamin");
    age = 3;
    printf("세 번째 아이 %s는 %d살이다.\n", childname, age);

    return 0;
}
