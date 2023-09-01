#include<stdio.h>
#define Max 5
int que[Max];
int l=-1;
int r=-1;
void enque();
void deque();
void insertright();
void insertleft();
void deleteright();
void deleteleft();
void display();
void main()
{
    int ch;
    printf("1.Enque\n2.Deque\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:enque();
            break;
        case 2:deque();
             break;
        default:printf("Enter an Valid Choice\n");
    }
}
void enque()
{
    int ch1;
    printf("1.InsertFromRight\n2.DeleteFromRight\n3.DeleteFromLeft\n4.Display\n5.End\n");
    do{
        printf("Enter Your Choice:\n");
        scanf("%d",&ch1);
        switch(ch1)
        {
        case 1:insertright();
               break;
        case 2:deleteright();
               break;
        case 3:deleteleft();
               break;
        case 4:display();
               break;
        case 5:printf("Bye-Bye\n");
               break;
        default:printf("Enter an Valid Choice\n");
        }
    }while(ch1!=5);
}
void deque()
{
    int ch2;
    printf("1.InsertFromRight\n2.InsertFromLeft\n3.DeleteFromLeft\n4.Display\n5.End\n");
    do{
        printf("Enter Your Choice:\n");
        scanf("%d",&ch2);
        switch(ch2)
        {
          case 1:insertright();
               break;
        case 2:insertleft();
               break;
        case 3:deleteleft();
               break;
        case 4:display();
               break;
        case 5:printf("Bye-Bye\n");
               break;
        default:printf("Enter an Valid Choice\n");   
        }
    }while(ch2!=5);
}
void insertright()
{
    if((l==0&&r==Max-1)||(r==l-1))
    {
        printf("Queue is full\n");
    }
    else
    {
        if(r==-1&&l==-1)
        {
            r=0;
            l=0;
        }
        else if(r==Max-1&&l!=0)
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
}
void deleteleft()
{
if(r==-1&&l==-1)
{
    printf("Queue is Empty\n");
    
}
else
{
    if(r==Max-1&&l==Max-1)
    {
        r=-1;
        l=-1;
    }
    else if(l=Max-1)
    {
        l=0;
    }
    else
    {
     l++;   
    }
}
}
void insertleft()
{
    if((l==0&&r==Max-1)||(l=r+1))
    {
        printf("Queue is Full\n");
    }
    else
    {
        if(l==-1&&r==-1)
        {
         l=Max-1;
         r=Max-1;
        }
        else if(l==0&&r!=Max-1)
        {
            l=Max-1;
        }
        else
        {
            l--;
        }
        printf("Enter Your Element\n");
        scanf("%d",&que[l]);
    }
}
void deleteright()
{
    if(l==-1&&r==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        if(l==r)
        {
            l=-1;
            r=-1;
        }
        else if(r==0)
        {
            r=Max-1;
        }
        else
        {
            r--;
        }
    }
    
}
void display()
{
    int i;
    if(r==-1&&l==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        if(l<=r)
        {
          for(i=l;i<=r;i++)
          {
              printf("%d ",que[i]);
          }
        }
        else
        {
            for(i=l;i<=Max-1;i++)
            {
                printf("%d ",que[i]);
            }
            for(i=0;i<=r;i++)
            {
                printf("%d ",que[i]);
            }
        }
    }
}