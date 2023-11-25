#include <stdio.h>

int main() {
    int A[11] = {0}; // Array dengan ukuran 11, diinisialisasi dengan 0
    int input, i = 0;

    printf("Masukkan data (akhiri dengan 999):\n");

    // Menggunakan loop untuk menginput data sampai menemui 999 atau array penuh
    do {
        scanf("%d", &input);

        // Memeriksa apakah input bukan 999, lebih besar dari 9, dan masih ada tempat dalam array
        if (input != 999 && input > 9 && i < 11) {
            A[i] = input;
            i++;
        }

    } while (input != 999 && i < 11);

    // Menampilkan isi array setelah diinput
    printf("Isi array A: [ ");
    int j;
    for ( j = 0; j < 11; j++) {
        if (A[j] != 0) {
            printf("%d", A[j]);

            // Menambahkan garis vertikal  dst.
            if (j + 1) {
                printf(" | ");
            }
        }
    }
    printf(" ]\n");

    return 0;
}

