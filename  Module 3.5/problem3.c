#include <stdio.h>
int main()
{

    int a;
    long long int b;
    double c; 
    // char c; 
    char d;

    scanf("%d %lld %lf %c", &a, &b, &c, &d);
    printf("%d\n %lld\n %.2lf\n %c", a, b, c, d);

    // printf("%d\n", a);
    // printf("%lld\n", b);
    // printf("%.2f\n", c);
    // printf("%c\n", d);

    return 0;
}