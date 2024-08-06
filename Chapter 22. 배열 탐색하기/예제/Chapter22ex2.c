// 22장 예제 #2
// 파일 Chapter22ex2.c

/* 이 프로그램은 3개의 배열을 선수의 득점, 리바운드 횟수, 어시스트 횟수로 채운다.
반복 루프를 통하여 득점 배열에서 가장 많은 득점을 했던 경기를 찾는다.
그 경기의 3가지 카테고리에서의 점수를 출력한다. */

#include <stdio.h>
main()
{
    int gameScores[10] = { 12, 5, 21, 15, 32, 10, 6, 31, 11, 10 };
    int gameRebounds[10] = { 5, 7, 1, 5, 10, 3, 0, 7, 6, 4 };
    int gameAssists[10] = { 2, 9, 4, 3, 6, 1, 11, 6, 9, 10 };
    int bestGame = 0; // 이제까지의 최다 득점
    int gmMark = 0; // 가장 득점이 많았던 경기 번호를 저장한다.
    int i;

    for (i = 0; i < 10; i++)
    {
        // 반복 푸르에서 각 경기의 득점을 이제까지의 최다 득점 기록과 비교한다.
        // 현재의 점수가 더 높으면, 이것이 새로운 최다 득점이 된다.
        // 그리고 현재의 요소 번호가 gmMark에 저장된다.
        if (gameScores[i] > bestGame)
        {
            bestGame = gameScores[i];
            gmMark = i;
        }
    }
    // 최다 득점 게임의 세부 사항을 출력한다.
    // 배열이 0에서 시작하기 때문에 경기 번호에 1을 더한다.

    printf("\n\n선수의 최다 득점 경기 기록: \n");
    printf("최다 득점 경기는 game #%d\n", gmMark + 1);
    printf("득점은 %d점\n", gameScores[gmMark]);
    printf("리바운드는 %d회\n", gameRebounds[gmMark]);
    printf("어시스트는 %d회\n", gameAssists[gmMark]);

    return(0);
}
