
// Wild Pointer - An Uninitialised Pointer 

#include <stdio.h>
int main() {
    char *alphabetAddress; /* uninitialised or wild pointer */
    char alphabet = 'a';
    alphabetAddress = &alphabet; /* now, not a wild pointer —> initialized */

}