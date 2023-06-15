// amol programing
//  emplyoees informition program
#include<stdint.h>
#include<string.h>
#include<stdio.h>

struct emp
{
    int id;
    char name[10];
    float salary;

}e1;
int main()
{
        

    e1.id=101 ;
    printf("the id is :%d\n",e1.id);
    
    e1.salary=3000.54;
        printf("the salary is :%.2f\n",e1.salary);
}


