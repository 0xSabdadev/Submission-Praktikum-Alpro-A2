/*Nama File     : HargaDiskon*/
/*Deskripsi     : menuliskan dan menampilkan besarnya harga setelah diberikan diskon*/
/*Pembuat       : Alfaya Sayyida - 24060121120009*/
/*Tgl Pembuatan : 15/03/2022 - 00:35*/

#include <stdio.h>
#include <stdlib.h>

/*Program utama*/
int main()
{
    //Kamus
    int harga;
    char jenis;

    //Algoritma
    printf("Masukkan jenis barang antara A - C : ");
    scanf("%c", &jenis);
    printf("Masukkan harga barang : ");
    scanf("%d", &harga);

    switch (jenis){
        case 'A' :
            printf("%d", 90 * harga / 100);
            break;
        case 'B' :
            printf("%d", 85 * harga / 100);
            break;
        case 'C' :
            printf("%d", 80 * harga / 100);
            break;
        default:
            printf("Jenis barang tidak tersedia");
    }
    return 0;
}

