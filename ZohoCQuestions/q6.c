#include<stdio.h>
int main()
{
    char str[] = "Aptitude";
    printf("%s %s %sn", &str[5], &5[str], str+5);
    printf("%c %c %cn", *(str+6), str[6], 6[str]);
    return 0;
}

// Output = ude ude udend d dn