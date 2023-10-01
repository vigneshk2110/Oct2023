#include <stdio.h>

int main(){    
    
    int x =4%5==4%2+3;
    // x = 4%5 == 4%2 +3; --> x = 4 == 0+3 --> x = 0;
    printf("%d",x);
   
    return 0;
}

// Output
// 0