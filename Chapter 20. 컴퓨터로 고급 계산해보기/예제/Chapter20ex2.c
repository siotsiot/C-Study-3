// 20장 예제 #2
// 파일 Chapter20ex2.c

/* 이 프로그램은 2개의 주사위를 굴려서 주사위의 합을 표시한다.
사용자에게 다음번의 주사위의 합이 높은 것인지 낮을 것인지, 같을 것인지를 추측하게 한다.
그리고 나서 2개의 주사위를 한번 더 굴리고 결과를 표시한다. */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

main()
{
    int dice1, dice2;
    int total1, total2;
    time_t t;
    char ans;

    // 실행할 때마다 달라지는 난수값을 만들기 위하여 필요하다.
    srand(time(&t));

    // 0에서 5까지의 난수가 발생되고 여기에 1이 더해진다.
    // 따라서 ㅓ1부터 6까지의 난수가 된다.

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;

    printf("첫 번째 주사위 굴리기는 %d와 %d, ", dice1, dice2);
    printf("총합은 %d.\n\n\n", total1);

    do {
        puts("다음 번의 주사위는 어떻게 될까요?");
        puts("(H)igher, (L)ower, or (S)ame?\n");
        puts("H, L, S 중의 하나를 입력하시오.");

        scanf(" %c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // 주사위를 다시 한 번 굴린다.
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;

    // 주사위 총합을 표시한다.
    printf("\n두 번째 주사위는 %d와 %d, ", dice1, dice2);
    printf("총합은 %d.\n\n", total2);

    // 사용자의 추측과 실제 주사위 값을 비교하여서
    // 사용자가 맞았는지 틀렸는지를 알려준다.
    if (ans == 'L')
    {

        if (total2 < total1)
        {
            printf("잘했습니다! 맞았어요!\n");
            printf("%d은 %d보다 낮습니다.\n", total2, total1);
        }
        else
        {
            printf("미안합니다! %d은 %d보다 낮지 않네요.\n\n", total2, total1);
        }
    }
    else if (ans == 'H')
    {

        if (total2 > total1)
        {
            printf("잘했습니다! 맞았어요!\n");
            printf("%d은 %d보다 높습니다.\n", total2, total1);
        }
        else
        {
            printf("미안합니다! %d은 %d보다 높지 않네요.\n\n", total2, total1);
        }
    }
    else if (ans == 'S')
    {

        if (total2 == total1)
        {
            printf("잘했습니다! 맞았어요!\n");
            printf("%d은 %d보다 같습니다.\n", total2, total1);
        }
        else
        {
            printf("미안합니다! %d은 %d보다 같지 않네요.\n\n", total2, total1);
        }
    }

    return 0;
}
