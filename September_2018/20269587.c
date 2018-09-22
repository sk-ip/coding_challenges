#include<stdio.h>
int main()
{int a,b,d;
scanf("%d %d", &a, &b);
d=a-b;
if(d%10 == 1)
d++;
else if(d%10 == 9)
d--;
else d++;
printf ("%d", d);

return 0;
}