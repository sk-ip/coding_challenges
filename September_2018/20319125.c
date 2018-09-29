#include<stdio.h>
int main()
{
    int l,b,p,a;
    scanf("%d %d", &l,&b);
    p = 2*(l+b);
    a = l*b;
    if(p>a)
    {printf("Peri");
    printf("\n%d", p);
    }
    else if(a>p)
    {printf("Area");
    printf("\n%d", a);
    }
    else
    {printf("Eq");
    printf("\n%d", p);
    }
    return 0;
}