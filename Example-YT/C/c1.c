//
// Created by Acer on 9/11/2023.
//

#include "stdio.h"


int main()
{
    printf("nama \t : Rafi\n"); // \t itu adalah tab menyesuaikan
    printf("kelas \t : \"12\" \n\n\n"); // ( \ ) untuk tidak membaca 1 item fungsi menjadi catatan

    float age = 12.4;
    char* grade = "C";
    char array[] = "Hi";

    printf("Umurku \t\t : %g \n",age);
    printf("Kelasku \t : %s \n",grade);
    printf("Array \t\t : %s \n\n\n",array);

    char names[50]; // char kusus input scanner
    printf("Your Name ?");
    scanf("%s", &names); // scanner input
    printf("Hello %s, Who are you !! \n\n\n",names);

    int umur;
    printf("Your Age ?");
    scanf("%d", &umur);
    if(umur < 15){ // kondisi jika memnuhi akan di jalankan
    printf("Your Remaja");
    }else if(umur < 25){
    printf("Your Bujangan");
    }else if(umur < 35){
        printf("Your Orang tua ");
    }else{
        printf("GES KOLOT");
    }







    return 0;
}