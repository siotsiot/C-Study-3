// 17장 예제 #2
// 파일 Chapter17ex2.c

/* 이 프로그램은 선택 메뉴를 표시하고(3개 시대 중의 하나) 사용자의 입력을 받는다.
두 번째 메뉴를 표시한다. (스포츠, 엔터테인먼트, 정치)
사용자가 두 번째 선택을 하면 지정된 시대의 지정된 분야의 핵심적인 정보들을 출력한다. */
#include <stdio.h>
#include <stdlib.h> //exit()를 사용하려면 이 헤더 파일이 필요하다.

main()
{
	// 프로그램은 길지만 변수는 2개만 필요하다.
	// 하나는 첫 번째 메뉴 선택에 사용되고 또 하나는 두 번째 메뉴에 사용된다.
	int choice1;
	int choice2;

	// 시대를 선택한다.
	printf("어떤 시대를 보고 싶나요? \n");
	printf("1. 1980년대 \n");
	printf("2. 1990년대 \n");
	printf("3. 2000년대 \n");
	printf("4. 종료\n");

	// 탑 메뉴 선택과 해당되는 switch 문장이다.
	// do-while 루프를 사용하여서 4개 중의 하나가 선택되도록 한다.
	do
	{
		printf("하나를 선택하시오: ");
		scanf(" %d", &choice1);
		switch (choice1)
		{
			// 첫 번째 경우에는 사용자가 1980년대를 선택하였다.
			// 이번에는 주제를 선택한다.
		case (1) :
		{
			printf("\n\n어떤 분야를 보고 싶으신가요?\n");
			printf("1. 야구\n");
			printf("2. 영화\n");
			printf("3. 미국 대통령\n");
			printf("4. 종료\n");
			printf("하나를 선택하시오: ");
			scanf(" %d", &choice2);
			if (choice2 == 1)
			{
				printf("\n\n월드 시리즈 챔피온 ");
				printf("1980년대:\n");
				printf("1980: Philadelphia Phillies\n");
				printf("1981: Los Angeles Dodgers\n");
				printf("1982: St. Louis Cardinals\n");
				printf("1983: Baltimore Orioles\n");
				printf("1984: Detroit Tigers\n");
				printf("1985: Kansas City Royals\n");
				printf("1986: New York Mets\n");
				printf("1987: Minnesota Twins\n");
				printf("1988: Los Angeles Dodgers\n");
				printf("1989: Oakland A's\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 2)
			{
				printf("\n\n1980년대의 아카데미 수상작:\n");
				printf("1980: Ordinary People\n");
				printf("1981: Chariots of Fire\n");
				printf("1982: Gandhi\n");
				printf("1983: Terms of Endearment\n");
				printf("1984: Amadeus\n1985: Out of Africa\n");
				printf("1986: Platoon\n");
				printf("1987: The Last Emperor\n");
				printf("1988: Rain Man\n");
				printf("1989: Driving Miss Daisy");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 3)
			{
				printf("\n\nUS 1980년대의 미국 대통령:\n");
				printf("1980: Jimmy Carter\n");
				printf("1981-1988: Ronald Reagan\n");
				printf("1989: George Bush\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 4)
			{
				exit(1);
			}
			else
			{
				printf("미안하지만, 올바른 선택이 아니군요!\n");
				break;
			}
		}
				 // 1990년대를 위한 코드
				 // 상단 메뉴와는 다르게 데이터를 검증하지 않는다.
		case (2) :
		{
			printf("\n\n어떤 분야를 보고 싶으신가요?\n");
			printf("1. 야구\n");
			printf("2. 영화\n");
			printf("3. 미국 대통령\n");
			printf("4. 종료\n");
			printf("하나를 선택하시오: ");
			scanf(" %d", &choice2);
			if (choice2 == 1)
			{
				printf("\n\n월드 시리즈 챔피온 ");
				printf("1990년대:\n");
				printf("1990: Cincinnati Reds\n");
				printf("1991: Minnesota Twins\n");
				printf("1992: Toronto Blue Jays\n");
				printf("1993: Toronto Blue Jays\n");
				printf("1994: No World Series\n");
				printf("1995: Atlanta Braves\n");
				printf("1996: New York Yankees\n");
				printf("1997: Florida Marlins\n");
				printf("1998: New York Yankees\n");
				printf("1999: New York Yankees\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 2)
			{
				printf("\n\n아카데미 수상작 ");
				printf("1990년대:\n");
				printf("1990: Dances with Wolves\n");
				printf("1991: The Silence of the Lambs\n");
				printf("1992: Unforgiven\n");
				printf("1993: Schindler's List\n");
				printf("1996: The English Patient\n");
				printf("1997: Titanic\n");
				printf("1998: Shakespeare in Love\n");
				printf("1999: American Beauty\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 3)
			{
				printf("\n\n1990년대의 미국 대통령:\n");
				printf("1990-1992: George Bush\n");
				printf("1993-1999: Bill Clinton\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 4)
			{
				exit(1);
			}
			else
			{
				printf("미안하지만, 올바른 선택이 아니군요!\n");
				break;
			}
		}
				 // 2000년대를 위한 코드
		case (3) :
		{
			printf("\n\n어떤 분야를 보고 싶으신가요?\n");
			printf("1. 야구\n");
			printf("2. 영화\n");
			printf("3. 미국 대통령\n");
			printf("4. 종료\n");
			printf("하나를 선택하시오: ");
			scanf(" %d", &choice2);
			if (choice2 == 1)
			{
				printf("\n\n월드 시리즈 챔피온 ");
				printf("2000년대:\n");
				printf("2000: New York Yankees\n");
				printf("2001: Arizona Diamondbacks\n");
				printf("2002: Anaheim Angels\n");
				printf("2003: Florida Marlins\n");
				printf("2004: Boston Red Sox\n");
				printf("2005: Chicago White Sox\n");
				printf("2006: St. Louis Cardinals\n");
				printf("2007: Boston Red Sox\n");
				printf("2008: Philadelphia Phillies\n");
				printf("2009: New York Yankees\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 2)
			{
				printf("\n\n아카데미 수상작 ");
				printf("2000년대:\n");
				printf("2000: Gladiator\n");
				printf("2001: A Beautiful Mind\n");
				printf("2002: Chicago\n2003: The ");
				printf("Lord of the Rings: The ");
				printf("Return of the King\n");
				printf("2004: Million Dollar Baby\n");
				printf("2005: Crash\n");
				printf("2006: The Departed\n");
				printf("2007: No Country for Old Men\n");
				printf("2008: Slumdog Millionaire\n");
				printf("2009: The Hurt Locker\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 3)
			{
				printf("\n\n2000년대의 미국 대통령:\n");
				printf("2000: Bill Clinton\n");
				printf("2001-2008: George Bush\n");
				printf("2009: Barrack Obama\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 4)
			{
				exit(1);
			}
			else
			{
				printf("미안하지만, 올바른 선택이 아니군요!\n");
				break;
			}
		}
		case (4) :
			exit(1);
		default:
			printf("\n%d은 올바른 선택이 아닙니다. \n", choice1);
			printf("다시 입력하시오.\n");
			break;
		}
	} while ((choice1 < 1) || (choice1 > 4));

	return 0;
}
