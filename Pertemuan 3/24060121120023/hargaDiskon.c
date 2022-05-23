/*Nama File      : hargaDiskon.c*/
/*Deskripsi      : Menentukan harga setelah didiskon*/
/*Pembuat        : <24060121120023-Arynda Anna Salsabiela>*/
/*Tgl Pembuatan  : <12 Maret 2022 pukul 17.47>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int harga;
    char diskon;
    int hargdis;

    /*Algoritma*/
    printf("Menghitung Harga Setelah Diskon\n");
    printf("\n");

    printf("\nMasukkan harga pembelian: ");
    scanf("\n %d", &harga);
    printf("\nMasukkan jenis diskon   : ");
    scanf("\n %c", &diskon);

   if (200 < harga && harga < 10000){
        switch (diskon){
            case 'A' :
                hargdis = 0.9 * harga;
                printf("\n");
                printf("\nHarga setelah di diskon Rp%d\n", hargdis);
                printf("\n");
                break;
            case 'B' :
                hargdis = 0.85 * harga;
                printf("\n");
                printf("\nHarga setelah di diskon Rp%d\n", hargdis);
                printf("\n");
                break;
           case 'C' :
                hargdis = 0.8 * harga;
                printf("\n");
                printf("\nHarga setelah di diskon Rp%d\n", hargdis);
                printf("\n");
                break;
            default:
                printf("\n");
                printf("\nPilihan diskon tidak tersedia\n");
                printf("\n");
                break;
            }
  }
  else {
        printf("\n");
        printf("\nMasukkan harga tidak tepat\n");
        printf("\n");
    }
    return 0;
}
