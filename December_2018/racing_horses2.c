#include<stdio.h>
int main()
{
    int i,j,k,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        int arr[n],temp,first,second,min;
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-j-1;k++)
            {
                if(arr[k]>arr[k+1])
                {
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }
            }
        }
        min=arr[1]-arr[0];
        for(k=1;k<n-1;k++)
        {
            if(arr[k+1]-arr[k]<min)
            min=arr[k+1]-arr[k];
        }
        printf("\n%d",min);
    }
    return 0;
}