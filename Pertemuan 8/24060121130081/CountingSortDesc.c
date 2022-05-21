/*Nama File 	: CountingSortDesc.c*/
/*Deskripsi 	: Mengurutkan bilangan dari yang terbesar ke bilangan terkecil pada tabel dengan menggunakan algoritma counting sort*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 29/4/2022*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void){
    // Kamus
    int A[15], B[15], C[100], i, j, n, k;
    // Algoritma
    k = 0; // max = 0 
    printf("Masukkan size array = ");
    scanf("%d", &n);
    printf("Masukkan nilai array!\n");
    for(i=1;i<=n;i++){ // memasukkan nilai array
        scanf("%d", &A[i]);
        if (A[i]>k){
            k = A[i];
        }
    }
    printf("\n");
    printf("Nilai k = %d\n", k);
    printf("\n===Sebelum===\n");
    for(i=1;i<=n;i++){ // printf sebelum
        printf("%d ", A[i]);
    }
    // logic

    // STEP 1
    for(int i=1; i<=k+1; i++){
        C[i] = 0;
    }

    // STEP 2
    for(j=1; j<=n; j++){
        C[A[j]] = C[A[j]] + 1;
    }

    // STEP 3
    for(i=k; i>=1; i--){
        C[i] = C[i] + C[i+1];
    }

    // STEP 4
    for(j=n; j>=1; j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    // printf sesudah
    printf("\n\n===Sesudah===\n");
    for(i=1; i<=n;i++){
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

