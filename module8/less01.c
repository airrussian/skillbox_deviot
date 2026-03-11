#include <stdio.h>

int *ptr;

int main(void) {

    int a = 5;
    int *ptr;           // Указатель на int
    ptr = &a;           // Присвоение адреса указателю 

    printf("%p\n", (void*) ptr);

    printf("%d\n", *ptr);

    return 0;
}