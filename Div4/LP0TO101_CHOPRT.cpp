#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf(">\n");
        }
        else if (a < b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }

        t--;
    }

    return 0;
}