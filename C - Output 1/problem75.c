#include <stdio.h>

int main(){    
    
   char sport[] = "cricket";
   int x =1,y;
   y = x++ + ++x;
//  y = 1 + 3 --> y = 4
     printf("%c",sport[++y]);

    return 0;
}
//  Output = e




