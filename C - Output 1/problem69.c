#include <stdio.h>

int main(){    

    int a = 5;
    a = --a - --a; // a = (--a = 4) - (--a = 3); --> a = 3 - 3 = 0

    printf("%d\n", a);
    
    return 0;
}

// Output
// 0