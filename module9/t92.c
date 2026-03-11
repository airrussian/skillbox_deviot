#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void open(int fig) {
}

bool find(signed char a[5][5], int fig) {
}

void outputDesk(signed char desk[5][5]) {
    for ( int y = 0; y < 5; y++ ) {        
        for (int x = 0; x < 5; x++)
            printf("%3d ", desk[x][y]);
        printf("\n");    
    }
}

void randDesk(signed char desk[5][5]) {
    srand(time(NULL));
    for ( int y = 0; y < 5; y++ ) 
        for (int x = 0; x < 5; x++)
            desk[x][y] = rand() % 127;
}


int main() {

    signed char desk[5][5];
    bool openCell[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

    randDesk(desk); 
    outputDesk(desk);   

    while (1)
    {    
        signed char fig;
        printf("Введи число от 0 до 127?");
        scanf("%sc", &fig);
        if ( fig < 0 || fig > 127 ) break;        
        printf("%d \n", fig);        
        if ( find(desk, fig) ) open(desk, openCell, fig);
    }
    

    return 0;
}