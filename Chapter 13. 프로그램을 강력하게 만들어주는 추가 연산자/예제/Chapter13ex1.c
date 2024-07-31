// 13장 예제 #1
// 파일 Chapter13ex1.c
/* 이 프로그램은 1부터 100 사이의 숫자를 입력받아서
2부터 9까지의 숫자로 나누어지는지를 알려준다. */

#include <stdio.h>

main()
{
    // 사용자로부터 정수를 받기 위한 변수를 정의한다.
    int numPick;

    // 사용자로부터 정수를 받는다.
    printf("1부터 100 사이의 정수를 선택하시오");
    printf("(높을수록 좋음!): ");
    scanf(" %d", &numPick); // 정수를 받을 때는 &가 있어야 한다.

    printf("%d은 2로 나누어 %s.", numPick, (numPick % 2 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 3로 나누어 %s.", numPick, (numPick % 3 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 4로 나누어 %s.", numPick, (numPick % 4 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 5로 나누어 %s.", numPick, (numPick % 5 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 6로 나누어 %s.", numPick, (numPick % 6 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 7로 나누어 %s.", numPick, (numPick % 7 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 8로 나누어 %s.", numPick, (numPick % 8 == 0) ? ("진다") : ("지지 않는다"));
    printf("\n%d은 9로 나누어 %s.", numPick, (numPick % 9 == 0) ? ("진다") : ("지지 않는다"));

    return 0;
}
