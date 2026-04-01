#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randarr( int ** arr ) {
    srand( time( NULL ) );

    for ( int i = 0; i < 5; i++ ) 
        for ( int j = 0; j < 5; j++ ) 
            *(*(arr + i * 5) + j) = rand() % 100;        
}


int main(void) {

    int arr[5][5];

    randarr( arr );

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}