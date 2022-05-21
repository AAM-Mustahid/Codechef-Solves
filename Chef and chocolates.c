
#include<stdio.h>
int main ()
{
    int i,t,c,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&c,&x,&y);
        int have = c - x;
        int cost = have * y;
        printf("%d\n",cost);



    }




    return 0;
}
