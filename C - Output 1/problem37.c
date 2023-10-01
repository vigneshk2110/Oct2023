#include <stdio.h>

int main(){

int i = 5;
int j=i;
int k = j;
k = i==j;

printf("k: %d", k);
    return 0;
}

// output = k: 1