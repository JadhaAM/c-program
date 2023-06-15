// amol programing
//  emplyoees informition program
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

struct emp
{
    int id;
    char name[10];
    float salary;

};
        void printline()
        {
            for (int i = 0; i < 40; i++)
            {
                printf("_");
            }
    
        }
                void printline2()
            {
                     for (int i = 0; i < 50; i++)
                 {
                             printf("*");
                }
    
}
            void print()
    {
        printf("\n");
    }
    int main()
{   
    struct emp e[50];  
    int i,n;

    printline2();
        printf("\nenter the empyoess :");

        scanf("%d",&n);

        printf("\nenter the correct information.... \n");


                for ( i = 0; i < n; i++)
            {
                printf("enter the id:\n enter your name :\n enter your salary :\n");

                scanf("%d\n%s\n%f\n",&e[i].id,e[i].name,&e[i].salary); 

            }       

        printf("\nid|\tname|\tsalary|\n");

    printline();

                    for ( i = 0; i < n; i++)
                {
                        printf("\n%d |\t%s |\t%f |\n",e[i].id,e[i].name,e[i].salary);
                }
        printline();
    print();

    printline2();
    
    printf("\nthanks for wisiting the program....\n");
    
    print();

    printline2();
}