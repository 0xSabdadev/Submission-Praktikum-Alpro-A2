/*Nama File 	: kalkulator.c */
/*Deskripsi 	: Membuat kalkulator Super Sederhana yang menerima masukan 2 bilangan dari keyboard dan menampilkan hasil operasi aritmatika di layar */
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto */
/*Tgl Pembuatan	: 16 Maret 2022, 9:30 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  /*Kamus*/
  int iA, iB;
  char x;
  
  /*Algoritma*/
  printf("Masukkan bilangan pertama : ");
  scanf("%d", &iA);
  printf("Masukkan bilangan kedua : ");
  scanf("%d", &iB);
  printf("Masukkan operasi antara a - f : ");
  scanf(" %c", &x);
  switch(x){
  	case 'a':
  		printf("%d", iA + iB);
  		break;
  	case 'b':
  		printf("%d", iA - iB);
  		break;
  	case 'c':
  		printf("%d", iA * iB);
  		break;
  	case 'd':
  		printf("%f", (float)iA / (float)iB);
  		break;
  	case 'e':
  		printf("%d", iA / iB);
  		break;
  	case 'f':
  		printf("%d", iA % iB);
  		break;
  	default:
  		printf("Bukan pilihan menu yang benar");
        }
  return 0;
}
