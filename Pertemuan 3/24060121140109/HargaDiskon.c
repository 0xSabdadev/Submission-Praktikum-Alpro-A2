//Nama File     : HargaDiskon.c
//Deskripsi     : Menentukan besarnya harga barang setelah diberikan diskon
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 18-03-2022, 14.08

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Kamus
    int i; //Harga Awal
    int H; // Harga Akhir
    char j; // Jenis Barang

    //Algoritma
    printf("Menghitung Harga Diskon Berdasarkan Jenis Barang \n");
    printf("Macam Jenis Barang: \n");
    printf("1. A = Diskon 10 Persen \n");
    printf("2. B = Diskon 20 Persen \n");
    printf("3. C = Diskon 30 Persen \n");
    printf("Jenis Barang: ");
    scanf("%c", &j);
    printf("Harga Awal Barang: ");
    scanf("%d", &i);

    if (i > 200 && i < 10000){
        switch(j){
            case 'A' :
                H = i - (i*10/100);
                printf("Harga Akhir Setelah Diberikan Diskon: Rp. %d \n",H);
                break;
            case 'B' :
                H = i - (i*15/100);
                printf("Harga Akhir Setelah Diberikan Diskon: Rp. %d \n", H);
                break;
            case 'C' :
                H = i - (i*20/100);
                printf("Harga Akhir Setelah Diberikan Diskon: %d \n", H);
                break;
            default :
                printf("jenis diskon tidak di temukan \n");
                break;
        }
    }
    else {
        printf("harga barang tidak sesuai dengan ketentuan diskon \n");
    }
    return 0;
}
