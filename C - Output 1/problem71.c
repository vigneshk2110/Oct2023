#include <stdio.h>

int main(){    
    
    int a = 35, b = 15, c =25,d,e;
    d = a>c>b;
    // d = 35>25>15 == (35>25)>(25>15)
    // d = 1>1 == 0
    e=c-b>a<=d;
    // e = (25-15)>(35<=0)== 10>0
    // e = 1
   
    printf("%d\t%d\n", d,e);
   
    return 0;
}

// Output
// 0       1