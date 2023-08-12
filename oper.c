#include<stdio.h>
#include<ctype.h>
#define Max 7
char abc[10];
int st[Max];
int top=-1;
void push(int);
int pop();
void main()
{
    int i,val1,val2,ans;
    printf("Enterf Your String");
    scanf("%s",abc);
    i=0;
    while(abc[i]!='\0')
    {
        if(isdigit(abc[i])!=0)
        {
            push(abc[i]-48);
        }
        else
        {
            switch(abc[i])
            {
            case '+':val1=pop();
                     val2=pop();
                     ans=val2+val1;
                     push(ans);
                     
                     
            case '*':val1=pop();
                     val2=pop();
                     ans=val2*val1;
                     push(ans);
                     
            case '/':val1=pop();
                     val2=pop();
                     ans=val2/val1;
                     push(ans);
                     
            case '-':val1=pop();
                     val2=pop();
                     ans=val2-val1;
                     push(ans);
                     
                     
        }
    }
    i++;
}

void push(int x)
{
    if(top==Max-1)
    {
        printf("Stack is Full\n");
    }
    else{
    top++;
    st[top]=x;
    }
}


int pop()
{
    int y;
    y=st[top];
    top--;
    return y;
}