#include <stdio.h>

int main(){    

    int i , j ,k,l;
    i=2;

    if (j=i%2)  // Evaluated as j = (i%2) ; So j = 0;
    k=2;
    l=2;
    
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", l);
    return 0;
}

// Output
// 2
// 0
// 4096
// 2