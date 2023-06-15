#include<stdio.h>
void main()
{

  int i =8;
  int *j=&i;
 printf("the addri:%u\n",&i);
 printf("the addri:%u\n",j);
 printf("the value:%d\n",*j);
 printf("the value:%d\n",i);
}