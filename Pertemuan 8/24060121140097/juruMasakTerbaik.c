/*Nama File 	: JuruMasakTerbaik.c_*/
/*Deskripsi 	: Mencari juara masak yang memiliki total nilai terbesar*/
/*Pembuat       : 24060121140097 - Wildan Adji Prabowo*/
/*Tgl Pembuatan : 28  April  2022*/


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
/* Kamus Lokal */
    int sum1 = 0; // juru masak 1
    int sum2 = 0; // juru masak 2
    int T1[] = {5,3,2,1,3};
    int T2[] = {8,7,6,9,6};

/* Algoritma */
    int length = sizeof(T1)/sizeof(int);
    int length2= sizeof(T2)/sizeof(int);

    printf("--- Juru Masak Terbaik --- \n ");


    printf("\n Penilaian 5 orang juri kepada juru masak 1:");
    for (int i = 0; i < length; i++) {
        printf(" %d",T1 [i]);
    }

    printf("\n Penilaian 5 orang juri kepada juru masak 2:");
    for (int i = 0; i < length2; i++) {
        printf(" %d",T2[i]);
    }

    printf("\n");

// Pengurutan nilai juru masak 1 //
    for(int i = 1;i < length ;i++){
        int selection = i;
        while(selection > 0){
            if(T1[selection] > T1[selection-1]){
                int temp = T1[selection];
                T1[selection] = T1[selection-1];
                T1[selection-1] = temp;
            }
            selection--;
        }
    }

    printf("\n Nilai juru masak 1 setelah diurutkan:");
    for(int i = 0; i < length;i++){
        printf(" %d",T1[i]);
    }
// Total 3 nilai  ter besar juru masak 1 //
    for ( int i = 0; i < (length -2); i++ ) {
        sum1 += T1[ i ];
    }
    printf("\n Total 3 nilai terbesar juru masak 1 adalah: %d",sum1);
    printf("\n");


// Mengurutkan nilai masak 2 //
    for(int i = 1;i < length2 ;i++){
        int selection = i;
        while(selection > 0){
            if(T2[selection] > T2[selection-1]){
                int temp = T2[selection];
                T2[selection] = T2[selection-1];
                T2[selection-1] = temp;
            }
            selection--;
        }
    }

    printf("\n Nilai juru masak 2 setelah diurutkan:");
    for(int i = 0; i < length2 ;i++){
        printf("%d",T2[i]);
    }

// Total 3 terbesar nilai juru masak 2 //
    for ( int i = 0; i < (length2 -2); i++ ) {
        sum2 += T2[ i ];
    }
    printf("\n Total 3 nilai terbesar juru masak 2 adalah: %d",sum2);
    printf("\n");


   printf("\n Pemenangnya adalah : ");
    if(sum1 > sum2){
        printf("Juru masak 1 !");
    }else if(sum1 < sum2){
        printf("Juru masak 2 !");
    }else if(sum1 == sum2){
        printf("Pertandingan seri");
    }
    printf("\n");
    return 0;


}
