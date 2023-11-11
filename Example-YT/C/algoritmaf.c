#include <stdio.h>

int main() {
    int hasiljual;
    int bonus  ;

    // Algoritma
    printf("Masukkan hasil jual: ");
    scanf("%d", &hasiljual);

    if (hasiljual < 5000000) {
        printf("Maaf anda tidak mendapatkan bonus, syarat mendapatkan bonus minimal berhasil menjual 5 juta ruupiah\n");
    } else {
        if (hasiljual < 10000000) {
            bonus = hasiljual * 0.025;
        } else if (hasiljual < 25000000) {
            bonus = hasiljual * 0.05;
        } else if (hasiljual < 50000000) {
            bonus = hasiljual * 0.10;
        } else {
            bonus = hasiljual * 0.15;
        }
        printf("Selamat anda mendapatkan bonus sebesar %d\n", bonus);
    }

    return 0;
}

