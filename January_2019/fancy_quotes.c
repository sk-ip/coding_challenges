#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
        int t,len;
        char str[100];
        scanf("%d", &t);
        gets(str);
        while(t--)
        {
                gets(str);
                len = strlen(str);
                int i,found=0;
                for(i=0;i<len;i++)
                {
                        if(i==0)
                        {
                                if(str[i]=='n'&&str[i+1]=='o'&&str[i+2]=='t'&&str[i+3]==' ')
                                {
                                        found=1;
                                        break;
                                }
                                else if(str[i]=='n'&&str[i+1]=='o'&&str[i+2]=='t'&&str[i+3]=='\0')
                                {
                                        found=1;
                                        break;
                                }
                        }
                        else if(str[i]==' '&&str[i+1]=='n'&&str[i+2]=='o'&&str[i+3]=='t'&&str[i+4]=='\0')
                        {
                                found=1;
                                break;
                        }
                        else if(str[i]==' '&&str[i+1]=='n'&&str[i+2]=='o'&&str[i+3]=='t'&&str[i+4]==' ')
                        {
                                found=1;
                                break;
                        }
                }
                if(found==0)
                printf("regularly fancy\n");
                else
                printf("Real Fancy\n");
        }
        return 0;
}