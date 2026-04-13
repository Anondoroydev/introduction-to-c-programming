#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int mx = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);

        if (val > mx)
        {
            mx = val;
        }
    }
    printf("%d", mx);

    return 0;
}