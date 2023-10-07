#include <stdio.h>

int main() {
    // Deklarasi variabel
    float celsius, fahrenheit, reamur;

    // Meminta input suhu dalam Celsius dari pengguna
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celsius);

    // Menghitung suhu dalam Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Menghitung suhu dalam Reamur
    reamur = celsius * 4/5;

    // Menampilkan hasil
    printf("%.2f derajat Celsius sama dengan %.2f derajat Fahrenheit\n", celsius, fahrenheit);
    printf("%.2f derajat Celsius sama dengan %.2f derajat Reamur\n", celsius, reamur);

    return 0;
}

