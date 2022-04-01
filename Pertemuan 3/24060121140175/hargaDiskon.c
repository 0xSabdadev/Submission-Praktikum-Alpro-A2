//Nama file         : hargaDiskon.c
//Deskripsi         : Soal Alpro nomor 14
//Pembuat           : 24060121140175 - Maulana Pasya Zefanya
//Tgl Pembuatan     : 17 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int harga,hargadiskon;
    char diskon;

    //Algoritma
    printf("Masukkan input harga yang akan didiskon: ");
    scanf("%d",&harga);

    printf("Masukkan opsi jenis diskon: ");
    scanf("%s",&diskon);

    if(harga>200 && harga<10000){
        switch(diskon){
        case 'a' :
            hargadiskon = 0.9*harga;
            printf("%d",hargadiskon);
            break;
        case 'b' :
            hargadiskon = 0.85*harga;
            printf("%d",hargadiskon);
            break;
        case 'c' :
            hargadiskon = 0.8*harga;
            printf("%d",hargadiskon);
            break;
        default :
            printf("Bukan pilihan jenis diskon yang tepat.");
        }
    }
    else{
        printf("Input harga tidak valid.");
    }
    return 0;
}
