// 15장 예제 #1
// 파일 Chapter15ex1.c

/* 이 프로그램은 금년에 보았던 영화의 개수를 질문한다.
그리고 각 영화의 이름, 1부터 10까지의 평점을 묻는 반복문을 실행한다.
가장 선호 영화와 가장 선호하지 않는 영화를 출력한다. */

#include <stdio.h>
#include <string.h>

main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];

    // favRating을 0으로 설정한다.
    // 따라서 어떤 영화이든지 1 이상의 평점이면 이것을 대체할 것이다.
    // leastRating은 10으로 초기화된다. 따라서 9 이하의 평점을 가진 영화는
    // 이것을 대체할 것이다.
    favRating = 0;
    leastRating = 10;

    // 사용자가 영화를 얼마나 보았는지를 알아낸다.
    // 반복 반복문은 0이상의 값을 입력하면 계속된다.
    do {
        printf("금년에 영화를 몇 편이나 보았습니까? ");
        scanf(" %d", &numMovies);

        // 만약 사용자가 0이나 음수를 입력하면
        // 프로그램은 양수를 입력하라고 경고하고 다시 질문한다.
        if (numMovies < 1)
        {
            printf("영화 수가 0입니다.\n다시 입력하시오!\n\n");
        }
    } while (numMovies < 1);

    for (ctr = 1; ctr <= numMovies; ctr++)
    {

        // 영화 이름과 평점을 얻는다.
        printf("\n영화의 이름은? ");
        printf("(한단어 제목만!) ");
        scanf(" %s", movieName);

        printf("1부터 10까지의 평점을 준다면? ");
        scanf(" %d", &rating);

        // 최고 영화인지를 검사한다.
        if (rating > favRating)
        {
            strcpy(favorite, movieName);
            favRating = rating;
        }
        // 최악의 영화인지를 검사한다.
        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }
    }

    printf("\n당신의 최고의 영화는 %s.\n", favorite);
    printf("\n당신의 최악의 영화는 %s.\n", least);

    return 0;
}
