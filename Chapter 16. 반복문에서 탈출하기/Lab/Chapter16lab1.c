#include <stdio.h>

main()
{
    float num, result;
    int i, n;

    result = 1.0;
    printf("입력의 개수: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d번째 수: ", i);
        scanf("%f", &num);
        if (num < 0.0)
            break;
        if (num == 0.0)
            continue;
        result = result * num;
    }

    printf("계산값=%.2f\n", result);

    return 0;
}
