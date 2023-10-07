//
// Created by Acer on 9/3/2023.
//

#include <iostream>
using namespace std;
int cabang(){
    std::cout << false; // nilai false berisi 0
    cout << endl;
    return 0;
}
int pertambahan(int x, int y){
    return x + y;
}
int matematika(){
    int x = 10 ;
    int y = 5 ;
    int persegiPanjang = x * y;
    cout << "Luas Persegi Panjang adalah " << persegiPanjang;
    return 0;
}
// function utama yg akan di jalankan pada program
int main(){
    int usia = 18;
    double tinggi = 167.5;
    usia = 19; // menimpah usia 18 menjadi 19
    // jika ingin final pakai const int / variable lainya agar tidka bisa di timpah

    cabang(); // function cabang

    cout << "hello" << endl << endl; // penyatuan spasi keyword
    // endL itu spasi

    cout << 9+1; // tidak perlu std karena
    cout << endl << endl;

    cout << "Usiaku adalah " << usia << endl << "Tinggiku adalah " << tinggi;
    cout << endl << endl;

    matematika();
    cout << endl << endl;

    int hasil = pertambahan(10,10);
    cout << hasil;
}