#include <stdio.h>
 
void mergeSort(int [], int, int, int);
void partition(int [],int, int);
 
void main()
{
    int list[50];
    int i, n;
 
    printf("Enter total number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
         scanf("%d", &list[i]);
    }
    partition(list, 0, n - 1);
    printf("After merge sort:\n");
    for(i = 0;i < n; i++)
    {
         printf("%d   ",list[i]);
    }
 
   
}
 
void partition(int list[],int first,int end)
{
    int mid;
 
    if(first < end)
    {
        mid = (first + end) / 2;
        partition(list, first, mid);
        partition(list, mid + 1, end);
        mergeSort(list, first, mid, end);
    }
}
 
void mergeSort(int list[],int first,int mid,int end)
{
    int i, mi, k, lo, temp[50];
 
    lo = first;
    i = first;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= end))
    {
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= end; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }
 
    for (k = first; k <= end; k++)
    {
        list[k] = temp[k];
    }
}
