void jump(int arr[],int ele)
{
 int low=0,jump=3,n=7;
 int high=jump;
 while(low<high && high<=n)
 {
  if(arr[high]<ele)
  {
   low=high;
   high=high+jump;
  }
 }
}
void main()
{
 int a[]={10,20,30,40,50,60,70};
 int ele=20;
 clrscr();
 jump(a,ele);
 getch();

}
