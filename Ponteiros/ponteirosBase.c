#include <stdio.h>

void display(int var, int *ptr) {
    printf("O conteúdo de var: %d\n", var);
    printf("O endereço de var: %p\n", &var);
    printf("O conteúdo de var apontado por ptr: %d\n", *ptr);
    printf("O endereço apontado por ptr: %p\n", ptr);
    printf("O próprio endereço de ptr :%p\n\n", &ptr);
}

void update (int *p) {
    *p = *p + 1;
}

int main() {
    int var = 17;
    int *ptr;

    ptr = &var;

    printf("----------Valores dos conteúdos da main()---------- \n\n");
    printf("O conteúdo de var: %d\n", var);
    printf("O endereço de var: %p\n", &var);
    printf("O conteúdo de var apontado por ptr: %d\n", *ptr);
    printf("O endereço apontado por ptr: %p\n", ptr);
    printf("O próprio endereço de ptr :%p\n\n", &ptr);
    
    printf("----------Valores dos conteúdos da função display---------- \n\n");
    display(var, ptr);
    
    *ptr = 45;
    printf("-Valores dos conteúdos da função display, com alteração em var na main() com *ptr \n\n");
    display(var, ptr);

    update(&var);
    printf("-Valores dos conteúdos da função display(), com alteração de +1 em var usando o ponteiro *p na função update() \n\n");
    display(var, ptr);

    return 0;
}
// *ptr <= conteúdo da variável var, apontada por ptr;
// ptr <= endereço da variável var, apontada por ptr;
// &ptr <= endereço do próprio ptr