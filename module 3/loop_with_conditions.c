#include <stdio.h>
int main()
// {

//     for (int i = 1; i <= 10; i++)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d- even\n", i);
        }
        else
        {
            printf("%d -Odd\n", i);
        }
    }
    return 0;
}