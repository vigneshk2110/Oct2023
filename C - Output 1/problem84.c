#include<stdio.h>
void fun(void){
    static int a  = 5;
    printf("a: %d\n", a+=2);
}

int main(){
    fun();
    fun();
    fun();

    return 0;
}

// Output
// a: 7
// a: 9
// a: 11