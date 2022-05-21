#include<stdio.h>
int main ()
{
  int i,t,x,y;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      scanf("%d %d",&x,&y);
      if(x<y)
        printf("BIKE\n");
      else if(y<x)
        printf("CAR\n");
      else
        printf("SAME\n");








  }






    return 0;
}
