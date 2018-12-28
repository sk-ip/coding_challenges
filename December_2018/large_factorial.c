#include <stdio.h>
#define MAX 500

int arr[MAX];
void factorial(int);

int main()
{
	int j,t;
	scanf("%d",&t);
	int n[t];
	for(j=0;j<t;j++)
	{
	    scanf("%d", &n[j]);
	}
	for(j=0;j<t;j++)
	factorial(n[j]);
	return 0;
}

void factorial(int num)
{
	int len,temp=num,i=-1,k,val=0;
	while(temp!=0)
	{
		arr[++i]=temp%10;
		temp=temp/10;
	}
	len=i;
	temp=num-1;
	while(temp!=0)
	{
	    k=-1;val=0;
	    while(len!=-1)
	    {
	        val=arr[++k]*temp+val;
	        arr[k]=val%10;
	        val=val/10;
	        --len;
	    }
	    while(val!=0)
	    {
	        arr[++k]=val%10;
	        val=val/10;
	    }
	    temp=temp-1;
	    len=k;
	}
	printf("\n");
	for(i=len;i>=0;i--)
	{
	    printf("%d",arr[i]);
	}
}


#include <stdio.h>
#define MAX 500

int arr[MAX];
void factorial(int);

int main()
{
	int j,t;
	scanf("%d",&t);
	int n[t];
	for(j=0;j<t;j++)
	{
	    scanf("%d", &n[j]);
	}
	for(j=0;j<t;j++)
	factorial(n[j]);
	return 0;
}

void factorial(int num)
{
	int len,temp=num,i=-1,k,val=0;
	while(temp!=0)
	{
		arr[++i]=temp%10;
		temp=temp/10;
	}
	len=i;
	temp=num-1;
	while(temp!=0)
	{
	    k=-1;val=0;
	    while(len!=-1)
	    {
	        val=arr[++k]*temp+val;
	        arr[k]=val%10;
	        val=val/10;
	        --len;
	    }
	    while(val!=0)
	    {
	        arr[++k]=val%10;
	        val=val/10;
	    }
	    temp=temp-1;
	    len=k;
	}
	printf("\n");
	for(i=len;i>=0;i--)
	{
	    printf("%d",arr[i]);
	}
}