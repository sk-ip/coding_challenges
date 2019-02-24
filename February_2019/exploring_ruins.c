#include <stdio.h>
#include <string.h>
char str[50];
void putvalues(char pre, int i)
{
        if(pre=='a')
        str[i]='b';
        else 
        str[i]='a';
}

int main()
{
        int len,i,post,pre;
        gets(str);
        len = strlen(str);
        for(i=0;i<len;i++)
        {
                if(str[i] == '?')
                {
                        if(i == 0)
                        {
                                post = str[i+1];
                                if(post=='a')
                                str[i] = 'b';
                                else 
                                str[i] = 'a';
                        }
                        else if(i==len-1)
                        {
                                pre = str[i-1];
                                putvalues(pre,i);
                        }
                        else
                        {
                                post = str[i+1];
                                pre = str[i-1];
                                if(post == '?')
                                putvalues(pre,i);
                                else 
                                {
                                        if((pre == post)&&(post == 'b'))
                                        str[i] = 'a';
                                        else
                                        str[i] = 'b';
                                }
                        }
                        
                }
        }
        printf("%s", str);
        return 0;
}
