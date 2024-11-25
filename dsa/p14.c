#include<stdio.h>
#include<stdlib.h>

struct tree 
{
    int data;
    struct tree *l,*r;
};
struct tree *insert(struct tree *root)
{
    struct tree *c,*new,*pre;
    new=(struct tree *)malloc(sizeof(struct tree));
    int ele;
    c=root;
    printf("Enter element:");
    scanf("%d",&ele);
    new->data=ele;
    new->l=NULL;
    new->r=NULL;
    if(root==NULL)
    {
      root=new;
    }
    else
    {
        while(c!=NULL)
        {
          pre=c;
          c=c->data>ele?c->l:c->r;
        }
        if(pre->data>ele)
          pre->l=new;
        else
          pre->r=new; 
    }
    return root;
}
void inorder(struct tree *root)
{
  if(root!=NULL)
  {
    inorder(root->l);
    printf("%d ",root->data);
    inorder(root->r);
  }
}
void preorder(struct tree *root)
{
  if(root!=NULL)
  {
    inorder(root->r);
    printf("%d ",root->data);
    inorder(root->l);
  }
}
void postorder(struct tree *root)
{
  if(root!=NULL)
  {
    inorder(root->l);
    printf("%d ",root->data);
    inorder(root->r);
  }
}
void main()
{
  struct tree *root=NULL; 
  int c;
  do{
  printf("\n1.insert");
  printf("\n2.Inorder traverse");
  printf("\n3.preorder traverse");
  printf("\n4.postorder traverse");
  printf("\n5.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
    case 1:root=insert(root);
         inorder(root);
         break;
    case 2:inorder(root);
         break;
    case 5:break;
    default:printf("enter valid choice:");
          break;
  }
  }while(c!=3);
}