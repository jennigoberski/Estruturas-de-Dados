#include <stdio.h>

int main(){
    int i;
    int *p;

    p = &i;

    printf("Endereço de p: %d\n", p);
    p++;
    printf("Novo endereço de p: %d\n", p);

    return 0;
}
