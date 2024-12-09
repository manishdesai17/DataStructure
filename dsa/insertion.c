#include <stdio.h>
void bubble(int arr[])
{
    int i, j, x, key;
    for (i = 1; i < 6; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (x = 0; x < 6; x++)
    {
        printf("%d ", arr[x]);
    }
}
void main()
{
    int arr[] = {20, 10, 33, 55, 8, 2};
    bubble(arr);
}