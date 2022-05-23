/*Nama File 	: kalkulator.c*/
/*Deskripsi 	: Kalkulator SS menghitung 6 operasi bilangan*/
/*Pembuat   	: 24060121130065 - Raihan Gilang Firdausy*/
/*Tgl Pembuatan	: Kamis, 17-03-2022 17.30 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{

    /*Kamus*/
    char u;
    int iA,iB,h;
    float hasil;

    /*Algoritma*/
    printf("-----Kalkulator Super Sederhana-----\n");
    printf("Masukkan operasi : ");
    scanf("%c", &u);

    printf("\nMasukkan angka pertama  : ");
    scanf("%d", &iA);

    printf("\nMasukkan angka kedua : ");
    scanf("%d", &iB);


    switch(u){

        case 'a':
            h = (iA + iB);
            printf("%d", h);
            break;
        case 'b':
            h = (iA - iB);
            printf("%d", h);
            break;
        case 'c':
            h = (iA * iB);
            printf("%d", h);
            break;
        case 'd':
            hasil = ((float)iA / (float)iB);
            printf("%f", hasil);
            break;
        case 'e':
            h = (iA / iB);
            printf("%d", h);
            break;
        case 'f':
            h = (iA % iB);
            printf("%d", h);
            break;

        default :
            printf("Coba Lagi");
    }
    return 0;
}
