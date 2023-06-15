#include<stdio.h>

int main()
{
    int i,j, c;
    for ( i = 1; i <=10; i++)
    {
       for ( j = 1; j <=10; j++)
       {
           c=i*j; 
           printf("%d\n",c);
       }
        printf(" ");
    }
          
    return 0;

}