#include<stdio.h>
int main()
{
    int t,temp,i,num,r;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int og =0;
        scanf("%d", &num);
        temp = num;
        while(temp!=0)
        {
            r = temp%10;
            og = og*10 + r;
            temp = temp / 10;
        }
        printf("\n%d", og);
    }
    return 0;
}