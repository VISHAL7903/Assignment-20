#include <stdio.h>
int main()
{
    int c1=0,c2=0;
    char str[10],*ptr;
    printf("Enter the string \t");
    gets(str);
    ptr = str;
    while(*ptr!='\0')
    {
        if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        c1 ++;
        else
        c2 ++;
        ptr++;
    }
    printf("\n Vowel=%d \n Constant=%d",c1,c2);
    return 0;
}
