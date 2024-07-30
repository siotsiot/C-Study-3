#include <stdio.h>

main()
{
    // 변수를 정의하고 초기화한다.
    int number_of_tvs;
    int nubmer_of_tablets;
    int nubmer_of_shavers;

    float tv = 1320.00;
    float tablet = 299.00;
    float shaver = 129.00;

    number_of_tvs = 3;
    nubmer_of_tablets = 2;
    nubmer_of_shavers = 5;

    printf("%d대의 TV와, %d개의 태블릿, %d개의 면도기.\n", number_of_tvs, nubmer_of_tablets, nubmer_of_shavers);
    printf("총 금액은 $%.2f\n\n", number_of_tvs * tv + nubmer_of_tablets * tablet + nubmer_of_shavers * shaver);

    return 0;
}
