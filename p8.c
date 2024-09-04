#include <stdio.h>
#define max 5
void insert(int q[], int *r, int *f)
{
  if (*r == max - 1 && *f == 0 || *r == *f - 1)
  {
    printf("Queue is full...");
  }
  else
  {
    int ele;
    printf("Enter new value:\n");
    scanf("%d", &ele);
    if (*r == -1 && *f == -1)
    {
      *r += 1;
      q[*r] = ele;
      if (*r == 0)
      {
        *f = 0;
      }
    }
    else
    {
      if (*r == max - 1 && *f != 0)
      {
        *r = 0;
        q[*r] = ele;
      }
      else
      {
        *r += 1;
        q[*r] = ele;
      }
    }
  }
}

void delete(int q[],int *r,int *f)
{
if (*f == -1)
  {
    printf("Queue is empty");
  }
  else
  {
    printf("remove element:%d \n", q[*f]);
    q[*f] = 0;
    if (*r == *f)
    {
      *f = -1, *r = -1;
    }
    else if (*f == max - 1 && *r < *f)
    {
      *f = 0;
    }
    else
    {
      *f += 1;
    }
  }
}
int simple_Search(int arr[], int ele)
{
  int i, j = -1;
  for (i = 0; i <= max-1; i++)
  {
    if (arr[i] == ele)
    {
      j = i;
      break;
    }
  }
  if (i == max)
  {
    j = -1;
  }
  return j;
}
void modify(int arr[])
{
  int ind, ne, pe;
  printf("\nEnter previus element ");
  scanf("%d", &pe);
  printf("enter new element\n");
  scanf("%d", &ne);
  ind = simple_Search(arr, pe);
  if (ind != -1)
  {
    arr[ind] = ne;
  }
  else
  {
    printf("\nElement is not present in array");
  }
}

void dis(int q[])
{
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("%d ", q[i]);
  }
}
void main()
{
  int q[max], r1 = -1, f1 = -1;
  int *r = &r1, *f = &f1, c, a;
  for (a = 0; a < max; a++)
  {
    q[a] = 0;
  }
  do
  {
    printf("\n1.insert");
    printf("\n2.remove");
    printf("\n3.modify");
    printf("\n4.exit ");
    printf("\nEnter choice:");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
      insert(q, r, f);
      dis(q);
      break;

    case 2:
      delete(q, r, f);
      dis(q);
      break;

    case 3:
      modify(q);
      dis(q);
      break;

    case 4:
      break;
    }
  } while (c != 4);
}