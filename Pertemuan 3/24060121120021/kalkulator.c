/*Nama File :  kalkulator.c*/
/*Nama Pembuat : Resma Adi Nugroho */
/*Tanggal : 11 Maret 2022 */
/*Deskripsi : program kalkulator atau perhitungan sederhana dengan masukan 2 buah bilangan*/

// Header File
#include<stdio.h>
#include<stdlib.h>

// Program Utama
int main(void){
    // Kamus
    float iA,iB,hasil;
    char pilihan;
    
    // ALgoritma
    printf("================================================\n");
    printf("==========Program Kalkulator Sederhana==========\n");
    printf("Masukan bilangan pertama : ");
    scanf("%f",&iA);
    printf("Masukan bilangan kedua : ");
    scanf("%f",&iB);
    printf("-----Jenis Operasi------\n");
    printf("a : Penjumlahan\n");
    printf("b : Pengurangan\n");
    printf("c : Perkalian\n");
    printf("d : Pembagian\n");
    printf("e : Pembagian Integer\n");
    printf("f : Hasil Bagi\n");
    printf("Masukan jenis operasi(gunakan huruf sesuai dengan jenis operasi) : ");
    scanf("%s",&pilihan);
    switch (pilihan)
    {
    case 'a':
        hasil = iA + iB;
        printf("Hasil operasi tersebut : %d \n",(int)hasil);
        break;
    case 'b':
        hasil = iA - iB;
        printf("Hasil operasi tersebut : %d \n",(int)hasil);
        break;
    case 'c':
        hasil = iA * iB;
        printf("Hasil operasi tersebut : %d \n",(int)hasil);
        break;
    case 'd':
        hasil = iA/iB;
        printf("Hasil operasi tersebut : %f \n",hasil);
        break;
    case 'e':
        hasil = (int)iA/(int)iB;
        printf("Hasil operasi tersebut : %d \n",(int)hasil);
        break;
    case 'f':
        hasil = (int)iA % (int)iB;
        printf("Hasil operasi tersebut : %d \n",(int)hasil);
        break;
    default:
        printf("Bukan pilihan menu yang benar\n");
        break;
    }
    printf("================================================");
    return 0;
}
