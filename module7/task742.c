#include <stdio.h>
#include <limits.h>

int max( int arr[10] ) {
    int maxValue = INT_MIN;
    for ( int i = 0; i < 10; i++ ) 
        if ( arr[i] >= maxValue ) maxValue = arr[i];            
    return maxValue;
}

int findIndex( int arr[10], int value ) {
    int idx = -1;
    int i = -1;
    do {
        idx = ( arr[++i] == value ) ? i : -1;
    } while(( idx < 0 ) && ( i < 10 ));
    return idx;
}

int main() {

    int arr[10];

    printf("=== Необходимо заполнить массив ===\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);        
    }

    printf("Введенные данные\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int maxValue = max( arr );
    int index = findIndex( arr, maxValue );

    printf("Максимальное значение=%d, находиться по индексу=%d\n", maxValue, index);    

    return 0;
}