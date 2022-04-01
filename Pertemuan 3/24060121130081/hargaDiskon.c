/*Nama File 	: hargaDiskon.c*/
/*Deskripsi 	: menghitung harga yang harus dibayarkan setelah diberikan diskon dengan inputan dari keyboard*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 18/03/2022 14.42*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{ /*Kamus*/
  int i;
  char jenis;
  int HA;    //Harga setelah diskon
  /*Algoritma*/
  printf("Masukkan Harga Awal = ");
  scanf(" %d", &i);
  printf("Masukkan Jenis Diskon A/B/C = ");
  scanf(" %c", &jenis);

  switch (jenis)
  {
        case 'A':
            HA = i * (100-10)/10;
            break;
        case 'B':
            HA = i * (100-15)/10;
            break;
        case 'C':
            HA = i * (100-20)/10;
            break;
        default:
            HA = i; //harga awal tidak dikenakan diskon
  }
  printf("Harga setelah diskon adalah %d", HA);

  return 0;
}