#include <stdio.h>

int main(){

    int i = 0;

    label:{
        if (i<10)
        {
            i++;
            printf("%d", i);
            goto label;
           
        }
        
    }
    return 0;

}

// Output = 12345678910