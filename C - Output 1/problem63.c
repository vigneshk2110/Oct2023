#include <stdio.h>

int main(){    

    int i = 3, j = 3;

    while(--i&&--j){
        printf("%d\t%d\n", i,j);
    }
    printf("%d\t%d", i,j);
    return 0;
}

// Output
// 2       2
// 1       1
// 0       1
