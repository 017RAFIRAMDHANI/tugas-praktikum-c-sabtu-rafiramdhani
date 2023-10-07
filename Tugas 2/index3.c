#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float alas, tinggi, sisi_miring;

    // Panjang alas dan tinggi
    alas = 4.0;
    tinggi = 5.0;

    // Menghitung panjang sisi miring dengan rumus Pythagoras
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    // Menampilkan hasil
    printf("Panjang alas: %.2f cm\n", alas);
    printf("Panjang tinggi: %.2f cm\n", tinggi);
    printf("Rumus: a x a + t x t\n");
    printf("Panjang sisi miring (hipotenusa): %.2f cm\n", sisi_miring);

    return 0;
}
