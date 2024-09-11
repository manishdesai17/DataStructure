#include<stdio.h>
void push(int queue[],int *r,int *f)
{
int ele;
  if(*r==4)
  {
   printf("\nprocess queue is overflow");
  }
  else
  {
   printf("Enter process:");
   scanf("%d",&ele);
   *r+=1;
   queue[*r]=ele;
   if(*r==0)
   {
    *f=0;
   }
  }
}
void pop(int queue[],int *f,int *r)
{
 if(*f==-1)
 {
 printf("process queue is underflow");
 }
 else
 {
  printf("\nremove process %d:\n",queue[*f]);
  if(*f==*r)
  {
  *f=-1;
  *r=-1;
  }
  else
  {
  *f+=1;
  }
 }
}

int simple_Search(int arr[],int f,int r,int ele)
{
 int i,j=-1;
   for(i=f;i<=r;i++)
   {
    if(arr[i]==ele)
      {
	  j=i;
	      break;
      }
   }
   if(i==r+1)
   {
      j=-1;
   }
 return j;
}
void modify(int arr[],int f,int r)
{
  int ind,ne,pe;
   printf("\nEnter previus process ");
   scanf("%d",&pe);
    printf("enter new perocess\n");
   scanf("%d",&ne);
   ind=simple_Search(arr,f,r,pe);
   if(ind!=-1)
   {
     arr[ind]=ne;
   }
   else
   {
     printf("\nElement is not present in process queue array");
   }

}


void display(int stack[],int *r,int *f)
{
int i;
if(*r==-1)
{
 printf("\nprocess queue is empty");
}
else
{
 for(i=*f;i<=*r;i++)
 {
  printf("%d  ",stack[i]);
 }
 }
}
void main()
{
 int r1=-1,f1=-1;
 int queue[5],*r=&r1,*f=&f1,c;
 clrscr();
 do
 {
  printf("\n1.push in process queue");
  printf("\n2.pop in process queue");
  printf("\n3.modify in process queue");
  printf("\n4.Display  process queue");
  printf("\n5.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
   case 1:push(queue,r,f);
	     break;
   case 2:pop(queue,f,r);
	     break;
   case 3:modify(queue,*f,*r);
	     break;
   case 4:display(queue,r,f);
	 break;
   case 5:break;
   default:printf("enter valid choice");
  }
 }
 while(c!=5);
 getch();
}