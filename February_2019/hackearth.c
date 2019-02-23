#include <stdio.h>

int main()
{
        int n,m,i;
        int profit,boxno,total=0;
        scanf("%d %d", &n, &m);
        int a[m];
        for(i=1;i<=m;i++)
        {
                a[i] = -1;
        }
        for(i=0;i<n;i++)
        {
                scanf("%d %d",&profit, &boxno);
                if(a[boxno]==-1)
                {
                        total += profit;
                        a[boxno] = profit;
                }
                else
                {
                        if(profit > a[boxno])
                        {
                                total -= a[boxno];
                                total += profit;
                                a[boxno] = profit;
                        }
                }
        }
        printf("\n%d", total);
        return 0;
}