#include<stdio.h>
int main()
{
    int a[5],i,*ptr;
    printf("Enter the element");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    ptr=&a[i-1];
    printf("Reverse element \n");
    for(i=0;i<=4;i++)
    {
        printf("%d\n",*ptr);
        *ptr--;
    }
    return 0;
}