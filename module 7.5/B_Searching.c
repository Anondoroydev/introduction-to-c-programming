#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int inx = -1;

    // searching the element
    for (int i = 0; i <n; i++)
    {
        if (a[i] == x)
        {
            inx = i;
            break;  
            
        }
    }
    printf("%d\n", inx);
    
    return 0;

    
}