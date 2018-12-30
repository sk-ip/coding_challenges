#include<stdio.h>
void merge_sort(int *arr,int low,int high)
{
    int mid;
    mid=(low+high)/2;

    if(low<high)
    {
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}

void merge(int *arr,int l,int m,int h)
{
    int temp[10000],i=l,j=m+1,k=l;
    while(i<=m&&j<=h)
    {
       if(arr[i]<arr[j])
       {
          temp[k]=arr[i];
          i++;
       }
       else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    ;
    while(i<=m)
    {
        temp[k++]=arr[i++];
    }
    while(j<=h)
    {
        temp[k++]=arr[j++];
    }
    //printf("%d %d\n",l,h);
    for(i=l;i<k;i++)
    {
      //  printf("%d ",temp[i]);
        arr[i]=temp[i];
    }
    //scanf("%*d");
}
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
        merge_sort(arr,0,n-1);
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