#include<stdio.h>
int main ()
{
    int i,t,x,y,d,diff;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {

        scanf("%d %d %d",&x,&y,&d);

        diff = abs(x-y);
        if(diff<=d)
            printf("YES\n");
        else
            printf("NO\n");



    }




    return 0;
}
