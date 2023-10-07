#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float alas, tinggi, sisi_miring;

    // Meminta input panjang alas dari pengguna
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);

    // Meminta input panjang tinggi segitiga dari pengguna
    printf("Masukkan panjang tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung panjang sisi miring (hipotenusa) menggunakan rumus Pythagoras
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}

