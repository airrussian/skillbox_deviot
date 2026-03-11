#include <stdio.h>

float max( float arr[5] ) {
    float val = arr[0];
    for ( int i = 1; i < 5; i++ ) 
        if ( arr[i] > val ) val = arr[i];            
    return val;
}

float min( float arr[5] ) {
    float val = arr[0];
    for ( int i = 1; i < 5; i++ ) 
        if ( arr[i] < val ) val = arr[i];            
    return val;
}

int main() {
    float A[4][5] = {
        { 1.5,  2.3, -0.5,  4.1,  3.2},
        {-2.1,  5.7,  1.2, -3.4,  0.8},
        { 0.0,  1.1,  2.2,  3.3,  4.4},
        {-0.5, -1.1, -2.2, -3.3, -4.4}
    };
    
    float B[4];
    
    for (int i = 0; i <= 3; i++) 
        B[i] = (A[i][0] >= 0) ? max(A[i]) : min(A[i]);    
        
    printf("Массив B:\n");
    for (int i = 0; i <= 3; i++) {
        printf("B[%d] = %.2f\n", i, B[i]);
    }
    
    return 0;
}