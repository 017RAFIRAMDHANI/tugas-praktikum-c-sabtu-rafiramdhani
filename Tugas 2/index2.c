#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float diameter, jari_jari, volume;

    // Diameter bola
    diameter = 15.0;

    // Menghitung jari-jari bola
    jari_jari = diameter / 2.0;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);

    // Menampilkan hasil
    printf("Diameter bola: %.2f cm\n", diameter);
    printf("Jari-jari bola: %.2f cm\n", jari_jari);
    printf("Volume bola: %.2f cm^3\n", volume);

    return 0;
}
