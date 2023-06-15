#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[20];
    printf("enter the string:\n");
    fgets(a,20,stdin);
    printf("your string is:");
    puts(a);
    printf("the length of the string is :%d\n",strlen(a));
    strrev(a);
    printf("the revers string is \n");
    puts(a);
    return 0;
}
