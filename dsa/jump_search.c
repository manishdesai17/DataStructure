// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int jump(int arr[],int s,int size)
{
 int prev=-1,curt=0,i;
 int jump=sqrt(size);
 while(arr[curt]<s && curt<size)
 {
     prev=curt;
     curt=curt+jump;
 }
 if(arr[curt]==s)
 {
     return curt;
 }
 else
 {
     if(prev!=-1)
     {
     for(i=prev;i<curt;i++)
     {
         if(arr[i]==s)
         {
             return i;
         }
     }
     }
 }
 return -1;
}
void main()
{
 int arr[]={10,20,30,40,50,60,70};
 int s=40,r;
 int size=sizeof(arr)/sizeof(arr[0]);
 r=jump(arr,s,size);
 if(r==-1)
 {
  printf("Element not found");
 }
 else
 {
  printf("Element find index:%d",r);
 }
}
