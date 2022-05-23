/*Nama File 	: hargaDiskon.c */
/*Deskripsi 	: Menghitung dan menampilkan di layar besar harga setelah diberi diskon dengan diskonnya yakni 10%, 15%, dan 20% */
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto */
/*Tgl Pembuatan	: 16 Maret 2022, 10:00 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  /*Kamus*/
  int C;
  char y;
  
  /*Algoritma*/
  printf("Masukkan jenis barang antara A - C : ");
  scanf("%c", &y);
  printf("Masukkan harga : ");
  scanf("%d", &C);
  switch(y){
  	case 'A':
  		printf("%d", C - (10 * (C/100)));
  		break;
  	case 'B':
  		printf("%d", C - (15 * (C/100)));
  		break;
  	case 'C':
  		printf("%d", C - (20 * (C/100)));
  		break;
  }
  return 0;
}
