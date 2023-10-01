#include <stdio.h>
void display(); // Declaration of a method

int main(){

        int a= 1, x = a++;
        printf("%d\t%d\n" , a, x);

        a= 1, x = ++a;
        printf("%d\t%d\n" , a, x);

        a= 1, x = a--;
        printf("%d\t%d\n" , a, x);

        a= 1, x = --a;
        printf("%d\t%d\n" , a, x);
        
    return 0;
}

// Output 
// 2       1
// 2       2
// 0       1
// 0       0
