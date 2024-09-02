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


int  push2(int stack[],int top)
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
int  pop2(int stack[],int top)
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


int peep2(int stack[],int top)
{
  if(top==-1)
    return top;
  else
   return stack[top];
}

void modify2(int arr[],int t)
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

void display2(int stack[],int top)
{
int i;
 for(i=0;i<=top;i++)
 {
  printf(" %d  ",stack[i]);
 }
}
void main()
{
 int stack[5],stack2[5],top2=-1,top=-1,c,ele,ele1;
 clrscr();
 do
 {
  printf("\nStack operation");
  printf("\n1.Push stack1");
  printf("\n2.Push stack2");

  printf("\n3.Pop stack1");
  printf("\n4.Pop stack2");

  printf("\n5.Peep stack1");
   printf("\n6.Peep stack2");

  printf("\n7.Modify stack1");
  printf("\n8.Modify stack2");

  printf("\n9.Display stack1");
  printf("\n10.Display stack2");

  printf("\n11.exit");
  printf("\nEnter choice:");
  scanf("%d",&c);
  switch(c)
  {
   case 1:top=push(stack,top);
	   break;
   case 2:top2=push2(stack2,top2);
	   break;

   case 3:top=pop(stack,top);
	   break;
   case 4:top2=pop2(stack2,top2);
	   break;
  case 5:ele=peep(stack,top);
	     if(ele!=-1)
	     {
		   printf("\nTop Of Element is %d",ele);
	     }
	     else
	     {
		   printf("\nStack is Empty");
	     }
	    break;
  case 6:ele1=peep2(stack2,top2);
	     if(ele1!=-1)
	     {
		   printf("\nTop Of Element is %d",ele1);
	     }
	     else
	     {
		   printf("\nStack is Empty");
	     }
	    break;

  case 7:modify(stack,top);
	    break;
  case 8:modify2(stack2,top2);
	    break;

  case 9:display(stack,top);
	break;
   case 10:display2(stack2,top2);
	break;

  case 11:break;
   default:printf("\nPlease,enter valid choice");
  }
 }while(c!=11);
 getch();
}