#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,t,len,j,count=0;
    char str[20];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&str);
        len=strlen(str);
        for(j=0;j<len;j++)
        {
            if(str[j]=='c')
            {
                if(str[j+1]=='h')
                {
                    ++count;
                    break;
                }
            }
            if(str[j]=='h')
            {
                if(str[j+1]=='e')
                {
                    ++count;
                    break;
                }
            }
            if(str[j]=='e')
            {
                if(str[j+1]=='f')
                {
                    ++count;
                    break;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}