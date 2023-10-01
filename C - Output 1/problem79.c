#include<stdio.h>


int main(){
   
    int arr[] = {10,20,30,40,50};

    printf("&arr--> %p\n", &arr);

    printf("&arr[1]--> %p\n", &arr[1]);

    int *ptr = arr;
    // printf("ptr--> %p\n", ptr);
    // printf("++ptr--> %p\n", ++ptr);

    printf("ptr-->arr %p\n", ptr);
      printf("deferencing arr with ++ptr --> %d\n", *(++ptr + 3));

    return 0;
}

// // output
// &arr--> 0x7ffc117080d0
// &arr[1]--> 0x7ffc117080d4
// ptr-->arr 0x7ffc117080d0
// deferencing arr with ++ptr --> 50
