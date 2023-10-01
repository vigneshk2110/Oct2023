#include<stdio.h>


int main(){
   
    int arr[] = {10,20,30,40,50};

    printf("&arr--> %p\n", &arr);

    int *ptr;
    printf("ptr--> %p\n", ptr);
    printf("++ptr--> %p\n", ++ptr);
    ptr = arr;

    printf("ptr-->arr %p\n", ptr);

    printf("++ptr --> %p\n", ++ptr);    

    return 0;
}

// output
// &arr--> 0x7ffe8a058a50
// ptr--> 0xbfebfbff
// ++ptr--> 0xbfebfc03
// ptr-->arr 0x7ffe8a058a50
// ++ptr --> 0x7ffe8a058a54
