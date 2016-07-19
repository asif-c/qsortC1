#include <stdio.h>
#include <stdlib.h>

int arr[]={56,90,45,1234,12,3,7,18};

int compare_s2b(const void *a,const void *b);

int compare_b2s(const void *a,const void *b);

int compare_s2b(const void* a, const void* b)
{
    const int* p=(const int*)a;
    const int* q=(const int*)b;

    return *p-*q;
}

int compare_b2s(const void* a, const void* b)
{
    const int* p=(const int*)a;
    const int* q=(const int*)b;

    return *q-*p;
}

int main()
{
    printf("Before sorting\n\n");

    int N=sizeof(arr)/sizeof(int);

    for(int i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");

    qsort(arr,N,sizeof(int),compare_s2b);

    printf("\nSorted small to big\n\n");

    for(int j=0;j<N;j++)
    {
        printf("%d\t",arr[j]);
    }

    qsort(arr,N,sizeof(int),compare_b2s);

    printf("\nSorted big to small\n\n");

    for(int j=0;j<N;j++)
    {
        printf("%d\t",arr[j]);
    }

    exit(0);
}
