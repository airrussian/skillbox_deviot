#include <stdio.h>

int array[] = {1,2,3,4,5};
int *p1[3];
int *p2[] = { &array[1], &array[2], &array[0] };
int *p3[3] = { &array[3], &array[1], &array[2] };

int main() {
    int array[] = { 1, 2, 3, 4 };
    int *p[] = { &array[1], &array[2], &array[0] };
    for (int i = 0; i < 3; i++)
    {
        printf("%d", *p[i]);
    }
    return 0;    
}