// NOT SOLVED

#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((a + b == d) || (a - b == d) || (a * b == d) || (b != 0 && a / b == d) ||
        (b + c == d) || (b - c == d) || (b * c == d) || (c != 0 && b / c == d) ||
        (a + c == d) || (a - c == d) || (a * c == d) || (c != 0 && a / c == d))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}