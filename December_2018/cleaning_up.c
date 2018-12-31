#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int i,j,k,t,n,m;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        int size=n;
        int arr[m],arr2[n],temp;
        for(i=0;i<m;i++)
        {
            scanf("%d", &arr[i]);
        }
        // sorting the jobs already done
        for(i=0;i<m;i++)
        {
            for(j=0;j<m-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            arr2[i]=i+1;
        }
        // brain of the program
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr2[j])
                {
                    if(j<n)
                    {
                        n=n-1;
                        for(k=j;k<n;k++)
                        arr2[k]=arr2[k+1];
                    }
                }
            }
        }
        int jobs;
        if((size-m)%2==1)
        jobs=((size-m)/2)+1;
        else
        jobs=(size-m)/2;
        
        int chef[jobs],assistant[jobs];
        int index=0;
        for(i=0;i<n;i+=2)
        {
            chef[index]=arr2[i];
            assistant[index]=arr2[i+1];
            ++index;
        }
        if(n%2==1)
        {
            for(i=0;i<jobs;i++)
            printf("%d ",chef[i]);
            printf("\n");
            for(i=0;i<jobs-1;i++)
            printf("%d ",assistant[i]);
        }
        else if(n%2==0)
        {
            for(i=0;i<jobs;i++)
            printf("%d ",chef[i]);
            printf("\n");
            for(i=0;i<jobs;i++)
            printf("%d ",assistant[i]);
        }
    }
    return 0;
}