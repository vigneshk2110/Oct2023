#include <stdio.h>

int cubes(int num){
    return num*num*num;
}

int main(){

    printf("%d\n", cubes(3));
    return 0;
}