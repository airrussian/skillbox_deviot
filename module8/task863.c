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

float avg( int *arr ) {
    float sum = 0;
    for ( int i = 0; i < 5; i++ ) 
        sum = sum + *(arr + i);
    return sum / 5;
}

int main() {

    int arr[5] = { 43, 31, 22, 55, 17 };
    printf("=== Исходный массив ===\n");
    for ( int i = 0; i < 5; i++ ) 
        printf("%d ", (int) *(arr + i));
    printf("\n\n");

    sort(arr);

    printf("=== Вычисление ===\n");
    printf(" Среднее значение=%.2f\n", avg(arr));
    printf(" Медианное значение=%d\n", *(arr + 2));
    printf(" Минимальное значение=%d\n", *(arr));
    printf(" Максимальное значение=%d\n", *(arr + 4));
    
    return 0;
}