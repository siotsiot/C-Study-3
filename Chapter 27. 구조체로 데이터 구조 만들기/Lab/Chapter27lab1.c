#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

main()
{
    struct time t1, t2, diff;

    printf("시작 시간(시간, 분, 초): ");
    scanf("%d%d%d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("종료 시간(시간, 분, 초): ");
    scanf("%d%d%d", &t2.hours, &t2.minutes, &t2.seconds);

    if (t2.seconds < t1.seconds)
    {
        --t2.minutes;
        t2.seconds += 60;
    }

    diff.seconds = t2.seconds - t1.seconds;

    if (t2.minutes < t1.minutes)
    {
        --t2.hours;
        t2.minutes += 60;
    }
    diff.minutes = t2.minutes - t1.minutes;
    diff.hours = t2.hours - t1.hours;

    printf("시간 차이: %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;
}
