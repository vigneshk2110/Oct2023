#include <stdio.h>

int main(){    

   int i, c=0,n=7;

   for ( i = 0; i <=10; i++)
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

//  Floating point exception
// n%0 --> Goes into infinite loop