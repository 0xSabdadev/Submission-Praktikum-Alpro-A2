// Nama File            : countingSortDesc.c
// Deskripsi            : Melakukan sorting dengan metode counting sort dengan urutan menurun atau descending
// Pembuat              : 24060121130071 - Fahriant Ekrie
// Tanggal Pembuatan    : 28 April 2022


#include <stdlib.h>
#include <stdio.h>

int main(void){

    // Kamus Lokal
    int A[15],B[15],C[100],i,j,k,n;
    k = 0;
    // Input
    printf("masukkan jumlah array : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("masukkan nilai array ke-%d : ",i);
        scanf("%d",&A[i]);
        if(A[i] > k){
            k = A[i];
        }
    }

    // Algoritma
        // Menampilkan array sebelum sort
    printf("--Sebelum-- \n");
    for(i=1;i<=n;i++){
        printf("%d ", A[i] );
    }

    // logic
        // Step 1 Mengisi Array C dengan 0
    for(i=0;i<=k;i++){
        C[i] = 0;
    }

        // Step 2 Mengisi Array C berdasarkan elemen Array A
    for(j=1;j<=n;j++){
        C[A[j]] = C[A[j]] + 1;
    }
        // Step 3 Menambahkan setiap index C dengan index Sebelumnya
    for(i=1;i<=k;i++){
        C[i] = C[i] + C[i-1];
    }

        // Step 4 Menempatkan sort berdasarkan urutan pada array C
        // dengan kondisi descending yaitu posisi pada array B dibalik dari yang ascending
    for(j=n;j>=1;j--){
        B[(n+1) - C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    // output
    printf("\n--Sesudah--\n");
    for(i=1;i<=n;i++){
        printf("%d ", B[i] );
    }

    return 0;
}
