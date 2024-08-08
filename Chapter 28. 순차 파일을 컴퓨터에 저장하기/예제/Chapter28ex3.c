// 28장 예제 #3
// 파일 Chapter28ex3.c

/* 이 프로그램은 28장의 첫 번째 예제에서 기록하였던 파일을 열고 끝에 한 줄을 추가한다. */

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

main()
{
    fptr = fopen("C:\\Users\\oopsla\\Desktop\\CTest\\BookInfo.txt", "a");
    if (fptr == 0)
    {
        printf("\n파일 오픈 오류\n");
        exit(1);
    }

    // 끝에 한 줄을 추가한다.

    fprintf(fptr, "\n더 많은 책이 등장할 것임!\n");

    fclose(fptr); // 항상 파일을 닫도록 하자.

    return 0;
}
