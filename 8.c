#include<stdio.h>
void main()
{
 int n, i, k=0;
 scanf("%d",&n);
 if(n<=0)
 printf("Enter no greater than 0");
 else
 {
   for(i=1;i<=n;i++)
     {
       k=k+i;
     }
   printf("%d",k);
  }
}
