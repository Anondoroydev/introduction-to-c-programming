#include <stdio.h>

int main()

// pre_increment

{
    int x = 10;
    int y = ++x;
    printf("%d %d", x, y);
    return 0;
}

// post_increment

// {
//     int x = 10;
//     int y = x++;
//     printf("%d %d", x, y);
//     return 0;
// }