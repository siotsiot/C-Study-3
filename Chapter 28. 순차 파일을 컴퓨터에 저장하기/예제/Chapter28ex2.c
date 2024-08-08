// 28장 예제 #2
// 파일 Chapter28ex2.c

/* 이 프로그램은 28장의 예에서 책 정보를 취한다. 파일에서 한 줄을 읽어서 화면에 출력한다. */

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

main()
{
    char fileLine[100];
    fptr = fopen("C:\\Users\\oopsla\\Desktop\\CTest\\BookInfo.txt", "r");

    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr));
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\n파일 오픈 오류\n");
    }

    fclose(fptr); // 항상 파일을 닫도록 하자.

    return 0;
}
