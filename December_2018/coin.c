#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j;
    scanf("%d", &t);
    long long int n[t],k[t],N,K;
    for(j=0;j<t;j++)
    {
        scanf("%lld %lld", &n[j], &k[j]);
    }
    for(j=0;j<t;j++)
    {
        N=n[j];
        K=k[j];
        i=1;
        while(N>0)
        {
            N=N-2*pow(K,i);
            if(N==0)
			{printf("Bob");
			break;
			}
            else
            ++i;
        }
        //printf("%lld",N);
        if(N==0)
        printf("\nBob");
        else
        {
            N=N+pow(K,i-1);
            if(N>=0)
            printf("\nAlice");
            else
            printf("\nBob");
        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j;
    scanf("%d", &t);
    long long int n[t],k[t],N,K;
    for(j=0;j<t;j++)
    {
        scanf("%lld %lld", &N, &K);
        i=1;
        while(N>0)
        {
            N=N-2*pow(K,i);
            if(N==0)
            {
                printf("\nBob");
                break;
            }
            else
            ++i;
        }
        //printf("%lld",N);
        if(N!=0){
        N=N+pow(K,i-1);
        if(N>=0)
        printf("\nAlice");
        else
        printf("\nBob");
        }
    }
    return 0;
}

