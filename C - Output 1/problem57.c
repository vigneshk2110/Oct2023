#include <stdio.h>

int main(){    

   int x = 10, y = 15, z = 20, w=25;
   int a;
   a=x=y=z=w;

   printf("%d\n",a);
    printf("%d\n",x);
     printf("%d\n",y);
      printf("%d\n",z);
       printf("%d\n",w);
   
   return 0;
   
}

// Output 
// 25
// 25
// 25
// 25
// 25

