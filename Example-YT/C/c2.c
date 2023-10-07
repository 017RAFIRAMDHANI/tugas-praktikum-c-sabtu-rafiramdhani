//
// Created by Acer on 9/14/2023.
//
#include "stdio.h"
#include "ctype.h"
int main(){

    char  matkul;
    printf("Your Grade ?");
    scanf("%s", &matkul);

    matkul = toupper(matkul); // merubah seluruh inputan format huruf besar

    switch (matkul) {  // swit case sama halnya seperti if else
        case 'A':
            printf("Sangat Bagus");
            break;
        case 'B':
            printf("Bagus");
            break;
        case 'C':
            printf("Mayan");
            break;
        default:
            printf("Ulang");
    }
















}
