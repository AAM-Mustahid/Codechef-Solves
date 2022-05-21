#include<stdio.h>
int main ()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        int res = 21 - (a+b);
        if(res > 10)
            printf("-1\n");
        else
            printf("%d\n",res);


    }


    return 0;
}
