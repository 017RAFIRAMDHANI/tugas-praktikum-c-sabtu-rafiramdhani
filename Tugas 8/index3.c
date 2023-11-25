#include <stdio.h>

int main() {
    int A[11] = {0}; // Array dengan ukuran 11, diinisialisasi dengan 0
    int input, i = 0;

    printf("Masukkan data (akhiri dengan 999):\n");

    // Menggunakan loop tanpa batasan untuk menginput data
    while (1) {
        scanf("%d", &input);

        // Memeriksa apakah input bukan 999, lebih besar dari 9, dan masih ada tempat dalam array
        if (input != 999 && input > 9 && i < 11) {
            A[i] = input;
            i++;
        } else {
            break; // Hentikan loop jika input adalah 999, tidak lebih besar dari 9, atau array sudah penuh
        }
    }

    // Menampilkan isi array setelah diinput
    int j;
    printf("Isi array A: [ ");
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

