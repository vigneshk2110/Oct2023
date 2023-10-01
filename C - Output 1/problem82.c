#include<stdio.h>


int main(){
   
   int i = 100;
   int *ip1, *ip2;
   ip1 = &i;
   ip2 = ++ip1;
   --ip1;
    
    printf("%lu\n", ip2-ip1);
    
    return 0;
}

// Address   1000   2000     3000    
// variable   i      ip1      ip2
// Value     100     1000     ++ip1

// (Since its Int pointer --> ip2 = (++ip1)--> ++1000 = 1004)
//  Since (++ip1) in previous statement ip1 becomes 1004 

// Address   1000   2000     3000    
// variable   i      ip1      ip2
// Value     100     1004     1004

// --ip1 --> 1004 - 4 -->1000

// Address   1000   2000     3000    
// variable   i      ip1      ip2
// Value     100     1000     1004

// ip2-ip1 = 1004 - 1000 --> 1--> unsigned Integer
