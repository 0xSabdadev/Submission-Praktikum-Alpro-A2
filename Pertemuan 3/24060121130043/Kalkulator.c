/*Nama File 	: Kalkulator.c*/
/*Deskripsi 	: membuat kalkulator sederhana dengan dua inputan bilangan dan satu inputan operasi*/
/*Pembuat   	: 24060121130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: */

/*header file*/
#include <stdio.h>
#include <stdlib.h>

/*program utama*/
int main()
{   /*kamus*/
    int iA;
    int iB;
    int O;
    char Operasi;

    /*algoritma*/
    printf("Masukan Operasi :");
    scanf("%c", &Operasi);
    printf("masukan Bilangan Pertama :");
    scanf("%d", &iA);
    printf("masukan bilangan kedua :");
    scanf("%d", &iB);

    switch(Operasi){
        case 'A' :
            O = (iA+iB);
            printf("%d + %d = %d", iA,iB,O);
            break;
        case 'B' :
            O = (iA-iB);
            printf("%d - %d = %d", iA,iB,O);
            break;
        case 'C' :
            O = (iA*iB);
            printf("%d * %d = %d", iA,iB,O);
            break;
        case 'D' :
            O = ((float)iA/(float)iB);
            printf("%d / %d = %d", iA,iB,O);
            break;
        case 'E' :
            O = (iA/iB);
            printf("%d div %d = %d", iA,iB,O);
            break;
        case 'F' :
            O = (iA%iB);
            printf("%d mod %d = %d", iA,iB,O);
            break;
        default :
            printf("masukan untuk operasi tidak tepat");

    }
    return 0;
}
