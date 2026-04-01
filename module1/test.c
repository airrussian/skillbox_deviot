#include <stdio.h>
#include <string.h>

// Возвращает 0 при успехе, -1 при ошибке
int get_form_value(char* body, const char* key, char* value, int value_len) {
    // Ищем ключ
    char *start = strstr(body, key);
    if (!start) return -1;

    // Проверяем, что после ключа сразу идёт '='
    start += strlen(key);
    if (*start != '=') return -1;
    start++; // пропускаем '='

    // Находим конец значения (до '&' или конца строки)
    char *end = strchr(start, '&');
    int len = end ? (end - start) : strlen(start);

    // Копируем с ограничением по размеру буфера
    int copy_len = len > (value_len - 1) ? (value_len - 1) : len;
    strncpy(value, start, copy_len);
    value[copy_len] = '\0';

    // URL decode: заменяем '+' на пробел
    for (int i = 0; value[i]; i++) {
        if (value[i] == '+') {
            value[i] = ' ';
        }
    }

    return 0; // успех
}

int main() {
    char * body = "login=zota_admin&password=123456890";
    char login[64];
    char password[64];

    if (
        ( get_form_value(body, "login", login, sizeof(login)) == 0 ) && 
        ( get_form_value(body, "password", password, sizeof(password)) == 0 )
    ) {
        printf("login: %s, password: %s \n", login, password);    
    }    
}