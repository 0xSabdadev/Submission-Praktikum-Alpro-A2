// Nama File            : KokiTerbaik.c
// Deskripsi            : Melakukan sorting dengan metode counting sort dengan urutan menurun atau descending
// Pembuat              : 24060121130071 - Fahriant Ekrie
// Tanggal Pembuatan    : 28 April 2022


#include <stdlib.h>
#include <stdio.h>

int main(void){

    // Kamus Lokal
    int A1[15],B1[15],C1[10],i,j,k1,k2,n;
    int A2[15],B2[15],C2[10],sum1,sum2;
    k1 = 0;
    k2 = 0;
    sum1 = 0;
    sum2 = 0;
    // Input
        printf("Masukkan nilai koki Pertama : \n");
        for(i=1;i<=5;i++){
        printf("masukkan nilai array ke-%d : ",i);
        scanf("%d",&A1[i]);
        if(A1[i] > k1){
            k1 = A1[i];
        }
    }
        printf("Masukkan nilai koki Kedua : \n");
        for(i=1;i<=5;i++){
        printf("masukkan nilai array ke-%d : ",i);
        scanf("%d",&A2[i]);
        if(A2[i] > k2){
            k2 = A2[i];
        }
    }

    // Algoritma
        // Menampilkan array sebelum sort
    printf("--Nilai Koki Sebelum Diurutkan--\n");
    printf("Koki Pertama : \n");
    for(i=1;i<=5;i++){
        printf("%d ", A1[i] );
    }
    printf("\nKoki Kedua : \n");
    for(i=1;i<=5;i++){
        printf("%d ", A2[i] );
    }
    // logic
    // Nilai Koki Pertama
            // Step 1 Mengisi Array C dengan 0
        for(i=0;i<=k1;i++){
            C1[i] = 0;
        }

            // Step 2 Mengisi Array C berdasarkan elemen Array A
        for(j=1;j<=5;j++){
            C1[A1[j]] = C1[A1[j]] + 1;
        }
            // Step 3 Menambahkan setiap index C dengan index Sebelumnya
        for(i=1;i<=k1;i++){
            C1[i] = C1[i] + C1[i-1];
        }

            // Step 4 Menempatkan sort berdasarkan urutan pada array C
            // dengan kondisi descending yaitu posisi pada array B dibalik dari yang ascending
        for(j=5;j>=1;j--){
            B1[6 - C1[A1[j]]] = A1[j];
            C1[A1[j]] = C1[A1[j]] - 1;
        }

    // Nilai Koki Kedua
                // Step 1 Mengisi Array C dengan 0
        for(i=0;i<=k2;i++){
            C2[i] = 0;
        }

            // Step 2 Mengisi Array C berdasarkan elemen Array A
        for(j=1;j<=5;j++){
            C2[A2[j]] = C2[A2[j]] + 1;
        }
            // Step 3 Menambahkan setiap index C dengan index Sebelumnya
        for(i=1;i<=k2;i++){
            C2[i] = C2[i] + C2[i-1];
        }

            // Step 4 Menempatkan sort berdasarkan urutan pada array C
            // dengan kondisi descending yaitu posisi pada array B dibalik dari yang ascending
        for(j=5;j>=1;j--){
            B2[6 - C2[A2[j]]] = A2[j];
            C2[A2[j]] = C2[A2[j]] - 1;
        }


    // output
        // Menunjukan nilai setelah diurutkan
        printf("\n--Nilai Koki Sesudah Diurutkan--\n");

        printf("Koki Pertama : \n");
        for(i=1;i<=5;i++){
            printf("%d ", B1[i] );
        }

        printf("\nKoki Kedua : \n");
        for(i=1;i<=5;i++){
            printf("%d ", B2[i] );
        }
        // Menunjukan hasil pertandingan
        for(i=1;i<=3;i++){
            sum1 = sum1 + B1[i];
        }
        for(i=1;i<=3;i++){
            sum2 = sum2 + B2[i];
        }
        if(sum1 >= sum2){
            if(sum1 == sum2){
                printf("\nPertandingan Seri");
            }
            else{
                printf("\nKoki Pertama Menang");
            }
        }
        else{
            printf("\nKoki Kedua Menang");
        }

    return 0;
}
