#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float sisi_alas, tinggi, luas, keliling;

    // Meminta input panjang sisi alas segitiga (dalam cm)
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &sisi_alas);

    // Meminta input tinggi segitiga (dalam cm)
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * sisi_alas * tinggi;

    // Menghitung keliling segitiga
    keliling = 3 * sisi_alas;

    // Menampilkan hasil
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}

