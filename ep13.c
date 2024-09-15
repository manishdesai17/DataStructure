#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre, *next;
    int data;
};
struct node *insert(struct node *head, int ele)
{
    struct node *curr = head, *n = (struct node *)malloc(sizeof(struct node));
    n->data = ele;
    if (head == NULL)
    {
        n->next = n;
        n->pre = n;
        head = n;
    }
    else
    {
        do
        {
            curr = curr->next;
        } while (curr!= head && curr->data < ele);
        if (head->data > ele)
            curr = head;
        (curr->pre)->next = n;
        n->next = curr;
        n->pre = (curr->pre);
        curr->pre=n;
        if (head->data > ele)
            head = n;
    }
    return head;
}
struct node* delete(struct node *head,int ele)
{
    struct node *curr=head;
    do
    {
        if(curr->data==ele)
          break;
        curr=curr->next;
    } while (curr!=head && curr->data!=ele);
    if(curr==head && curr->data!=ele)
    {
      printf("\nElement is not present");return head;
    }
    else if(head->next==head)
        head=NULL;
    else
    {
    (curr->pre)->next=curr->next;
    (curr->next)->pre=curr->pre;
    if(head->data==ele)
      head=curr->next;
    }
    free(curr);
 return head;
}
void display(struct node *head)
{
  struct node *curr=head;
  printf("\n");
  do{
    printf(" %d ",curr->data);
    curr=curr->next;
  }while(curr!=head);
}
void main()
{
    struct node *head=NULL;
    int choice,ele;
    while(1)
    {
    printf("\n1.insert");
    printf("\n2.delete");
    printf("\n3.exit");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter new Element : ");
        scanf("%d",&ele);
        head=insert(head,ele);
        display(head);
        break;
    case 2:
        if(head!=NULL)
        {
        printf("\nEnter element you want to delete");
        scanf("%d",&ele);
        head=delete(head,ele);
        if(head!=NULL)
           display(head);
        }
        else
        {
            printf("\nlist is empty");
        }
        break;
    case 3:exit(0);
    default:printf("\nplease,enter valid choice");
        break;
    }
    }
}