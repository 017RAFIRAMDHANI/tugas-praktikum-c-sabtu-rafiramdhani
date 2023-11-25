#include <stdio.h>

int main() {
    int jumlahUang;

    // Input jumlah uang dari pengguna
    printf("Inputkan jumlah uang: ");
    scanf("%d", &jumlahUang);

    // Menghitung jumlah uang dalam satuan uang
    printf("Contoh output:\n");

    // Hitung jumlah lembar uang 10000
    if (jumlahUang >= 10000) {
        printf("%d 10000\n", jumlahUang / 10000);
        jumlahUang =  jumlahUang % 10000;
      
    }

    // Hitung jumlah lembar uang 5000
    if (jumlahUang >= 5000) {
        printf("%d 5000\n", jumlahUang / 5000);
        jumlahUang %= 5000;
    }

    // Hitung jumlah lembar uang 2000
    if (jumlahUang >= 2000) {
        printf("%d 2000\n", jumlahUang / 2000);
        jumlahUang %= 2000;
    }

    // Hitung jumlah lembar uang 1000
    if (jumlahUang >= 1000) {
        printf("%d 1000\n", jumlahUang / 1000);
        jumlahUang %= 1000;
    }

    // Hitung jumlah lembar uang 500
    if (jumlahUang >= 500) {
        printf("%d 500\n", jumlahUang / 500);
        jumlahUang %= 500;
    }

    // Hitung jumlah lembar uang 200
    if (jumlahUang >= 200) {
        printf("%d 200\n", jumlahUang / 200);
        jumlahUang %= 200;
    }

    // Hitung jumlah lembar uang 100
    if (jumlahUang >= 100) {
        printf("%d 100\n", jumlahUang / 100);
        jumlahUang %= 100;
    }

    // Hitung jumlah lembar uang 50
    if (jumlahUang >= 50) {
        printf("%d 50\n", jumlahUang / 50);
        jumlahUang %= 50;
    }

    return 0;
}

