#include<stdio.h>
int main ()
{
    int i,t,x,k,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d %d %d",&n,&x,&k);
        int result = k/x;
        if(result<=n)
            printf("%d\n",result);
        else
            printf("%d\n",n);




    }




    return 0;
}
