#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node* insert(struct node *head)
{
    struct node *n,*p,*c;
    n=(struct node *)malloc(sizeof(struct node));
    c=head;
    p=NULL;
    int ele;
    printf("\nEnter element:");
    scanf("%d",&ele);
    n->data=ele;
    if(head==NULL)
    {
        n->next=n;
        head=n;
    }
    else  if(ele<head->data)
      {
     
            while(c->next!=head)
            {
             p=c;
             c=c->next;
            }
           n->next=head;
           c->next=n;
           head=n;
      }
    else 
    {
      do
      {
        p=c;
        c=c->next;
      } while (c!=head && c->data<ele);
      p->next=n;
      n->next=c;
    }
    return head;
}
struct node *rem(struct node *head)
{
  struct node *p,*c;
  p=head;
  c=head;
  int ele;
  printf("Enter to remove element:");
  scanf("%d",&ele);
  c=c->next;
  while(c->data<ele)
  {
    p=c;
    c=c->next;
  }
  if(c->data==ele)
  {
    p->next=c->next;
    free(c);
  }
  else
  {
    while(c!=head)
    {
      p=c;
      c=c->next;
    }
    head=c->next;
    p->next=c->next;
    free(c);

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
    case 2:head=rem(head);
    display(head);
         break;
    case 3:break;
    default:printf("enter valid choice:");
          break;
  }
  }while(c!=3);
}