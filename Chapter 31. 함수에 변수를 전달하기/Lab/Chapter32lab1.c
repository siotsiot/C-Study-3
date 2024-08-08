#include <stdio.h>
#include <stdlib.h>

float cal_asteroid_ke(float velocity, float weight);

main()
{
    float ke, weight, velocity;

    printf("소행성의 속도(m/s): ");
    scanf("%f", &velocity);
    printf("소행성의 무게(kg): ");
    scanf("%f", &weight);

    ke = cal_asteroid_ke(velocity, weight);
    printf("%f개의 원자폭탄과 동일한다.\n", ke / 9e13);

    return 0;
}

float cal_asteroid_ke(float velocity, float weight)
{
    float energy = 0.0;

    energy = 0.5 * weight * velocity * velocity;
    return energy;
}
