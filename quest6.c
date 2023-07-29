#include <stdio.h>
int main()
{
    int count=0;
    char length[100],*ptr;
    printf("Enter the string\t");
    gets(length);
    ptr = length;
    while(*ptr!='\0')
    {
        count ++;
        ptr ++;
    }
    printf("Length of String is %s = %d",length,count);
    return 0;
}
