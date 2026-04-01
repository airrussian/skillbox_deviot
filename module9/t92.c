#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void open(
    signed char gameField[SIZE][SIZE], 
    signed char openCells[SIZE][SIZE], 
    int target, int row, int col
) {
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) return;      

    // Если клетка уже открыта или не содержит нужное значение — выходим
    if (openCells[row][col] == 1 || gameField[row][col] != target) return;

    // Открываем текущую клетку    
    openCells[row][col] = 1;
    
    // Рекурсивно проверяем соседние клетки (по горизонтали и вертикали)
    open(gameField, openCells, target, row + 1, col);
    open(gameField, openCells, target, row - 1, col);
    open(gameField, openCells, target, row, col + 1);
    open(gameField, openCells, target, row, col - 1);
}

void outputDesk(signed char desk[5][5]) {
    for ( int y = 0; y < 5; y++ ) {        
        for (int x = 0; x < 5; x++)
            printf("%3d ", desk[x][y]);
        printf("\n");    
    }
}

void randDesk(signed char desk[5][5] ) {
    srand(time(NULL));
    for ( int y = 0; y < 5; y++ ) 
        for (int x = 0; x < 5; x++)
            desk[x][y] = rand() % 127;
}


int main() {

    signed char desk[SIZE][SIZE];     // Игровое поле 
    signed char openCell[SIZE][SIZE] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

    randDesk(desk);                     // Случайно заполняем игровое поле значениями от 0 до 127
    outputDesk(desk);                   // Выводим поле ( для отладки и проверки )

    while (1)
    {    
        signed char fig;
        printf("\nВведите целевое значение (от 0 до 127): ");
        do {
            scanf("%hhd", &fig);
            if (fig < 0 || fig > 127) {
                printf("Ошибка! Число должно быть от 0 до 127. Повторите ввод: ");
            }
        } while (fig < 0 || fig > 127);

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (desk[i][j] == fig && openCell[i][j] == 0) {
                    open(desk, openCell, fig, i, j);
                }
            }
        }

        printf("%d \n", fig);

        open( desk, openCell, fig, 0, 0 );
        outputDesk(openCell);
    }

    return 0;
}