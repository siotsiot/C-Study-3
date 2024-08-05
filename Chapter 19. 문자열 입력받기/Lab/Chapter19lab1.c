#include <stdio.h>
#include <string.h>

main()
{
    char name[100];
    char input[100];
    char output[100];

    printf("이름은 무엇인가요? ");
    scanf("%s", name);
    fflush(stdin);

    while (1)
    {
        printf(">");
        gets(input);
        if (strcmp(input, "quit") == 0)
            break;
        strcpy(output, "");
        strcat(output, name);
        strcat(output, "씨, ");
        strcat(output, input);

        printf("%s라구요.\n", output);
        printf("재미있네요! 더 이야기 해보세요\n");
    }

    return 0;
}
