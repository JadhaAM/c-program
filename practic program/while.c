#include<stdio.h>
void revars(int n);
int main()
{
    int a=0,b=10;
    revars( a);
}
void revars(int n)
{  
        int a=1,b=-10;

    while (b<a)
    {
        printf("the revars=%d",n);
        n++;
    }
    
}