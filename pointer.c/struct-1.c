#include<stdio.h>
#include<string.h>
 typefdep ; struct stud 
{
  int id ;
  char name[10];
  char study[10];  
} stud[10];
int main()
{
    struct stud;
    
    int i;
 printf("enter youer correct informition ....\n");
for ( i=1; i<10; i++)
{
  printf("%d  enter the name :- %s\n id :-%d\n in study:- %s\n",
   i,fgets(stud->name,10,stdin),stud->id,fgets(stud->study,10,stdin));
}

}