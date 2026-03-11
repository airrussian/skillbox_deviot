#include <stdio.h>

void printFun( char * charIn ) {
    printf("%s", charIn );
}

int main() {
    char str[] = "1234567890\0";
    printFun( str );
    return 0;
}