#include <stdio.h>

int main()
{
    printf("25 + 35 = %d; ", 25 + 35);
    printf("12.78 + 18.22 = %.2f; ", 12.78 + 18.22);
    printf("21.35 + 15 = %.2f ", 21.35 + 15);
    printf("\n");

    printf("17 - 6 = %d; ", 17 - 6);
    printf("25 - 42 = %d; ", 25 - 42);
    printf("21 - 13.54 = %.2f ", 21 - 13.54);
    printf("\n");

    printf("65 * 3 = %d; ", 65 * 3);
    printf("3.14 * 2.71 = %.2f; ", 3.14 * 2.71);
    printf("9.8 * 4 = %.2f ", 9.8 * 4);
    printf("\n");

    printf("32 / 2 = %.2f; ", (float) 32 / 2);
    printf("35 / 2 = %.2f; ", (float) 35 / 2);
    printf("16.8 / 4 = %.2f; ", 16.8 / 4);
    printf("20 / 2.5 = %.2f ", 20 / 2.5);
    printf("\n");    

    printf("Остаток от деления:\n");
    printf("12 на 4 = %d; ", 12 % 4);
    printf("15 на 4 = %d; ", 15 % 4);
    printf("27 на 3 = %d; ", 27 % 3);
    printf("21.4 на 4 = ❌");
    printf("\n");    


    float x = 72.45;
    float y = 84.32;
    int a = (int) x + y;
    printf("a = %d", a);


    return 0;

}
