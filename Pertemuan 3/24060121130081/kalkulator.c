/*Nama File 	: kalkulator.c*/
/*Deskripsi 	: menghitung hasil operasi aritmatika dari 2 bilangan bulat sembarang dengan inputan dari keyboard*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 18/03/2022 14.15*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{ /*Kamus*/
  int iA, iB;
  char opsi;
  /*Algoritma*/
  printf("Masukkan bilangan integer pertama = ");
  scanf("%d", &iA);
  printf("Masukkan bilangan integer kedua = ");
  scanf("%d", &iB);
  printf("Opsi operasi yang diinginkan = ");
  scanf(" %c", &opsi);

  switch(opsi){
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
            printf("%.1f", (float)iA / (float)iB);
            break;
        case 'e':
            printf("%d", iA / iB);
            break;
        case 'f':
            printf("%d", iA % iB);
            break;
        default:
            printf("Opsi yang dimasukkan tidak tersedia");
  }

  return 0;
}
