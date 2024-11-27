#include<stdio.h>
int m[6][6];
void createGraph()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            m[i][j]=0;
        }
    }
}
void addadges(int v,int e)
{
    m[v][e]=1;
}
void showmatrix()
{
    int i,j;
     for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    createGraph();
    int i;
    addadges(0,1);
    addadges(0,2);
    addadges(0,3);
    addadges(2,4);
    addadges(3,5);
    showmatrix();
    
    return 0;
}