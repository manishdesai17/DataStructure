#include<stdio.h>
struct node
{
  int data;
  struct node *next;
};
struct node* insert(struct node *head)
{
  struct node *n,*c,*p;
  int ele;
  n=(struct node *)malloc(sizeof(struct node));
  printf("Enter element:");
  scanf("%d",&ele);
  c=head;
  p=NULL;
  n->data=ele;

  if(head==NULL)
  {
   n->next=NULL;
   head=n;
  }
  else
  {
  while(c!=NULL && c->data<ele)
  {
  p=c;
  c=c->next;
  }
  if(head==c)
  {
   n->next=c;
   head=n;
  }
  else
  {
   p->next=n;
   n->next=c;
  }
  }
  return head;
 }
  void dis(struct node *head)
  {
   int i;
   struct node *temp=head;
   while(temp!=NULL)
   {
    printf(" %d ",temp->data);
    temp=temp->next;
   }
  }
//struct node* remove(struct node *head,int ele)
//{
 // struct temp=head;
 // while(temp->data)
//}
void main()
{
  int c;
  struct node *head=NULL;
  clrscr();
  do
  {
  printf("\n1.push");
  printf("\n2.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
  case 1:
  head=insert(head);
  dis(head);
  break;
  case 2:break;
  }
  }
  while(c!=2);
  getch();
}