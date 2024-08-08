#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *fp1, *fp2;
    int ch1, ch2;
    char fname1[40], fname2[40];

    printf("첫 번째 파일 이름 : ");
    gets(fname1);

    printf("두 번째 파일 이름 : ");
    gets(fname2);

    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "r");

    if (fp1 == NULL)
    {
        printf("%s을 열 수 없습니다.\n", fname1);
        exit(1);
    }
    else if (fp2 == NULL)
    {
        printf("%s을 열 수 없습니다.\n", fname2);
        exit(1);
    }

    ch1 = fgetc(fp1);
    ch2 = fgetc(fp2);

    while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2))
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
    }

    if (ch1 == ch2)
        printf("파일은 동일합니다.\n");
    else
        printf("파일은 동일하지 않습니다.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
