#include <stdio.h>
int calculate_days(int);
int main()
{
        int size,i,s_,t_, diff;
        scanf("%d", &size);
        char s[size],t[size];
        char z = 'Z',a = 'A';
        scanf("%s", s);
        scanf("%s", t);
        int cost = 0;
        for(i=0;i<size;i++)
        {
                if(s[i]!=t[i])
                {
                        s_ = (int)s[i];
                        t_ = (int)t[i];
                        if(s_ < t_)
                        {
                                diff = t_ - s_;
                        }
                        else if(s_ > t_)
                        {
                                diff = (int)z - s_ + t_ - (int)a + 1;
                        }
                        cost += calculate_days(diff);
                }
        }
        printf("%d", cost);
        return 0;
}

int calculate_days(int diff)
{
        int cost = 0;
        if(diff<13)
        cost += diff;
        else if(diff == 13)
        cost += 1;
        else
        {
                cost += diff / 13;
                cost += diff % 13;
        }
        return cost;
}