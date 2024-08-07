#include <stdio.h>
#include <string.h>

main()
{
    int i;

    // 9개의 문자 포인터 배열을 선언하고 초기화한다.
    char *movies[9] = { "Amour", "Argo",
        "Beasts of the Southern Wild",
        "Django Unchained",
        "Les Miserables",
        "Life of Pi", "Lincoln",
        "Silver Linings Playbook",
        "Zero Dark Thirty" };

    char *tempmovie = "이것은 영화를 정렬하기 위하여 사용된다.";

    int outer, inner, didSwap;

    for (outer = 0; outer < 8; outer++)
    {
        didSwap = 0;
        for (inner = outer; inner < 9; inner++)
        {
            if (strcmp(movies[inner], movies[outer]) < 0)
            {
                tempmovie = movies[inner];
                movies[inner] = movies[outer];
                movies[outer] = tempmovie;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    for (i = 0; i < 9; i++)
    {
        printf("%s\n", movies[i]);
    }

    return 0;
}
