// 부록 B
// 파일 AppendixBpoker.c

/* 이 프로그램은 Draw Poker를 구현한다. 사용자는 1부터 5사이의 돈을 베팅할 수 있다.
5개의 카드를 받고 어떤 카드를 유지하고 어떤 카드를 버릴 것인지를 선택한다.
최종 카드를 분석하여서 가지고 있는 카드에 따라서 돈이 지급된다.
사용자의 현재 잔액이 표시되고 계속할 것인지를 선택할 수 있다. */

// 헤더 파일들
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

// 이들 2개의 상수는 가지고 있는 카드가 플러시냐 또는 스트레이트냐를 결정할 때
// 사용된다.

#define FALSE 0
#define TRUE 1

// 함수 원형 정의

void printGreeting();
int getBet();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[]);
int analyzeHand(int ranksinHand[], int suitsinHand[]);

main()
{
    int bet;
    int bank = 100;
    int i;
    int cardRank[5]; // 13개의 값 중에서 하나 (Ace-King)
    int cardSuit[5]; // 4개 중에서 하나 (Clubs, Diamonds, Hearts,Spades)
    int finalRank[5];
    int finalSuit[5];
    int ranksinHand[13]; // 손에 쥐고 있는 카드의 숫자
    int suitsinHand[4]; // 손에 쥐고 있는 카드의 무늬
    int winnings;
    time_t t;
    char suit, rank, stillPlay;

    // 이 함수는 do...while 루프 외부에서 호출되는데
    // 인사말만 출력되어서
    // 한번만 실행되면 되기 때문이다.
    // 나머지 부분은 여러 번 반복해야 하므로 반복 루프 안에 위치한다.

    printGreeting();

    // 사용자가 드로 포커를 한번 할 때마다 반복한다.
    do {
        bet = getBet();

        srand(time(&t));

        getFirstHand(cardRank, cardSuit);

        printf("여러분의 5개의 카드: \n");

        for (i = 0; i < 5; i++)
        {
            suit = getSuit(cardSuit[i]);
            rank = getRank(cardRank[i]);
            printf("카드 #%d: %c%c\n", i + 1, rank, suit);
        }

        // 이들 2개의 배열은 경기자의 손에 있는 카드값을 계산할 때
        // 사용된다.
        // 사용하기 전에 먼저 0으로 초기화되어야 한다.

        for (i = 0; i < 4; i++)
        {
            suitsinHand[i] = 0;
        }

        for (i = 0; i < 13; i++)
        {
            ranksinHand[i] = 0;
        }

        getFinalHand(cardRank, cardSuit, finalRank, finalSuit, ranksinHand, suitsinHand);

        printf("여러분의 최종적인 카드: \n");

        for (i = 0; i < 5; i++)
        {
            suit = getSuit(finalSuit[i]);
            rank = getRank(finalRank[i]);
            printf("카드 #%d: %c%c\n", i + 1, rank, suit);
        }

        winnings = analyzeHand(ranksinHand, suitsinHand);

        printf("여러분이 이겼습니다: %d!\n", bet * winnings);

        bank = bank - bet + (bet * winnings);

        printf("\n여러분의 현재 잔액은 %d.\n", bank);

        printf("\n계속하시겠습니까? ");
        scanf(" %c", &stillPlay);
    } while (toupper(stillPlay) == 'Y');\

    return;
}

/******************************************************************/
// 인사말과 함께 여러 가지 카드 조합에 대한 점수를 알려준다.
/******************************************************************/

void printGreeting()
{
    printf("***************************************************\n");
    printf("\n\n\t완전 초보자의 카지노에 오신 것을 환영합니다.\n\n");
    printf("\t드로 포커의 홈입니다.\n\n");
    printf("***************************************************\n");
    printf("규칙은 다음과 같습니다:\n");
    printf("100점으로 시작합니다. 한번 베팅은 ");
    printf("1점에서 5점 사이입니다.\n");
    printf("처음에 5장의 카드를 받습니다. ");
    printf("어떤 카드를 버릴지 어떤 카드를 유지할지를 ");
    printf("선택할 수 있습니다.\n");
    printf("\n카드 결합에 대한 점수는 다음과 같습니다. (1점을 베팅한다고");
    printf(" 가정합니다.):");
    printf("\n페어\t\t\t\t1점");
    printf("\n투 페어\t\t\t\t2점");
    printf("\n쓰리 카드\t\t\t3점");
    printf("\n스트레이트\t\t\t4점");
    printf("\n플러시\t\t\t\t5점");
    printf("\n풀 하우스\t\t\t8점");
    printf("\n포커\t\t\t\t10점");
    printf("\n스트레이트 플러시\t\t20점");
    printf("\n\n즐거운 시간 보내세요!!\n\n");
}

// 첫 번째 5장을 처리하는 함수

void getFirstHand(int cardRank[], int cardSuit[])
{
    int i, j;
    int cardDup;

    for (i = 0; i < 5; i++)
    {
        cardDup = 0;
        do {
            // 카드 숫자는 (2-10, J, Q, K, A)중의 하나이다.
            cardRank[i] = (rand() % 13);

            // 카드 무늬는 4가지 중의 하나이다.
            // (club, diamond, heart, spade)
            cardSuit[i] = (rand() % 4);

            // 각 카드가 유일한 값을 가지도록 반복한다.

            for (j = 0; j < i; j++)
            {
                if ((cardRank[i] == cardRank[j]) && (cardSuit[i] == cardSuit[j]))
                {
                    cardDup = 1;
                }
            }
        } while (cardDup == 1);
    }
}

