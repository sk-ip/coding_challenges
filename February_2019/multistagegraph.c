#include <stdio.h>

int main()
{
        int n=7,i,k;
        int stages=4;
        int min;
        int graph[8][8] = {{0,7,8,6,0,0,0,0},
                        {0,0,0,0,5,2,0,0},
                        {0,0,0,0,0,4,0,0},
                        {0,0,0,0,2,0,1,0},
                        {0,0,0,0,0,0,0,9},
                        {0,0,0,0,0,0,0,10},
                        {0,0,0,0,0,0,0,11},
                        {0,0,0,0,0,0,0,0}};
        int cost[n],d[n],path[stages];
        cost[n] = 0;
        d[n] = n;
        for(i=n-1;i>=0;i--)
        {
                min = 100;
                for(k=i+1;k<=n;k++)
                {
                        if (graph[i][k]!=0 && graph[i][k]+cost[k]<min) 
                        {
                                min = graph[i][k]+cost[k];
                                d[i] = k;
                        }
                }
                cost[i] = min;
        }
        path[1] = 1;
        path[stages] = n;
        for(i=2;i<stages;i++)
        {
                if(i==2)
                {
                        k = d[i-2];
                        path[i] = k;
                }
                else
                {
                        k = d[k-1];
                        path[i] = k;
                }
        }
        for(i=1;i<=stages;i++)
        {
                printf("%d ", path[i]);
        }
        printf("\n");
        for(i=0;i<=n;i++)
        {
                printf("%d ", cost[i]);
        }
        printf("\n");
        for(i=0;i<=n;i++)
        {
                printf("%d ", d[i]);
        }
        printf("\n");
        for(i=0;i<=n;i++)
        {
                for(k=0;k<=n;k++)
                {
                        printf("%d ",graph[i][k]);
                }
                printf("\n");
        }
        return 0;
}