#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int t,i,x1,x2,y1,y2,result;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        result = abs ((x1-x2));

         int result_2= abs((y1-y2));

         if(result > result_2)
         {
             printf("%d\n",result);

         }
         else
            printf("%d\n",result_2);





    }




    return 0;
}
