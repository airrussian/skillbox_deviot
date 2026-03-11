#include <stdio.h>

float avg( int arr[5] ) {
    int sum = 0;
    for ( int i = 0; i < 5; i++ ) {
        sum += arr[i];
    }
    return sum / 5;
}

int main() {

    int arr[5];

    printf("=== Необходимо заполнить массив ===\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);        
    }

    printf("Введенные данные\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Cреднее значение элементов массива=%.2f\n", avg(arr));

    return 0;
}