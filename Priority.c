#include<stdio.h>
#define Max 7
struct que{
    int p;
    int e;
};
struct que x[Max];
int f=-1;
int r=-1;
void insertion();
void deletion();
void display();
void main()
{
    int ch;
    printf("1.Insert\n 2.Delete\n 3.Display\n 4.Display\n 5.End\n");
    do{
        printf("Enter Your Choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertion();
                   break;
                   
            case 2:deletion();
                   break;
                   
            case 3:display();
                   break;
                   
            case 4:printf("Bye Bye\n");
                   break;
                   
            default:printf("Enter an Valid Input\n");   
            
        }
    }while(ch!=4);
}

void insertion()
{
    int i,prio,ele;
    if(r==Max-1&&f==0)
    {
        printf("Queue is full\n");
    }
    else 
    {
        printf("Enter element and priority\n");
        scanf("%d %d",&ele,&prio);
        i==r;
        if(f==-1&&r==-1)
       {
        r=0;
        f=0;
        x[r].p=prio;
        x[r].e=ele;
       }
       else
       {
           i=r;
           while(x[i].p>prio)
           {
               x[i+1].p=x[i].p;
               x[i+1].e=x[i].e;
               i--;
           }
           x[i+1].p=prio;
           x[i+1].e=ele;
           r++;
       }
        
    }
    
}

void deletion()
{
    if(f==-1&&r==-1)
    {
     printf("Queue is Empty\n");   
    }
    else if(r==f)
    {
      r=-1;
      f=-1;
    }
    else
    {
        r++;
    }
}
void display()
{
    int i;
    if(r==-1&&f==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Priority   Element\n");
        for(i=f;i<=r;i++)
        {
            printf("%d          %d\n",x[i].p,x[i].e);
        }
    }
}