// 9장 예제 #3
// 파일 Chapter9ex3.c
/* 성적 4개의 평균을 계산하고 다른 산술 게산독 한다. */

#include <stdio.h>

main()
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    /* 학생이 첫 번째와 세 번째 시험에서 88점을 얻었다.
    따라서 다중 대입 연산이 가능하다. */
    grade1 = grade3 = 88;
    grade2 = 79;

    // 사용자가 네 번째 성적을 입력한다.
    printf("4번째 시험에서 몇 점을 얻었나요?");
    printf("(0부터 100사이의 정수로)?");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("당신의 평균성적은 %.1f\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);

    printf("클래스의 최고 성적과 비교하(95)\n");
    printf("당신의 성적은 %.1f점 낮습니다.\n", gradeDelta);
    printf("또 퍼센트로 비교하면\n");
    printf("당신은 %.1f 퍼센트 뒤졌습니다.\n", percentDiff);

    return 0;
}
