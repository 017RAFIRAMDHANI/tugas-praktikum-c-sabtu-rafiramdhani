#include <stdio.h>

int main() {
    // Deklarasi variabel
    int n,i;

    // Meminta input nilai n dari pengguna
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    i = n;
    // Memeriksa apakah n lebih dari 50 atau tidak
    if (n > 50) {
        n = n - 25;
        n = n + 10;
          // Menampilkan nilai n yang telah dimodifikasi
          printf("Nilai n yang telah dimodifikasi: %d  adalah %d \n", i,n);
    } else {
      
          printf("Tidak dapat menampilkan nilai");
    }

  
   
    return 0;
}

