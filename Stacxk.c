#include<stdio.h>
int st[5];
int top=-1;
void push();
void pop();
void disp();
void main()
{
    int ch;
    printf("1.push\n2.pop\n3.display\n4.end\n");
    do{
        printf("Enter Your Choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:disp();
            break;
            case 4:printf("Bye Bye\n");
            break;
            default:printf("Invalid input\n");
            break;
            }
    }while(ch!=4);
}
void push()
{
  if(top==4)
  {
      printf("Stack is full\n`");
  }
  else
  {
      top++;
      printf("Enter Your Data\n");
      scanf("%d",&st[top]);
  }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        top--;
    }
}
void disp()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        for(i=top;i>=0;i--)
        {
            printf("%d\n",st[i]);
        }
    }
}