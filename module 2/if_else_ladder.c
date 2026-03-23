#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Bargar kahbo\n");
    }
    else if (tk >= 50)
    {
        printf("Fuska Khabo\n");
    }
    else
    {
        printf("kisu khabo na tk nai");
    }
    return 0;
}