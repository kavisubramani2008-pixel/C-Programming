#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even numbers %d\n", a);
    }
    else
    {
        printf("Odd numbers %d\n", a);
    }
    return 0;
}