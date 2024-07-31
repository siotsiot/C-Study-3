#include <stdio.h>

main()
{
    int score;
    char grade;

    printf("성적을 입력하시오: ");
    scanf("%d", &score);

    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    printf("%c학점입니다.\n", grade);

    return 0;
}
