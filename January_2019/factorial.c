#include<stdio.h>
#define MAX 10^18

int findFactorial(int);
int arr[MAX];

int main()
{
    int t,n,i,length;
    scanf("%d", &t);
    while(t--)
    {
        int count=0;
        scanf("%d", &n);
        length=findFactorial(n);
        for(i=0;i<length;i++)
        {
            if(arr[i]==0)
            ++count;
            else
            break;
        }
        printf("%d\n",count);
    }
    return 0;
}

int findFactorial(int n)
{
    int len,num=n,k=-1,val;
    while(num!=0)
    {
        arr[++k]=num%10;
        num=num/10;
    }
    len=k;
    num=n-1;
    while(num!=1)
    {
        val=0,k=-1;
        while(len!=-1)
        {
            val=arr[++k]*num+val;
            arr[k]=val%10;
            val=val/10;
            --len;
        }
        while(val!=0)
        {
            arr[++k]=val%10;
            val=val/10;
        }
        len=k;
        num=num-1;
    }
    return len;
} 