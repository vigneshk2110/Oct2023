#include <stdio.h>
int main()
{
    int i, j, var = 'A';
    for (i = 5; i >= 1; i--) {
        for (j = 0; j < i; j++)
            printf("%c ", (var + j));
        printf("\n");
    }
    return 0;
}

// output
// A B C D E 
// A B C D 
// A B C 
// A B 
// A