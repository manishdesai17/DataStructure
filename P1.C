#include<stdio.h>
#define max 5
int insert(int arr[],int t)
{
 int ele;
 if(t==max-1)
   printf("\nArray is Full");
 else
 {
  t++;
  printf("\nEnter New Element");
  scanf("%d",&ele);
  arr[t]=ele;
 }
 return t;
}

int del(int arr[],int t)
{
 int ele,ind,i;
   printf("\nEnter element you want to remove");
   scanf("%d",&ele);
   ind=simple_Search(arr,t,ele);
   if(ind!=-1)
   {
    printf("\nRemove Element is %d",ele);
    for(i=ind;i<t;i++)
    {
     arr[i]=arr[i+1];
    }
    t--;
   }
   else
    printf("\nElement is not present in array");
  return t;
}

void modify(int arr[],int t)
{
  int ind,ne,pe;
   printf("\nEnter Previous  element");
   scanf("%d",&pe);
   printf("enter new element");
   scanf("%d",&ne);
   ind=simple_Search(arr,t,pe);
   if(ind!=-1)
     arr[ind]=ne;
   else
     printf("\nElement is not present in array");

}

void sort(int arr[],int t)
{
int i,j,c,temp;
 for(i=0;i<t;i++)
 {
  for(j=i+1;j<=t;j++)
  {
   if(arr[i]>arr[j])
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
 for(c=0;c<=t;c++)
 {
  printf("%d  ",arr[c]);
 }
}

int simple_Search(int arr[],int t,int ele)
{
 int i,j=-1;
   for(i=0;i<=t;i++)
   {
    if(arr[i]==ele)
      {
          j=i;
	      break;
      }
   }
   if(i==t+1)
      j=-1;
 return j;
}

int isEmpty(int t)
{
 if(t==-1)
 {
  printf("\nArray is empty");
  return 1;
 }
 else
  return 0;
}
void binary_Search(int arr[],int t,int ele)
{
  int mid,low=0,high=t;
  sort(arr,t);
  while(low<=high)
  {
   mid=(low+high)/2;
   if(arr[mid]>ele)
    high=mid-1;
   else if(arr[mid]<ele)
    low=mid+1;
   else
   {
    printf("\n%d Element is Found",ele);
    break;
   }
  }
  if(low>high)
  {
   printf("\n%d Element is Not Found",ele);
  }
}

void display(int arr[],int t)
{
  int i;
  printf("\nELEMENTS : ");
  for(i=0;i<=t;i++)
  {
   printf("%d  ",arr[i]);
  }
}
void main()
{
int arr[max],t=-1,c,ele;
clrscr();
 do
 {
  printf("\n1.INSERT");
  printf("\n2.DELETE");
  printf("\n3.MODIFY");
  printf("\n4.SORT");
  printf("\n5.SIMPLE SEARCH");
  printf("\n6.BINARY SEARCH");
  printf("\n7.Exit");
  printf("\nEnter Your choice");
  scanf("%d",&c);
  switch(c)
  {
   case 1:t=insert(arr,t);
	  display(arr,t);
	  break;
   case 2:if(!isEmpty(t))
   {
	  t=del(arr,t);
	  display(arr,t);
	  break;
   }
  case 3:modify(arr,t);
	  display(arr,t);
	  break;
   case 4:sort(arr,t);
	  display(arr,t);
	  break;
   case 5:printf("\nEnter Search Element");
	  scanf("%d",&ele);
	  if(simple_Search(arr,t,ele)!=-1)
	  {
	    printf("\n%d Element is Found",ele);
	  }
	  else
	  {
	    printf("\n%d Element is not Found",ele);
	  }
	  break;
   case 6:printf("\nEnter Search Element");
	  scanf("%d",&ele);
	  binary_Search(arr,t,ele);
	  break;
   case 7:break;
  default:printf("\nPlease,enter valid choice");
  }
 }while(c!=7);
 getch();
}