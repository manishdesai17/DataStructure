#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next,*pre;
};
struct node *insert(struct node *head)
{
    struct node *c,*p,*n;
    n=(struct node *)malloc(sizeof(struct node));
    p=NULL;
    c=head;
    int ele;
    printf("Enter element:");
    scanf("%d",&ele);
    n->data=ele;
    if(head==NULL)
    {
        n->next=n;
        n->pre=n;
        head=n;
    }
    else if(ele<head->data)
    {
      
        n->next=head;

        n->pre=head->pre;
        (head->pre)->next=n;
         head->pre=n;
        head=n;
    }
    else
    {
        do{
            p=c;
            c=c->next;
        }
        while(c!=head &&c->data<ele);
        p->next=n;
        c->pre=n;
        n->next=c;
        n->pre=c;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head->next;
    printf("%d ",head->data);
    while(temp!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
  struct node *head=NULL; 
  int c;
  do{
  printf("\n1.insert");
  printf("\n2.remove");
  printf("\n3.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
    case 1:head=insert(head);
         display(head);
         break;
    // case 2:head=rem(head);
    // display(head);
    //      break;
    case 3:break;
    default:printf("enter valid choice:");
          break;
  }
  }while(c!=3);
}