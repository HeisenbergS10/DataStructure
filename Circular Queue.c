#include<stdio.h>
#define Max 5
int que[Max];
int f=-1;
int r=-1;
void insertion();
void deletion();
void display();
void main()
{
    int ch;
    printf("1.Insert\n2.Delete\n3.Display\n4.End\n");
    do{
    printf("Enter Your Choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insertion();
               break;
        
        case 2: deletion();
               break;
               
        case 3: display();
               break;
              
        case 4: printf("Bye Bye\n");
               break;
        default:printf("Enter an Valid Input\n");       
    }
    }while(ch!=4);
}

void insertion()
{
    if((f==0&&r==Max-1)||(r==f-1))
    {
        printf("Queue is full\n");
    }
    else if(f==-1&&r==-1)
    {
        r=0;
        f=0;
    }
    else if(f!=0&&r==Max-1)
    {
        r=0;
    }
    else
    {
        r++;
    }
    printf("Enter Your Element:\n");
    scanf("%d",&que[r]);
}

void deletion()
{
    if(r==-1&&f==-1)
    {
        printf("Queue is empty\n");
    }
    else if(r==f)
    {
        r=-1;
        f=-1;
    }
    else if(f==Max-1)
    {
        f=0;
    }
    else
    {
        f++;
    }
}
void display()
{
    int i;
    if(f==-1&&r==-1)
    {
        printf("Queue is Empty\n");
    }
    else if(f<=r)
    {
       for(i=f;i<=r;i++)
       {
           printf("%d ",que[i]);
       }
    }
    else{
        for(i=f;i<=Max-1;i++)
        {
            printf("%d ",que[i]);
        }    
        for(i=0;i<=r;i++)
        {
          printf("%d ",que[i]);      
        }
        
    }
}