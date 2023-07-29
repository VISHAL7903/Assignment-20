#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two number\n");
    scanf("%d%d", &x, &y);
    int *p = &x, *q = &y;
    if (*p > *q)
        printf("Maximum Number is %d", *p);
    else
        printf("Maximum Number is %d", *q);
    return 0;
}