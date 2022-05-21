#include<stdio.h>
#define max 100
int main ()
{
    int t,n,s[max],d[max],i,j,count=0;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d",&n);


        for(i=0; i<n; i++)
        {
            scanf("%d",&s[i]);

        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&d[i]);


            if(d[i]== s[i])
            {
                count++;
            }

        }
        printf("%d\n",count);
        count =0;




    }







    return 0;
}
