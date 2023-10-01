#include<stdio.h>

void abc(int x){
    printf("%d\t",x);  // Prints --> 3     2      1      0
    if (x)
    {
        abc(x-1);   // 2    1    0
    }
     printf("%d\t",x); // Prints --> 0     1      2     3 
}

int main(){
    abc(3);
    return 0;
}

// Output = 3       2       1       0       0       1       2       3
