#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    char s = rand()%50+50;
    printf("%c",s);
    return 0;
}