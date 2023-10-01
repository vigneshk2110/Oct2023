#include <stdio.h>

int main(){    

    char x = 120;
   while (++x>10)
   {
     printf("%d\t%c\n", x,x);
   }
    return 0;
}

// Output
// 121     y
// 122     z
// 123     {
// 124     |
// 125     }
// 126     ~
// 127
//-128 --> Which is Less than 10