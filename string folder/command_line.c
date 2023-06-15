#include<stdio.h>
int main (int argc ,char *argv[] )
{
    printf("the value of argument is :%d\n",argc);
    for (int i = 1; i < argc; i++)
    {
        printf("this argument  at index number %d  has a value of %s\n",i,argv[i]);

    }
    return 0;
}