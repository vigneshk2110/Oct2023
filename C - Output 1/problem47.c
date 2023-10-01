#include <stdio.h>

int main(){

    int x = 10;
    x *= 30 +5; // x = 10 * (30+5); --> Though the * has higher precedence than +, 
    // in assignment operator * executes at last.

    printf("%d\n" , x);    
                
    return 0;
}

// Output  = We are NOT Equal

