#include <stdio.h>

int N = 10;
int X[10], Y[10];

void inputArray(int arr[]) {
    for (int i = 0; i < N; i++) 
        scanf("%d", &arr[i]);
}

void outputArray(int arr[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

bool isSorted( int arr[] ) {    
    int i = 0; 
    
    bool monoton = true;
    while (monoton && ( i++ < N - 1)) 
        monoton = arr[i-1] <= arr[i];    
    
    return monoton;
}

void transform(int arr[]) {
    for (int i = 0; i < N; i++) 
        if (arr[i] > 0) arr[i] = 0;    
}

void enter() {
    char str[2];
    printf("=== Ввод массивов X и Y===\n");
    for (char a = 'X'; a <= 'Y'; a++) {
        str[0] = a; str[1] = '\0';
        printf("Введите %d элементов массива %s\n", N, str);
        inputArray(a == 'X' ? X : Y);        
    }    
    printf("\n");
}

void source() {
    printf("=== Исходные массивы ===\n");
    printf("Массив X:\n"); outputArray(X);
    printf("Массив Y:\n"); outputArray(Y);
    printf("\n");
}

void transformation() {
    if ( isSorted(X) ) transform(X);
    if ( isSorted(Y) ) transform(Y);
}

void result() {
    printf("=== Результат преобразований массивов ===\n");
    printf("Массив X:\n"); outputArray(X);
    printf("Массив Y:\n"); outputArray(Y);    
    printf("\n");
}

int main() {

    enter();
    source();
    transformation();
    result();

    return 0;
}