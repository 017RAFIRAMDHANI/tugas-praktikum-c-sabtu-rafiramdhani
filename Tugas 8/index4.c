#include <stdio.h>

int main() {
    int A[11] = {0}; // Array dengan ukuran 11, diinisialisasi dengan 0
    int input, i = 0;

    printf("Masukkan data (akhiri dengan 999):\n");

    // Menggunakan loop tanpa batasan untuk menginput data
    while (1) {
        scanf("%d", &input);

        // Memeriksa apakah input adalah nilai ganjil, bukan 999, dan masih ada tempat dalam array
        if (input != 999) {
            if (input % 2 != 0 && i < 11) {
                A[i] = input;
                i++;
            }
        } else {
            break; // Hentikan loop jika input adalah 999 atau array sudah penuh
        }
    }

    // Menampilkan isi array setelah diinput
    printf("Isi array A: [ ");
    int j;
    for ( j = 0; j < i; j++) {
        printf("%d", A[j]);

        // Menambahkan garis vertikal setelah elemen ke-1, ke-3, ke-5, dst.
        if (j < i - 1) {
            printf(" | ");
        }
    }
    printf(" ]\n");

    return 0;
}

