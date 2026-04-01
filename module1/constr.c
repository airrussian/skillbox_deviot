#include <stdio.h>

#define PATH "/"

int main() {

    char str[] = PATH "2" PATH "5";

    printf("%s\n", str);

    printf("%ld\n", sizeof(str));

    return 0;
}