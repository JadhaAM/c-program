// amol programing
// struct inishilizing math first
#include<stdio.h>


struct student
{
  int id  ;
  char name[10];
  char study[10];  
};
int main()
{
    struct student s1;
    s1.id=153;
    printf("the studant id is  :%d",s1.id);
    gets(s1.name);
    printf("the studant name is :%s",s1.name);
    fgets(s1.study ,10 ,stdin);
    printf("the studant study in :%s",s1.study);
    
    return 0;
}