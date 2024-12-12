#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

float scalar_product(const float* vector1, const float* vector2, int size) {
    float result = 0.0;
    for (int i = 0; i < size; i++) {
        result += vector1[i] * vector2[i];
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "RU");
    // Приклад використання
    float vector1[] = { 1.0, 2.0, 3.0 };
    float vector2[] = { 4.0, 5.0, 6.0 };
    int size = sizeof(vector1) / sizeof(vector1[0]);

    float result = scalar_product(vector1, vector2, size);
    printf("Скалярное произведение векторов: %.2f\n", result);

    return 0;
}