// 카드 무늬에 따라서 문자를 부여하는 함수
char getSuit(int suit)
{
    switch (suit)
    {
    case 0:
        return ('c');
    case 1:
        return ('d');
    case 2:
        return ('h');
    case 3:
        return ('s');
    }
}

// 카드 숫자를 랭크로 나타내는 문자로 변경하는 함수
char getRank(int rank)
{
    switch (rank)
    {
    case 0:
        return ('A');
    case 1:
        return ('2');
    case 2:
        return ('3');
    case 3:
        return ('4');
    case 4:
        return ('5');
    case 5:
        return ('6');
    case 6:
        return ('7');
    case 7:
        return ('8');
    case 8:
        return ('9');
    case 9:
        return ('T');
    case 10:
        return ('J');
    case 11:
        return ('Q');
    case 12:
        return ('K');
    }
}

// 사용자로부터 1부터 5까지의 베팅을 입력받는 함수
int getBet()
{
    int bet;

    do // 사용자가 0부터 5를 입력하는 한 계속 반복
    {
        printf("얼마나 거시겠습니까?(숫자로 입력 ");
        printf("1부터 5까지, 종료하려면 0): ");
        scanf(" %d", &bet);

        if (bet >= 1 && bet <= 5)
        {
            return (bet);
        }
        else if (bet == 0)
        {
            exit(1);
        }
        else
        {
            printf("\n\n1부터 5까지의 숫자만 입력해주세요 ");
            printf("종료하려면 0을 입력해주세요.\n");
        }
    } while ((bet < 0) || (bet > 5));
}

// 마지막 함수로서 최종 카드를 분석하여서 점수를 계산한다.

int analyzeHand(int ranksinHand[], int suitsinHand[])
{
    int num_consec = 0;
    int i, rank, suit;
    int straight = FALSE;
    int flush = FALSE;
    int four = FALSE;
    int three = FALSE;
    int pairs = 0;

    for (suit = 0; suit < 4; suit++)
        if (suitsinHand[suit] == 5)
            flush = TRUE;
    rank = 0;
    while(ranksinHand[rank] == 0)
        rank++;
    for (; rank < 13 && ranksinHand[rank]; rank++)
        num_consec++;
    if(num_consec == 5)
    {
        straight = TRUE;
    }
    for (rank = 0; rank < 13; rank++)
    {
        if (ranksinHand == 4)
            four = TRUE;
        if (ranksinHand == 3)
            three = TRUE;
        if (ranksinHand == 2)
            pairs++;
    }

    if (straight && flush)
    {
        printf("스트레이트 플러시\n\n");
        return (20);
    }
    else if (four)
    {
        printf("포커\n\n");
        return (10);
    }
    else if (three && pairs == 1)
    {
        printf("풀 하우스\n\n");
        return (8);
    }
    else if (flush)
    {
        printf("플러시\n\n");
        return (5);
    }
    else if (straight)
    {
        printf("스트레이트\n\n");
        return (4);
    }
    else if (three)
    {
        printf("쓰리 카드\n\n");
        return (3);
    }
    else if (pairs == 2)
    {
        printf("투 페어\n\n");
        return (2);
    }
    else if (pairs == 1)
    {
        printf("Pair\n\n");
        return (1);
    }
    else
    {
        printf("High Card\n\n");
        return (0);
    }
}

// 이 함수는 처음 손에 쥔 5개의 카드를 하나씩 꺼내서
// 사용자에게 그 카드를 유지할 것인지를 질문한다.
// 사용자가 "No"라고 하면
// 카드를 교체한다.

void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[])
{
    int i, j, cardDup;
    char suit, rank, ans;

    for (i = 0; i < 5; i++)
    {
        suit = getSuit(cardSuit[i]);
        rank = getRank(cardRank[i]);

        printf("이 카드를 유지하시겠습니까 #%d: %c%c?", i + 1, rank, suit);
        printf("\n답변해주세요 (Y/N): ");
        scanf(" %c", &ans);

        if (toupper(ans) == 'Y')
        {
            finalRank[i] = cardRank[i];
            finalSuit[i] = cardSuit[i];
            ranksinHand[finalRank[i]]++;
            suitsinHand[finalSuit[i]]++;
            continue;
        }
        else if (toupper(ans) == 'N')
        {
            cardDup = 0;
            do {
                cardDup = 0;

                finalRank[i] = (rand() % 13);
                finalSuit[i] = (rand() % 4);

                // 새로운 카드 5개의 원 카드와 겹치지 않는지
                // 검사한다.

                for (j = 0; j < 5; j++)
                {
                    if ((finalRank[i] == cardRank[j]) && (finalSuit[i] == cardSuit[j]))
                    {
                        cardDup = 1;
                    }
                }

                // 새로 꺼낸 카드끼리 겹치지 않는지 검사한다.

                for (j = 0; j < i; j++)
                {
                    if ((finalRank[i] == finalRank[j]) && (finalSuit[i] == finalSuit[j]))
                    {
                        cardDup = 1;
                    }
                }
            } while (cardDup == 1);
            ranksinHand[finalRank[i]]++;
            suitsinHand[finalSuit[i]]++;
        }
    }
}
