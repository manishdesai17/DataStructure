#include<stdio.h>
void bubble(int arr[])
{
    int i,j,x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(x=0;x<5;x++)
    {
        printf("%d ",arr[x]);
    }
}
void main()
{
    int arr[]={20,10,33,55,8,2};
    bubble(arr);
}