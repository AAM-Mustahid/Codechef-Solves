#include<stdio.h>
int main ()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&x);
        if(x%4==0)

            printf("Good\n");
        else
            printf("Not Good\n");



    }





    return 0;
}
