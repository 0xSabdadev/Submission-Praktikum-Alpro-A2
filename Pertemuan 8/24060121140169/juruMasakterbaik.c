/*Nama File : juruMasakTerbaik*/
/*Deskripsi : Membuat program algortima SORTING untuk menentukan siapa juru masak terbaik di kota*/
/*Pembuat : Majid Ilham Adhim*/
/*Tgl Pembuat : 23.12, 28 April 2022*/
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    // Kamus Lokal
    int masak1[] = {5,3,2,1,3};
    int masak2[] = {8,7,6,9,6};
    int total = 0;
    int sum = 0;

    // Menampilkan nilai 5 juri kepada juru masak 1 dan 2
    printf("Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < ((sizeof(masak1)/sizeof(int))); i++) {
        printf(" %d",masak1[i]);
    }
    printf("\nPenilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < ((sizeof(masak2)/sizeof(int))); i++) {
        printf(" %d",masak2[i]);
    }

    //Logic nilai masak 1
    for(int i = 1;i < ((sizeof(masak1)/sizeof(int)));i++){
        // elemen bantuan
        int selectedInt = i;
        while(selectedInt > 0){
            if(masak1[selectedInt] > masak1[selectedInt-1]){
                int temp = masak1[selectedInt];
                masak1[selectedInt] = masak1[selectedInt-1];
                masak1[selectedInt-1] = temp;
            }
            selectedInt--;
        }
    }
    // Sesudah
    printf("\n\nNilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(masak1)/sizeof(int)));i++){
        printf(" %d",masak1[i]);
    }
    // Total Nilai masak 1
    for ( int i = 0; i < ((sizeof(masak1)/sizeof(int))-2); i++ ) {
        total += masak1[ i ];
    }
    printf("\nTotal 3 nilai terbesar dari Juru Masak 1: %d\n",total);


    // Logic nilai masak 2
    for(int i = 1;i < ((sizeof(masak2)/sizeof(int)));i++){
        // elemen bantuan
        int selectedInt = i;
        while(selectedInt > 0){
            if(masak2[selectedInt] > masak2[selectedInt-1]){
                int temp = masak2[selectedInt];
                masak2[selectedInt] = masak2[selectedInt-1];
                masak2[selectedInt-1] = temp;
            }
            selectedInt--;
        }
    }
    // Sesudah
    printf("\nNilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(masak2)/sizeof(int)));i++){
        printf(" %d",masak2[i]);
    }
    // Total Nilai masak 2
    for ( int i = 0; i < ((sizeof(masak2)/sizeof(int))-2); i++ ) {
        sum += masak2[ i ];
    }
    printf("\nTotal 3 nilai terbesar dari Juru Masak 2: %d",sum);


    //Hasil Pertandingan
    printf("\n\nHasil pertandingan adalah :");
    if(total > sum){
        printf("Juru masak 1 menang");
    }else if(total < sum){
        printf("Juru masak 2 menang");
    }else if(total == sum){
        printf("Pertandingan seri");
    }
    printf("\n");
    return 0;
}
