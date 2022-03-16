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
    if(pilihan=='a'||pilihan=='b'||pilihan=='c'||pilihan=='d'||pilihan=='e'||pilihan=='f'){
        switch (pilihan)
        {
        case 'a':
            printf("Hasil operasi tersebut : %f \n",iA + iB);
            break;
        case 'b':
            printf("Hasil operasi tersebut : %f \n",iA - iB);
            break;
        case 'c':
            printf("Hasil operasi tersebut : %f \n",iA * iB);
            break;
        case 'd':
            printf("Hasil operasi tersebut : %f \n",iA/iB);
            break;
        case 'e':
            printf("Hasil operasi tersebut : %d \n",(int)iA/(int)iB);
            break;
        default :
            printf("Hasil operasi tersebut : %f \n",(int)iA % (int)iB);
            break;
        }
    } else {
        printf("Bukan pilihan menu yang benar");
    }
    printf("================================================");
    return 0;
}
