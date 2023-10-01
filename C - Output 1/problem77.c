#include<stdio.h>


int main(){
   
    int arr[] = {10,20,30,40,50};

    printf("&arr--> %p\n", &arr);

    int *ptr;
    printf("ptr--> %p\n", ptr);
    ptr = arr;

    printf("ptr-->arr %p\n", ptr);

    return 0;
}

// output
// &arr--> 0x7ffcf749a150
// ptr--> 0xbfebfbff
// ptr-->arr 0x7ffcf749a150
