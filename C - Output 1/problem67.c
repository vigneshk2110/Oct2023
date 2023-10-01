#include <stdio.h>

int main(){    

    int a = 5;
    a = ++a + ++a; // a = (++a = 6) + (++a = 7); --> a = 7 + 7 = 14

    printf("%d\n", a);
    
    return 0;
}

// Output
// 14