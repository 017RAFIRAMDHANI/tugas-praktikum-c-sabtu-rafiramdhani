#include <stdio.h>

// Deklarasi fungsi
int cabang() {
    printf("%d\n", 0); // 0 adalah nilai yang setara dengan false
    return 0;
}
int pertambahan(int x, int y){
    return x + y;
}
int matematika(){
    int x = 10 ;
    int y = 5 ;
    int persegiPanjang = x * y;
    printf("Luas Persegi Panjang adalah %d",persegiPanjang);

    return 0;
}
// function utama yg akan di jalankan pada program
int main(){
    int usia = 18;
    double tinggi = 167.5;
    usia = 19; // menimpah usia 18 menjadi 19
    // jika ingin final pakai const int / variable lainya agar tidka bisa di timpah

    cabang(); // function cabang


    printf("hello \n\n"); // penyatuan spasi keyword
    // \n itu spasi


    printf("%d",9+1);
    printf("\n\n");


    printf("Usiaku adalah %d \nTinggiku adalah %g",usia,tinggi);
    printf("\n\n");

    matematika();
    printf("\n\n");

    int hasil = pertambahan(10,10);
    printf("%d",hasil);
}