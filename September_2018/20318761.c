#include<stdio.h>
int main()
{int t,i,num,f=0,l=0;
scanf("%d", &t);
for(i=0;i<t;i++)
{scanf("%d", &num);
l=num%10;
while(num!=0)
{f=num;
num=num/10;
}
printf("\n%d",l+f);
}
return 0;
}