/*Nama File 	: JuruMasakTerbaik.c*/
/*Deskripsi 	: Membuat program yang menentukan dan menampilkan pemenang dari lomba juru masak berdasarkan 3 inputan tertinggi*/
/*Pembuat   	: 240601211130045-Farhan Adka Reynaldi*/
/*Tgl Pembuatan	: 29-04-2022 - 06.30*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{ /*Kamus lokal*/
    int nilai1[] = {3,6,7,9,8};
    int nilai2[] = {8,9,7,6,3};
    int sum1 = 0;
    int sum2 = 0;
  /*Algoritma*/

  // Tampilan hasil nilai juri 1-5
    printf("Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < ((sizeof(nilai1)/sizeof(int))); i++) {
        printf(" %d",nilai1[i]);
    }

    printf("\nPenilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < ((sizeof(nilai2)/sizeof(int))); i++) {
        printf(" %d",nilai2[i]);
    }

    // Mengurutkan nilai masak 1
    for(int i = 1;i < ((sizeof(nilai1)/sizeof(int)));i++){
        // Deklasrasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(nilai1[selection] > nilai1[selection-1]){  // > buat descending < buat ascending
                int temp = nilai1[selection];
                nilai1[selection] = nilai1[selection-1];
                nilai1[selection-1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\n\nNilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(nilai1)/sizeof(int)));i++){
        printf(" %d",nilai1[i]);
    }

    // Mengurutkan nilai masak 2
    for(int i = 1;i < ((sizeof(nilai2)/sizeof(int)));i++){
        // Deklasrasi elemen bantuan
        int selection = i;
        while(selection > 0){
            if(nilai2[selection] > nilai2[selection-1]){  // > buat descending < buat ascending
                int temp = nilai2[selection];
                nilai2[selection] = nilai2[selection-1];
                nilai2[selection-1] = temp;
            }
            selection--;
        }
    }
    // Sesudah
    printf("\nNilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < ((sizeof(nilai2)/sizeof(int)));i++){
        printf(" %d",nilai2[i]);
    }

    // Total Nilai masak 1
    /* sum contents of array a */
    for ( int i = 0; i < ((sizeof(nilai1)/sizeof(int))-2); i++ ) {
        sum1 += nilai1[ i ];
    } /* end for */
    printf("\n\nTotal nilai masak 1 adalah: %d",sum1);

    // Total Nilai masak 2
    /* sum contents of array a */
    for ( int i = 0; i < ((sizeof(nilai2)/sizeof(int))-2); i++ ) {
        sum2 += nilai2[ i ];
    } /* end for */
    printf("\nTotal nilai masak 2 adalah: %d",sum2);

    // Output hasil penilaian

    /*
    Juru masak 1 = sum1
    Juru masak 2 = sum2
    */

   printf("\n\nHasil pertandingannya adalah :");
    if(sum1 > sum2){
        printf("Juru masak 1 menang!");
    }else if(sum1 == sum2){
        printf("Pertandingan seri!");
    }else{
        printf("Juru masak 2 menang!");
    }
    return 0;
}
