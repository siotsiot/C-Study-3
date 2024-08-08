// 32장 예제 #2
// 파일 Chapter32ex2.c

#include <stdio.h>
float compNet(float atomWeight, float factor);

main()
{
    float atomWeight, factor, netWeight;

    printf("원자량은? ");
    scanf(" %f", &atomWeight);

    printf("비율은? ");
    scanf(" %f", &factor);

    netWeight = compNet(atomWeight, factor);
    printf("순질량은 %.4f\n", netWeight);

    return 0;
}

/*************************************************************************/

float compNet(float atomWeight, float factor)
{
    float netWeight;
    netWeight = (atomWeight - factor) * .8;
    return(netWeight);
}
