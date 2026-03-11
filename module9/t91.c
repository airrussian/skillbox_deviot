#include <stdio.h>

// fn - f(n); fn1 = f(n-1); fn2 = f(n-2)
void fib( int lim, int fn1, int fn2 ) {
    int fn = fn1 + fn2;    
    if ( fn > lim ) return;
    printf("%d ", fn);
    fib( lim, fn, fn1 );
}

int main() {
    fib(2584, 1, 0);
}