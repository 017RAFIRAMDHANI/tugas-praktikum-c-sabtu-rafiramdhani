#include <stdio.h>

int main() {
    int A[11] = {0}; // Array dengan ukuran 11, diinisialisasi dengan 0
    int input, i = 0;
    int isFirstElement = 1; // Menandakan apakah elemen pertama

    printf("Masukkan data (akhiri dengan 999):\n");

    // Menggunakan loop untuk menginput data sampai menemui 999
    do {
        scanf("%d", &input);

        // Memeriksa apakah input bukan 999 sebelum menyimpan ke dalam array
        if (input != 999) {
            A[i] = input;
            i++;
            isFirstElement = 0; // Setel isFirstElement menjadi 0 karena sudah mencetak elemen pertama
        } else {
            break;
        }
    } while (i < 11);

    // Menampilkan isi array setelah diinput
    printf("Isi array A: [ ");
    int j = 0;
    while (j < i) {
        printf("%d", A[j]);

        // Menambahkan garis vertikal setelah elemen ke-1, ke-3, ke-5, dst.
        if (j +1) {
            printf(" | ");
        }

        j++;
    }

    // Menambahkan elemen 0 pada indeks yang belum terisi
    while (j < 11) {
        A[j] = 0;
        j++;
    }

    printf(" ]\n");

    return 0;
}

