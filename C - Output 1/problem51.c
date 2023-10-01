#include <stdio.h>
void f(int *p, int *q){
    p = q;
    *p = 2;
}

int main(){
    int i = 0, j = 1;
    f(&i, &j);        
    printf("%d\t%d\t",i,j);
                
    return 0;
}

// Address  1000  2000   3000  4000
//           i     j       p    q
// Value     0     2     2000  2000

// *p = *(2000) = 2

// Output  = 0       2      

