#include <stdio.h>

int main(){    

   int i, c=0,n=7;

   for ( i = 1; i <=10; i++)
   {
    if (n%i == 0)
    {
        printf("%d\t%d\n",n,i);
        c++;
    }    
   }

   if (c==2)
   {
    printf("Prime");
   }
   else 
   {
   printf("Not Prime");
   }
   return 0;
   
}

//  Output
// 7       1
// 7       7
// Prime