#include <stdio.h>

int main() {
    // Deklarasi variabel
    float alas, tinggi, luas;

    // Panjang alas dan tinggi
    alas = 8.0;
    tinggi = 5.0;

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan hasil
    printf("Panjang alas: %.2f cm\n", alas);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Luas Segitiga: 1/2 x a x t\n");
    printf("Hasilnya: %.2f cm^2\n", luas);

    return 0;
}

 
