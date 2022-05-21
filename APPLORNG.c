#include <stdio.h>

int main(void)
{
    // your code goes here
    int x, a, b;
    scanf("%d", &x);
    scanf("%d %d", &a, &b);

    int buy = ((1 * a) + (1 * b));
    if (buy > x)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
