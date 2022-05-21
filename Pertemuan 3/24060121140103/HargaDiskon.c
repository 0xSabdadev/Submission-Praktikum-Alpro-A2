//Nama File         : HargaDiskon.c
//Deskripsi         : Menghitung dan menampilan pada layar besarnya harga setelah diberikan diskon, jika diberikan masukan melalui keyboard untuk besaran jenis [hanya terdiri dari ‘A’, ‘B’, dan ‘C’], dan harga (integer > 200 dan < 10.000)
//Pembuat           : 24060121140103_Georgy Banny Rizky Wasiat
//Tanggal Pembuatan : 17 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
   int harga,hargadiskon;
   char diskon;

   //Algoritma
   printf("Masukkan harga yang akan didiskon: ");
   scanf("%d",&harga);
   printf("Masukkan jenis diskon: ");
   scanf("%s",&diskon);

   if(harga>200 && harga<10000){
       switch(diskon){
       case 'a' :
           hargadiskon = 10*harga;
           printf("%d",hargadiskon);
           break;
       case 'b' :
           hargadiskon = 15*harga;
           printf("%d",hargadiskon);
           break;
       case 'c' :
           hargadiskon = 20*harga;
           printf("%d",hargadiskon);
           break;
       default :
           printf("Pilihan jenis diskon tidak ada.");
       }
 }
   else{
      printf("Harga melampaui batas.");
 }
   return 0;
}
