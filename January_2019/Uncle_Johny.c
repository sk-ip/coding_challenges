#include<stdio.h>

int findIndex(int [], int, int);

int main()
{
        int t,n,i;
        scanf("%d", &t);
        while(t--)
        {
                int index,k,temp;
                scanf("%d", &n);
                int arr[n];
                for(i=1;i<=n;i++)
                {
                        scanf("%d", &arr[i]);
                }
                scanf("%d", &k);
                temp=arr[1];
                arr[1]=arr[k];
                arr[k]=temp;
                index=findIndex(arr,1,n);
                printf("%d\n",index);
        }
        return 0;
}

int findIndex(int arr[], int beg, int end)
{
        int left,right,pivot,flag,t;
        left=beg;
        pivot=beg;
        right=end;
        flag=0;
        while(flag!=1)
        {
                while(arr[left]<arr[right])
                {
                        right--;
                }
                if(pivot==right)
                flag=1;
                else if(arr[pivot]>arr[right])
                {
                        t=arr[pivot];
                        arr[pivot]=arr[right];
                        arr[right]=t;
                        pivot=right;
                }
                if(flag!=1)
                {
                        while(arr[pivot]>arr[left])
                        {
                                left++;
                        }
                        if(pivot==left)
                        flag=1;
                        else if(arr[pivot]<arr[left])
                        {
                                t=arr[pivot];
                                arr[pivot]=arr[left];
                                arr[left]=t;
                                pivot=left;
                        }
                }
        }
        return pivot;
}