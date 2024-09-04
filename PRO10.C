void insert(int q[],int *r,int *f,char ch[],int ele)
{
 if(*r==4)
 {
  printf("\n%s queue is full",ch);
 }
 else
 {
  *r+=1;
  q[*r]=ele;
  if(*r==0)
  {
  *f=0;
  }
 }
}
void dis(int cq[],int rq[],int *cr,int *cf,int *rr,int *rf)
{
  int i,j;
  printf("\nCitizen\n");
  for(i=*cf;i<=*cr && i!=-1;i++)
  {
   printf(" %d ",cq[i]);
  }
  printf("\n\nRegular\n");
  for(j=*rf;j<=*rr&&j!=-1;j++)
  {
   printf(" %d ",rq[j]);
  }
}
void remove(int *r,int *f)
{
 if(*r==*f)
 {
 *f=-1;
 *r=-1;
 }
 else
 {
   *f+=1;
 }
}
void main()
{
 int cq[5],rq[5];
 int f1=-1,r1=-1,f2=-1,r2=-1;
 int *cr=&r1,*cf=&f1,*rr=&r2,*rf=&f2,c,temp;
 clrscr();
 do
 {
   printf("\n1.insert ");
   printf("\n2.remove");
   printf("\n3.exit ");
   printf("\n enter choice:");
   scanf("%d",&c);
   switch(c)
   {
     case 1:if(*cr==4&& *rr==4)
     {
       printf("\nBoth queue is full..");
     }
     else
     {
       printf("\nEnter new age:");
       scanf("%d",&temp);
       if(temp>60)
	{
	insert(cq,cr,cf,"Citizen",temp);
	dis(cq,rq,cr,cf,rr,rf);
	}
       else
       {
       if(temp<60)
       {
       insert(rq,rr,rf,"Regular",temp);
       dis(cq,rq,cr,cf,rr,rf);
       }
       }
     }
     break;

   case 2:if(*cf==-1&&*rf==-1)
   {
    printf("both queue is empty");
   }
   else
   {
    if(*cf!=-1)
    {
      remove(cr,cf);
      dis(cq,rq,cr,cf,rr,rf);
    }
    else
    {
     remove(rr,rf);
     dis(cq,rq,cr,cf,rr,rf);
    }
    }
    break;
    case 3:break;
     }
     }
     while(c!=3);
 getch();
}