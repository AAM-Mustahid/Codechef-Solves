#include<stdio.h>
int main ()
{
   int i,t,a,b,x,y;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
     scanf("%d %d %d %d",&a,&b,&x,&y);

       if(x*y >= a*b )
        printf("Yes\n");
       else
        printf("No\n");


   }



    return 0;
}
