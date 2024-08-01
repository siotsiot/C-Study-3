// 16장 예제 #1
// 파일 Chapter16ex1.c

/* 이 프로그램은 사용자에게 학생 25명의 시험 성적을 입력하게 한다.
시험 성적의 평균을 계산한다.
만약 25명보다 적은 학생이 시험을 봤다면 사용자는 성적으로 -1.0을 입력하고 반복 반복문을 종료한다.
지금까지 입력된 성적만 가지고 평균을 계산한다. */

#include <stdio.h>
main()
{
    int numTest;
    float stTest, avg, total = 0.0;

    // 25명의 성적을 입력받는다.
    for (numTest = 0; numTest < 25; numTest++)
    {
        // 시험 성적이 -1이 아닌지를 검사한다.
        printf("\n다음 학생의 성적은? ");
        scanf(" %f", &stTest);

        if (stTest < 0.0)
        {
            break;
        }
        total += stTest;
    }

    avg = total / numTest;
    printf("\n평균은 %.1f%%입니다.\n", avg);

    return 0;
}
