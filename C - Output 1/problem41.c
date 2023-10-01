#include <stdio.h>

int main(){

    int i = 1;

    label:{

        // if (i>0)

        if(1)

        {
            printf("%d", i);
            i++;
            goto label;
           
        }
        
        
    }
    return 0;

}

// Output = Infinite Loop