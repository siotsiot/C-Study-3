// 3장 예제 #1
/* 첫 번째 코드 리스팅
1994년부터 초보 프로그래머들을 교육하고 있음! */
/* 딘 밀러 */
/* 파일 이름 Chapter3ex1.c */

/* 명절 선물에 들어가는 돈의 합계 */
#include <stdio.h>

main()
{
	int gift1, gift2, gift3, gift4, gift5; /* 비용을 저장하는 변수들 */
	int total; /* 합계를 저장하는 변수  */

	/* 각 선물의 비용을 묻는다. */
	printf("엄마를 위하여 얼마나 돈을 쓸 것인가요?");
	scanf(" %d", &gift1);
	printf("아빠를 위하여 얼마나 돈을 쓸 것인가요?");
	scanf(" %d", &gift2);
	printf("동생을 위하여 얼마나 돈을 쓸 것인가요?");
	scanf(" %d", &gift3);
	printf("형을 위하여 얼마나 돈을 쓸 것인가요?");
	scanf(" %d", &gift4);
	printf("가장 좋아하는 C 프로그래밍 저자를 ");
	printf("위하여 얼마나 돈을 쓸 것인가요?");
	scanf(" %d", &gift5);

	/* 선물에 쓰이는 비용의 합계를 계산한다. */
	total = gift1 + gift2 + gift3 + gift4 + gift5;

	printf("\n선물 비용의 합계는 $%d입니다.", total);
	return 0; /* 프로그램을 종료한다. */
}
