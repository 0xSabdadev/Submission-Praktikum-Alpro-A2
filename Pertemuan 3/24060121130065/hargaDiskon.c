/*Nama File 	: hargaDiskon.c*/
/*Deskripsi 	: Menghitung harga diskon*/
/*Pembuat   	: 24060121130065 - Raihan Gilang Firdausy*/
/*Tgl Pembuatan	: Kamis, 17-03-2022 17.30 WIB*/

#include <stdio.h>/*header file*/

/*Program Utama*/
int main()
{

    /*Kamus*/
    char d;
    int h,t;

    /*Algoritma*/
    printf("-----Program Menghitung Harga Diskon-----\n");
    printf("\nMasukkan input diskon (A, B, atau C) : ");
    scanf("%c", &d);

    printf("Masukkan harga : ");
    scanf("%d", &h);

    switch(d){

        case 'A':
            t = h - (h * 0.10);
            printf("%d", t);
            break;
        case 'B':
            t = h - (h * 0.15);
            printf("%d", t);
            break;
        case 'C':
            t = h - (h * 0.2);
            printf("%d", t);
            break;

        default :
            printf("Coba Lagi");
    }
    return 0;
}
