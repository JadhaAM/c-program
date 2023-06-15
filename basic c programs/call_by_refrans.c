#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a=10,b=30;
       printf("befor the a=%d and b=%d\n",a,b);

       swap(&a,&b);
       printf("aftre the a=%d and b=%d\n",a,b);

     return 0;
}
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
