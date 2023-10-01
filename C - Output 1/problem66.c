#include <stdio.h>

int main(){    

    int i , j;
    i=(3+2, j = i,12); // Comma Operator --> Rightmost value is assigned to i, i.e.., 12
   
    printf("%d\n", i);
    printf("%d\n", j);
    
    return 0;
}

// Output
// 12   ---> Rightmost value is assigned to i, i.e.., 12
// 1364037728  --> Garbage Value