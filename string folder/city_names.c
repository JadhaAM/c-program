#include<stdio.h>
#include<string.h>
int main()
{
   char city[3]={"karjat,pune,nagar"};
   
    for (char i = 0; i <3; i++)
    {
        printf("the city name is:\n");
        puts(city[i]);

    }
    return 0;
}