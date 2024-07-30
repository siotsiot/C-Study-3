// 5장 예제 #1
// 파일 Chapter5ex1.c

/* 이것은 3명의 아이에게 필요한 학용품을 출력하는 프로그램이다.
학용품을 사는 데 필요한 금액도 나열한다.
학용품은 미국에서 직구한다고 가정하자. */

#include <stdio.h>

main()
{
    // 변수를 정의하고 초기화한다.
    char firstInitial, middleInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;

    // 첫 번째 아이의 정보
    firstInitial = 'J';
    middleInitial = 'R';

    number_of_pencils = 7;
    number_of_notebooks = 4;

    printf("%c%c에게는 %d개의 연필과, %d권의 공책, 1개의 도시락.\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
    printf("총 금액은 $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

    // 두 번째 아이의 정보
    firstInitial = 'M';
    middleInitial = 'T';

    number_of_pencils = 9;
    number_of_notebooks = 2;

    printf("%c%c에게는 %d개의 연필과, %d권의 공책, 1개의 도시락.\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
    printf("총 금액은 $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

    return 0;
}
