#include<stdio.h>
int  push(int stack[],int top)
{
int ele;
  if(top==4)
  {
   printf("\nstack is overflow");
  }
  else
  {
   printf("Enter element:");
   scanf("%d",&ele);
   top+=1;
   stack[top]=ele;
  }
  return top;
}
int  pop(int stack[],int top)
{
 if(top==-1)
 {
 printf("stack is underflow");
 }
 else
 {
  printf("\nremove element %d:\n",stack[top]);
  top--;
 }
 return top;
}


int peep(int stack[],int top)
{
  if(top==-1)
    return top;
  else
   return stack[top];
}

void modify(int arr[],int t)
{
  int ind,ne,pe;
   printf("\nEnter Previous element"); 
   scanf("%d",&pe);
   printf("\nelement new element\n");
   scanf("%d",&ne);
   ind=simple_Search(arr,t,pe);
   if(ind!=-1)
     arr[ind]=ne;
   else
     printf("\nElement is not present in array");
}

int simple_Search(int arr[],int t,int ele)
{
 int i,j=-1;
   for(i=0;i<=t;i++)
   {
    if(arr[i]==ele)
      { j=i;
	break;
      }
   }
   if(i==t+1)
      j=-1;
 return j;
}
void display(int stack[],int top)
{
int i;
 for(i=0;i<=top;i++)
 {
  printf(" %d  ",stack[i]);
 }
}
void main()
{
 int stack[5],top=-1,c,ele;
 clrscr();
 do
 {
  printf("\nStack operation");
  printf("\n1.Push");
  printf("\n2.Pop");
  printf("\n3.Peep");
  printf("\n4.Modify");
  printf("\n5.Display");
  printf("\n6.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
   case 1:top=push(stack,top);
	   break;
   case 2:top=pop(stack,top);
	   break;
  case 3:ele=peep(stack,top);
	     if(ele!=-1)
	     {
		   printf("\nTop Of Element is %d",ele);
	     }
	     else
	     {
		   printf("\nStack is Empty");
	     }
	    break;

  case 4:modify(stack,top);
	    break;

  case 5:display(stack,top);
	break;

  case 6:break;
   default:printf("\nPlease,enter valid choice");
  }
 }while(c!=6);
 getch();
}