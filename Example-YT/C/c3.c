//
// Created by Acer on 9/14/2023.
//
#include "stdio.h"
#include "ctype.h"
int main(){

    char  operator;
    double bil1;
    double bil2;
double hasil;
    printf("Masukan Operator Data ( + - * / ) : ");
    scanf("%c", &operator);
    printf("Masukan Bilangan 1  : ");
    scanf("%lf", &bil1);
    printf("Masukan Bilangan 2 :  ");
    scanf("%lf", &bil2);

    switch (operator) {
        case '+':
            hasil = bil1 + bil2;
            printf("%g",hasil);
    }
















}
