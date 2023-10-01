#include <stdio.h>

struct People
{
    char name[25];
    int age;
};

int main(){
    struct People p1;
    p1.age = 21;
    strcpy(p1.name,"Vignesh");

    printf("%d", p1.age);
    printf("%s", p1.name);

    return 0;

}
