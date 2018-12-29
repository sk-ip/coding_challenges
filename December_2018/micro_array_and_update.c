#include <stdio.h>

long long int findSmallest(long long int,long long int[]);
int main()
{
    int i,t,j;
    long long int n,k,smallest_number;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld", &n, &k);
        long long int j,arr[n];
        for(j=0;j<n;j++)
        scanf("%lld", &arr[j]);
        smallest_number=findSmallest(n,arr);
        if(smallest_number>=k)
        printf("\n%d",0);
        else
        printf("\n%lld", k-smallest_number);
    }
    return 0;
}

long long int findSmallest(long long int len,long long int arr[])
{
    long long int i,small_num=arr[0];
    for(i=1;i<len;i++)
    {
        if(arr[i]<small_num)
        small_num=arr[i];
    }
    return small_num;
}