/*Nama File 	: HargaDiskon.c*/
/*Deskripsi 	: membuat program yang menghitung harga setelah diskon*/
/*Pembuat   	: Kristian David - 24060121130049*/
/*Tgl Pembuatan	: 12 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    char jenis;
    int harga;

    //algoritma
    printf("masukan jenis: ");
    scanf("%c", &jenis);

    printf("masukan harga: ");
    scanf("%d", &harga);

    if ((harga > 200) && (harga < 10000)){
        switch(jenis) {
            case 'A':
                printf("%d", harga - (harga * 10/100));
                break;
            case 'B':
                printf("%d", harga - (harga * 15/100));
                break;
            case 'C':
                printf("%d", harga - (harga * 20/100));
                break;
            default:
                printf("masukan jenis tidak tepat");
        }
    } else {
        printf("masukan harga tidak tepat");
    }
    return 0;
}


