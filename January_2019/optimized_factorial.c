#include<stdio.h>
#define MAX 10^18

int findTrailingZeros(int);
int arr[MAX];

int main()
{
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        int count;
        scanf("%d", &n);
        count=findTrailingZeros(n);
        printf("%d\n",count);
    }
    return 0;
}

int findTrailingZeros(int n) 
{ 
    // Initialize result 
    int count = 0,i; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count; 
}