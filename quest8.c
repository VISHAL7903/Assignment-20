 #include <stdio.h>
int main()
{
    int a[10];
    int i,sum=0,*ptr;
    printf("Enter the number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=&a[0];
    for(i=0;i<=9;i++)
    {
        sum=sum+(*ptr);
        ptr++;
    }
    printf("sum  %d",sum);
    return 0;
}
