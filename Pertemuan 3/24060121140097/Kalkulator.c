//Nama File 	    : Kalkulator.c
//Deskripsi 	    : Membuat dan menampilkan pada layar sebuah kalkulator super sederhana yang menerima masukan 2 buah bilangan bulat sembarang melalui keyboard ,dan menuliskan beberapa hasil operasi aritmatika terhadap kedua bilangan tersebut
//Pembuat   	    : 24060121140097 - Wildan Adji Prabowo
//Tanggal Pembuatan	: 17 Maret 2022,19.00

#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Kamus
  int iA, iB;
  char x;

  //Algoritma
  printf("Masukkan bilangan pertama : ");
  scanf("%d", &iA);
  printf("Masukkan bilangan kedua : ");
  scanf("%d", &iB);
  printf("Masukkan opsi operasi : ");
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
  		printf("Pilihan menu yang dipilih tidak benar");
        }
  return 0;
}
