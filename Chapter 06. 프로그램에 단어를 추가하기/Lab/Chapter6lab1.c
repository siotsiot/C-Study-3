#include <stdio.h>
#include <string.h>

main()
{
    // 변수를 정의하고 초기화한다.
    char movie1[100] = "안녕 헤이즐";
    char movie2[100] = "겨울 왕국";
    char movie3[100] = "백투더 퓨처";

    char director1[100];
    char director2[100];
    char director3[100];

    strcpy(director1, "조쉬 분");
    strcpy(director2, "크리스벅과 제니퍼 리");
    strcpy(director3, "로버트 제메키스");

    printf("영화 \"%s\"의 감독은 %s입니다.\n", movie1, director1);
    printf("영화 \"%s\"의 감독은 %s입니다.\n", movie2, director2);
    printf("영화 \"%s\"의 감독은 %s입니다.\n", movie3, director3);

    return 0;
}
