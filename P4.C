#include<stdio.h>
 int pre(char c)
 {
   if(c=='*'|| c=='/')
   {
    return 2;
   }
   else if(c=='+'||c=='-')
   {
    return 1;
   }
   return 0;
 }
 int pop(char stack[],int top)
 {
   if(stack[top]=='(' || stack[top]==')')
   {
   top--;
   }
   else
   {
    printf("%c",stack[top]);
    top--;
    }
    return top;
 }
int push(char ch,char stack[],int top)
 {
    top++;
    stack[top]=ch;
    return top;
 }
int infix_prefix(char infix[],char stack[],int top)
 {
   int i=0;
   while(infix[i]!=';')
   {
     if(infix[i]=='+'|| infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/')
     {
      	if(top==-1)
	    {
	      top= push(infix[i],stack,top);
	    }
	else
	{
	  if(pre(infix[i])<=pre(stack[top]))
	  {
	  while(pre(infix[i])<=pre(stack[top]))
	  {
	   top= pop(stack,top);
	  }
	    top= push(infix[i],stack,top);
	  }
	  else
	  {
	  top=push(infix[i],stack,top);
	  }
	}
     }
     else
     {
      if(infix[i]>='a'&& infix[i]<='z')
     {
       printf("%c",infix[i]);
     }
     }
     i++;
   }
  while(top!=-1)
  {
  top= pop(stack,top);
  }
  return top;
}
void main()
{
 char s[20];
 char stack[20];
 int top=-1;
 clrscr();
 printf("\nEnter the Expression:");
 scanf("%s",s);
 infix_prefix(s,stack,top);
 getch();
}