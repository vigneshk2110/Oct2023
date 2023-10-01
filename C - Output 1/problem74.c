#include <stdio.h>
void fun(int x);

int main(){    
    
    int x =2;
    fun(x++);  // fun(2); --> Post increment
   
    return 0;
}

void fun(int x)
{

     printf("%d",x++); // x++ --> 2 --> Post increment
}

// Output = 2

