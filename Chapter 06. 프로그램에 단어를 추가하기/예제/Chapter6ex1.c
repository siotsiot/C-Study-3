// 6장 예제 #1
// 파일 Chapter6ex1.c

// 이 프로그램은 3명의 아이들이 가장 좋아하는 수퍼 히어로를 출력한다.

#include <stdio.h>
#include <string.h>

main()
{
    // Kid1은 11 문자까지 저장할 수 있다.
    char Kid1[12];

    // Kid2은 7 문자가 된다. (Maddie와 NULL 문자)
    char Kid2[] = "Maddie";

    // Kid3도 7 문자가 된다.
    char Kid3[7] = "Andrew";

    // Hero1도 7 문자가 된다.
    char Hero1[] = "Batman";

    // Hero2는 여분의 공간을 가진다.
    char Hero2[34] = "Spiderman";
    char Hero3[25];

    Kid1[0] = 'K'; // Kid1은 한 문자씩 정의된다.
    Kid1[1] = 'a'; // 효율적이진 않ㅇ지만 작동한다.
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0'; // NULL 문자를 반드시 추가하여야 한다.
    // 그래야 C가 문자열의 끝을 알 수 있다.

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s가 좋아하는 수퍼히어로는 %s.\n", Kid1, Hero1);
    printf("%s가 좋아하는 수퍼히어로는 %s.\n", Kid2, Hero2);
    printf("%s가 좋아하는 수퍼히어로는 %s.\n", Kid3, Hero3);

    return 0;
}
