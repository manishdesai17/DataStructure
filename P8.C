#include<stdio.h>
void push(int queue[],int *r,int *f)
{
int ele;
  if(*r==4)
  {
   printf("\nstack is overflow");
  }
  else
  {
   printf("Enter element:");
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
 printf("stack is underflow");
 }
 else
 {
  printf("\nremove element %d:\n",queue[*f]);
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
void push1(int queue[],int *r,int *f)
{
int ele;
  if(*r==4)
  {
   printf("\nstack is overflow");
  }
  else
  {
   printf("Enter element:");
   scanf("%d",&ele);
   *r+=1;
   queue[*r]=ele;
   if(*r==0)
   {
    *f=0;
   }
  }
}
void pop1(int queue[],int *f,int *r)
{
 if(*f==-1)
 {
 printf("stack is underflow");
 }
 else
 {
  printf("\nremove element %d:\n",queue[*f]);
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
   printf("\nEnter previus element ");
   scanf("%d",&pe);
    printf("enter new element stack1\n");
   scanf("%d",&ne);
   ind=simple_Search(arr,f,r,pe);
   if(ind!=-1)
   {
     arr[ind]=ne;
   }
   else
   {
     printf("\nElement is not present in array");
   }

}

void modify1(int arr[],int f,int r)
{
  int ind,ne,pe;
   printf("\nEnter previus element ");
   scanf("%d",&pe);
    printf("enter new element  stack2\n");
   scanf("%d",&ne);
   ind=simple_Search(arr,f,r,pe);
   if(ind!=-1)
   {
     arr[ind]=ne;
   }
   else
   {
     printf("\nElement is not present in array");
   }

}


void display(int stack[],int *r,int *f)
{
int i;
if(*r==-1)
{
 printf("\n queue is empty");
}
else
{
 for(i=*f;i<=*r;i++)
 {
  printf("%d  ",stack[i]);
 }
 }
}
void display1(int stack[],int *r,int *f)
{
int i;
if(*r==-1)
{
printf("queue is empty");
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
 int r2=-1,f2=-1,r3=-1,f3=-1;
 int queue[5],queue1[5],*r=&r2,*f=&f2,*r1=&r3,*f1=&f3,c;
 clrscr();
 do
 {
  printf("\n1.insert in queue1");
  printf("\n2.insert in queue2");
  printf("\n3.pop queue1");
  printf("\n4.pop queue2");
  printf("\n5.modify queue1");
   printf("\n6.modify queue2");
  printf("\n7.Display queue1");
  printf("\n8.Display queue2");
  printf("\n9.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
   case 1:push(queue,r,f);
	     break;
   case 2:push(queue1,r1,f1);
	     break;
   case 3:pop(queue,f,r);
	     break;
   case 4:pop(queue1,f1,r1);
	     break;
   case 5:modify(queue,*f,*r);
	     break;
    case 6:modify1(queue1,*f1,*r1);
	     break;
   case 7:display(queue,r,f);
	 break;
   case 8:display(queue1,r1,f1);
	 break;
   case 9:break;
   default:printf("enter valid choice");
  }
 }
 while(c!=9);
 getch();
}