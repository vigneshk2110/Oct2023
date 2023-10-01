#include <stdio.h>

int main(){

int i;
for(i=0;i<=5;i++);
{
printf("Inside Body %d\n", i);
}
    return 0;
}

//  Output = Inside Body 6
//  For Loop runs 6 times from 0 to 5 & pass i value as 6 at the end of the loop 
// & for loop has nothing to execute/print.
//  Passed value 6 is used by the below statement to print the argument passed.
