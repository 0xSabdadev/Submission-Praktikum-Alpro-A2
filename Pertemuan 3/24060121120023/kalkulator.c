/*Nama File 	: kalkulator.c*/
/*Deskripsi 	: Membuat program kalkulator super sederhana*/
/*Pembuat   	: <24060121120023-Arynda Anna Salsabiela>*/
/*Tgl Pembuatan	: <12 Maret 2022 pukul 18.29>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int hasil;
  float iA, iB, hasilbagi;
  char menu;
  
  /*Algoritma*/
  printf("Menu: \n");
  printf("\ta. Penjumlahan");
  printf("\tb. Pengurangan");
  printf("\tc. Perkalian");
  printf("\td. Pembagian hasil float");
  printf("\te. Pembagian");
  printf("\tf. Pembagian Mod\n");

  printf("Pilih Menu: ");
  scanf("%c",&menu);
  printf("\n");

  switch(menu){
    case 'a':
        printf("\na. Penjumlahan:\n");
        printf("Masukkan angka pertama: ");
        scanf("%f", &iA);
        printf("Masukkan angka kedua  : ");
        scanf("%f", &iB);
        hasil = (int)iA + (int)iB;
        printf("--------------------------- +\n");
        printf("Hasil: %d\n", hasil);
        break;
    case 'b':
        printf("\nb. Pengurangan:\n");
        printf("Masukkan angka pertama: ");
        scanf("%f", &iA);
        printf("Masukkan angka kedua  : ");
        scanf("%f", &iB);
        hasil = (int)iA - (int)iB;
        printf("--------------------------- -\n");
        printf("Hasil: %d\n", hasil);
        break;
    case 'c':
        printf("\nc. Perkalian:\n");
        printf("Masukkan angka pertama: ");
        scanf("%f", &iA);
        printf("Masukkan angka kedua  : ");
        scanf("%f", &iB);
        hasil = (int)iA * (int)iB;
        printf("--------------------------- x\n");
        printf("Hasil: %d\n", hasil);
        break;
    case 'd':
        printf("\nd. Pembagian hasil float:\n");
        printf("Masukkan angka pertama: ");
        scanf("%f", &iA);
        printf("Masukkan angka kedua  : ");
        scanf("%f", &iB);
        hasilbagi = iA / iB;
        printf("--------------------------- :\n");
        printf("Hasil: %.2f\n", hasilbagi);
        break;
    case 'e':
        printf("\ne. Pembagian:\n");
        printf("Masukkan angka pertama: ");
        scanf("%f", &iA);
        printf("Masukkan angka kedua  : ");
        scanf("%f", &iB);
        hasil = (int)iA / (int)iB;
        printf("--------------------------- :\n");
        printf("Hasil: %d\n", hasil);
        break;
    case 'f':
        printf("\nf. Pembagian Mod:\n");
        printf("Masukkan angka pertama: ");
        scanf("%f", &iA);
        printf("Masukkan angka kedua  : ");
        scanf("%f", &iB);
        hasil = (int)iA % (int)iB;
        printf("--------------------------- :\n");
        printf("Hasil: %d\n", hasil);
        break;
    default:
        printf("Bukan pilihan menu yang benar \n");
  }
  return 0;
}
