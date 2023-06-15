#include<stdio.h>
int sum(int a, int b);
int main()
{
 int a=10,b=15;
 printf("the value of a=%d and b=%d\n",a,b);
 sum(a,b);
 return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    printf("the sum =%d",c);
    return c;

  

}