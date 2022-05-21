#include<stdio.h>
int main ()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if(10-x<=2)
            printf("No\n");
        else
            printf("Yes\n");




    }




    return 0;
}
