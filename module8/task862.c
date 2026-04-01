#include <stdio.h>

void sort( int * arr ) {
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            if ( *(arr + i) < *(arr + j) ) {    
                int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
}


int main() {
    
    int arr[5] = { 43, 31, 22, 55, 67 };
    printf("=== Исходный массив ===\n");
    for ( int i = 0; i < 5; i++ ) 
        printf("%d ", (int) *(arr + i));
    printf("\n");

    sort( arr );

    printf("=== Отсортированный массив ===\n");
    for ( int i = 0; i < 5; i++ ) 
        printf("%d ", (int) *(arr + i));
    printf("\n");

    return 0;    
}