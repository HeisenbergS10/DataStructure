#include<stdio.h>
#include<malloc.h>
struct node{
int val;
struct node *next;
};
struct node *head,*tail,*temp,*new;
void main()
{
    int ch;
    head=NULL;
    tail=NULL;
    do{
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter Value:\n");
        scanf("%d",&(new->val));
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            tail->next=new;
            tail=new;
        }
        printf("1.Continue\n 2.Stop\n");
        printf("Enter Your Choice:\n");
        scanf("%d",&ch);
    }while(ch!=2);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
    
}
