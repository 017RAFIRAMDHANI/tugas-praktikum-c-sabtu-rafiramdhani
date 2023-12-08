#include <stdio.h>

int main() {
    int N;

    // Input jumlah bilangan
    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &N);

    // Inisialisasi array untuk menyimpan bilangan
    int bilangan[N];

    // Input bilangan sebanyak N
    for (int i = 0; i < N; ++i) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &bilangan[i]);
    }

    // Inisialisasi terbesar dan terkecil dengan nilai pada indeks pertama array
    int terbesar = bilangan[0];
    int terkecil = bilangan[0];

    // Loop untuk mencari nilai terbesar dan terkecil
    int i;
    for (  i = 1; i < N; ++i) {
        if (bilangan[i] > terbesar) {
            terbesar = bilangan[i];
        } else if (bilangan[i] < terkecil) {
            terkecil = bilangan[i];
        }
    }

    // Menampilkan hasil
    printf("Bilangan terbesar: %d\n", terbesar);
    printf("Bilangan terkecil: %d\n", terkecil);

    return 0;
}

