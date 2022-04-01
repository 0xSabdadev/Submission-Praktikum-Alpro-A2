/*Nama File     :HargaDiskon.c
/*Deskripsi     :Menghitung besarnya harga setelah diberi diskon
/*Pembuat       :Majid Ilham Adhim
/*Tgl Pembuatan :15 Maret 2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int hargaAwal;
    int hargaAkhir;
    char jenis;
    //Algoritma
    printf("Masukkan Jenis Diskon : ");
    scanf("%c",&jenis);

    printf("Masukkan Harga Awal : ");
    scanf("%d",&hargaAwal);

    if (hargaAwal>200 || hargaAwal<10.000){
        switch(jenis){
            case 'A' :
                hargaAkhir = hargaAwal - (hargaAwal * 10/100);
                break;
            case 'B' :
                hargaAkhir = hargaAwal - (hargaAwal * 15/100);
                break;
            case 'C' :
                hargaAkhir = hargaAwal - (hargaAwal * 20/100);
                break;
            default :
                printf("Jenis diskon anda salah\n");

        }
        printf("Harga akhir setelah dilakukan diskon %d\n", hargaAkhir);
    }else{
    	printf("Harga yang anda masukan salah\n");
    }
    return 0;
}
