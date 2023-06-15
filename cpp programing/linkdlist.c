#include<stdio.h>
#include<malloc.h>
#include<process.h>


void creat();
void insret_at_beg();
void insret_at_end();
void insret_at_post();
void del();
void search();
void display();
struct node
{
int info;
struct node*link;
}
*start=NULL;
int data,itam,n1,pos,i,m,size;

int main()
{
    int n;
    setbuf(stdout,NULL);
    printf("\n****** linked list ******\n");
    printf("\n1. creat\n2.insert at beging \n3.insert at end \n4.insert at after position \n5.delete \n6.search\n7.display \n8.exit\n   \n");
    while (1)

    {
         printf(" \n enter your choice:(\n1. creat\n2.insert at beging \n3.insert at end \n4.insert at after position \n5.delete \n6.search\n7.display \n8.exit\n   \n)");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        creat();
        break;
    case 2 :
        insret_at_beg();
        break;
    case 3:
        insret_at_end();
        break;
    case 4:
        insret_at_post();
        break;
    case 6:
        search();
        break;
    case 5:
        del();
        break;
    case 7:
        display();
        break;
    case 8:
        exit(0);
        break;
    
    default:
    printf("\n worng choice !!!\n");
        break;
    }
    }
    return 0;
    
}
void create()
{
    struct node*q,*tmp;
    printf("\n enter element :\n");
        scanf("%d",&data);
        tmp=malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=NULL;
        if (start==NULL)

        {
             start=tmp;
             display();
        }
        else
        {
            q=start;
            while (q->link!=NULL)
            q=q->link;
            q->link=tmp;  
        }
}
    void insert_at_beg()
    {
    struct node*tmp;
    printf("\n enter  the element  to be inserd:\n");
        scanf("%d",&data);
        tmp=malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=NULL;
             start=tmp;
             display();

    }

        
void insert_at_end()
{
    struct node*q,*tmp;
    printf("\n enter the  element  to be inserd at end:\n");
        scanf("%d",&data);
        tmp=malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=NULL;
        if (start==NULL)
             start=tmp;
        else
        {
            q=start;
            while (q->link!=NULL)
            q=q->link;
            q->link=tmp;  
        }
        display();
}

void insert_at_pos()
{
    disply();
    struct node*q,*tmp;
    int index;
            tmp=malloc(sizeof(struct node));
    printf("\n enter the  element  to be inserd:\n");
        scanf("%d",&data);
        tmp->info=data;
        tmp->link=NULL;
        if (start==NULL)
             start=tmp;
             
        else
        {
                printf("\n enter index after which element  to be inserd:\n");
        scanf("%d",&index);
         for ( i = 0; i < index; i++)
        {
            q=q->link;
            if (q==NULL)
            {
                printf("there are lesss elements\n ");
                return;
            }
        }  
        tmp->link=q->link;
            q->link=tmp;  
        }
        display();
}


void del()
{
      struct node *q,*tmp;
      printf("\n enter  the element to be deleted\n");
        scanf("%d",&data);
       if(start->info==data)
      {
         tmp=start;
         start=start->link;
         free(tmp);
         display();
         return;
       }
    q=start;
            while (q->link->link!=NULL)
            {
                if (q->link->link==data)
                {
                 tmp=q->link;
                 q->link=tmp->link;
                 free(tmp) ; 
                 return;
                }
                q=q->link;
            }
            if (q->link->link==data)
               {
                tmp=q->link;
                q->link=NULL;
                fere(tmp);
                return;
                }
        printf("\n element not found \n");     
        
}


void search()
{
    struct node*tmp;
    int i=0;
    printf("\n enter  the element  to be searched:\n");
        scanf("%d",&itam);
        tmp=start;
        while (tmp!=NULL)
        {
            if (tmp->info==itam)
          {
             printf("\n elemente found at index : %\n",i);
             return;
          }
          tmp=tmp->link;
          i++;
        }
        if (tmp->link==NULL)
        printf(" \nelement not found\n");
}


void display()
{
    struct node*q;
        if (start==NULL)
        printf(" \nlistis empty!!\n");
        else
        {
                    printf("***** elemenet in linked list******");
            q=start;
            while (q!=NULL)
            {
             printf("%d\t",q->info);
             q=q->link;
            }
        }
}