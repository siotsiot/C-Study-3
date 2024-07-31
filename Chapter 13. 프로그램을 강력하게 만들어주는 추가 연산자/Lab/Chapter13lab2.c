#include <stdio.h>
main()
{
    int x = 8, y = 10;

    printf("x=%d\n", x);
    printf("x=%d\n", ++x);
    printf("x=%d\n", x);

    printf("y=%d\n", y);
    printf("y=%d\n", y++);
    printf("y=%d\n", y);
    return 0;
}
