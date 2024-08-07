// 25장 예제 #1
// 파일 Chapter25ex1.c

/* 이 프로그램은 문자 포인터 배열을 선언하고 초기화한다. 그리고 영화 평점을 요청한다. */

#include <stdio.h>

main()
{
    int i;
    int ctr = 0;
    char ans;

    // 9개의 문자 포인터 배열을 선언하고 초기화한다.
    char *movies[9] = { "Amour", "Argo",
        "Beasts of the Southern Wild",
        "Django Unchained",
        "Les Miserables",
        "Life of Pi", "Lincoln",
        "Silver Linings Playbook",
        "Zero Dark Thirty" };

    int movieratings[9]; // 영화 평점을 위한 정수 배열

    char *tempmovie = "이것은 영화를 정렬하기 위하여 사용된다.";

    int outer, inner, didSwap, temprating; // 정렬 루프에서 사용

    printf("\n\n*** 오스카상 2012년이 여기에! ***\n\n");
    printf("최우수 영화 후보작들을 평가할 때입니다.:");
    for (i = 0; i < 9; i++)
    {
        printf("\n영화 %s을 보셨나요? (Y/N): ", movies[i]);
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'Y')
        {
            printf("\n평점을 매겨주세요 ");
            printf("(1부터 10까지): ");
            scanf(" %d", &movieratings[i]);
            ctr++; // 이것은 관람한 영화만을 출력하기 위하여 사용된다.
            continue;
        }
        else
        {
            movieratings[i] = -1;
        }
    }

    // 영화 평점을 가지고 정렬한다. (안본 영화는 맨 끝으로 보낸다.)
    for (outer = 0; outer < 8; outer++)
    {
        didSwap = 0;
        for (inner = outer; inner < 9; inner++)
        {
            if (movieratings[inner] > movieratings[outer])
            {
                tempmovie = movies[inner];
                temprating = movieratings[inner];
                movies[inner] = movies[outer];
                movieratings[inner] = movieratings[outer];
                movies[outer] = tempmovie;
                movieratings[outer] = temprating;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // 사용자가 관람한 영화만을 출력한다.

    printf("\n\n** 2012년도 오스카를 위한 여러분의 순위 ");
    printf("경쟁작 **\n");

    for (i = 0; i < ctr; i++)
    {
        printf("%s은 %d으로 평가되었음!\n", movies[i], movieratings[i]);
    }

    return 0;
}
