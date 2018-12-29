#include <stdio.h>

int main()
{
    long int i,n;
    scanf("%ld",&n);
    long int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<n;i++)
    scanf("%ld",&b[i]);
    for(i=0;i<n;i++)
    c[i]=a[i]+b[i];
    for(i=0;i<n;i++)
    printf("%ld ",c[i]);
    return 0;
}