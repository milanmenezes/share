#include <stdio.h>
#include <stdlib.h>

int main()
{
   float q=0,i,n,d,mul=1,q1;
   printf("Enter the num:\n");
   scanf("%f",&n);
   printf("Enter the denominator:\n");
   scanf("%f",&d);
   while(n>=d)
    {
      n=n-d;
      q++;
   }

    for(i=0;i<6;i++)
    {
        mul=mul*0.1;
        q1=0;
        n=n*10;
        while(n>=d)
        {
          n=n-d;
          q1++;
       }
       q1=q1*mul;
       q+=q1;
    }
    n=n*mul;
   printf("Qoutient : %f \nRemainder : %f",q,n);
   return 0;
}
