#include <stdio.h>

/**
 * Задание 1
 * Заполнение классного журнала должно проводиться с консоли. 
 * В результате обработки классного журнала нужно высчитать средний балл учеников, 
 * посчитать количество учеников в классе, ранжировать учеников в классе по успеваемости, 
 * а также рассчитать зависимость успеваемости ученика от пола.
 */

typedef enum {
    MALE,
    FEMALE
} Sex;

typedef enum {
    MATH,
    INFORMATICS,
    PHYSICS,
    BIOLOGY
} Discipline;

typedef struct 
{
    char * firstName;               // фамилия ученика
    char * lastName;                // имя ученика
    char * patronymic;              // отчество ученика
    Sex sex;                        // пол ученика
    char * classNumber;             // класс обучения
    Discipline discipline;          // наименование предмета
    unsigned char point;            // оценка за урок
} Student;

// Cписок учеников класса (Журнал)
Student students[];

void addStudentPoint() {
    students
}

int main() {



    return 0;
}
