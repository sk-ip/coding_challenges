#include<stdio.h>
#include<string.h>

int max(int m, int n)
{
        if(m>n)
        return m;
        else
        return n;
}

int LCS(char *str1, char *str2, int len1, int len2)
{
        int mat[len1+1][len2+1];
        int i,j,lcs_len,k;
        for(i=0;i<=len1;i++)
        {
                for(j=0;j<=len2;j++)
                {
                        if(i==0 || j==0)
                        mat[i][j] = 0;
                        else if(str1[i-1] == str2[j-1])
                        mat[i][j] = mat[i-1][j-1] + 1;
                        else 
                        mat[i][j] = max(mat[i][j-1],mat[i-1][j]);
                }
        }

        lcs_len = mat[len1][len2];
        int lcs_sequence[lcs_len];
        i=len1+1;
        j=len2+1;
        k=-1;
        do
        {
                if(mat[i][j] != mat[i][j-1] || mat[i][j] != mat[i-1][j] )
                {
                        lcs_sequence[++k]=str1[i-1];
                        i=i-1;j=j-1;
                }
                else if(mat[i][j] == mat[i][j-1])
                {
                        j=j-1;
                        lcs_sequence[++k]=str1[i-1];
                }
                else if(mat[i][j] == mat[i-1][j])
                {
                        i=i-1;
                        lcs_sequence[++k]=str1[i-1];
                }

        }while(i!=0 && j!=0);

        for(i=lcs_len;i>=0;i--)
        {
                printf("%c ", lcs_sequence[i]);
        }
        
        return lcs_len;
}


int main()
{
        char str1[10],str2[10];
        int len1,len2;
        printf("enter first string:");
        scanf("%s",&str1);
        printf("enter second string:");
        scanf("%s",&str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        printf("\nthe longest common subsequence is: %d", LCS(str1,str2,len1,len2));
        return 0;
}