#include<stdio.h>

int main()
{
        int t;
        scanf("%d", &t);
        while(t--)
        {
                int g,i,q;
                long int n;
                scanf("%d", &g);
                while(g--)
                {
                        scanf("%d %ld %d", &i, &n, &q);
                        if(i==1)
                        {
                                if(n%2==1 && q==1)
                                {
                                        printf("%ld\n", n/2);
                                }
                                else if(n%2==1 && q==2)
                                {
                                        printf("%ld\n", (n/2)+1);
                                }
                                else if(n%2==0)
                                {
                                        printf("%ld\n", n/2);        
                                }
                        }
                        else if(i==2)
                        {
                                if(n%2==1 && q==1)
                                {
                                        printf("%ld\n", (n/2)+1);
                                }
                                else if(n%2==1 && q==2)
                                {
                                        printf("%ld\n", n/2);
                                }
                                else if(n%2==0)
                                {
                                        printf("%ld\n", n/2);        
                                }
                        }
                }
        }
        return 0;   
}

