#include <stdio.h>

int main()
{
    char c;

    for (;;) {
        c = getchar();

        if (c == EOF) break;

        if ((c >= 'a') && (c <= 'z'))
            c += 'A' - 'a';
        putchar(c);
    }

    return 0;
}
