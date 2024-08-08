#include <stdio.h>

void swap(int *px, int *py)
{
    int tmp;

    printf("swap() 호출 \n");
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{
    int a = 100, b = 200;

    printf("main() a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("main() a=%d b=%d\n", a, b);

    return 0;
}
