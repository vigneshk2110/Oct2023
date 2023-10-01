#include <stdio.h>

int main(){    

   int x = 10, y = 15;
   if (++x<10 || ++y>15)
   {
    x++;
   }
   else 
   {
    y++;
   }

    printf("%d & %d",x,y);   
   
   return 0;
   
}

// Output = 12 & 16   ---> ShortCircuting

