#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void reverseCounter() {

    printf("=== Вывод счетчика от 9 до 0 ===\n");

    int i = 10;
    while ( i > 0 ) printf("%d\n", --i);    
}

void pythagoras() {

    printf("=== Вывод таблицы умножения Пифагора ===\n");

    for ( int b = 1; b <= 10; b++ ) {
        for ( int a = 1; a <= 10; a++ ) {
            printf("%4d", a*b);
        }
        printf("\n");
    }
}

void sortCase() {
    
    printf("=== Ввод и сортировка чисел ===\n");

    int n;
    printf("Сколько чисел?");
    scanf("%d", &n);

    int arr[n];    
    printf("Введите %d чисел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Исходная последовательность: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    sort(arr, n);

    printf("\nОтсортированная последовательность: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void printAccessCmd() {
    printf("Доступные команды:\n");
    printf("1 - Вывод счетчика от 9 до 0\n");
    printf("2 - Вывод таблицы умножения Пифагора\n");
    printf("3 - Ввод и сортировка чисел\n");
}


void defaultCase() {
    printf("Ошибка: Несуществующая команда!\n");
    printf("Пожалуйста, введите команду из списка (1, 2 или 3).\n");
    printAccessCmd();
    printf("Для выхода введите 0.\n");
}


int main()
{

    printf("=== Программа с переключателем команд ===\n");
    printAccessCmd();

    int cmd;

    while (1) {
        printf("\nВведите номер команды (0 для выхода): ");
        scanf("%d", &cmd);        
    
        if (cmd == 0) {
            printf("Программа завершена.\n");
            break;
        }

        switch (cmd) 
        {
            case 1:         
                reverseCounter(); 
                break;
            case 2:
                pythagoras(); 
                break;
            case 3: 
                sortCase();
                break;
            default:
                defaultCase();
                break;
        }
    }
    return 0;
}