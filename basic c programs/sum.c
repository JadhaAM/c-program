#include<stdio.h>
void printline();
int main()
{
   printline();
  printf("\n\twellcome\n");
   printline();
   return 0;
}
void printline()
{
    int i;
    for ( i = 0; i < 23; i++)
    {
        printf("&");
    }
    
}
