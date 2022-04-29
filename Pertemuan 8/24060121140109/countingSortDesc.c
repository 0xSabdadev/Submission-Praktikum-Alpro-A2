//Nama File     : countingSortDesc.c
//Deskripsi     : Membuat program counting sort descending
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 29-04-2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int B[10];
    int C[100];
    int i,j,k,n;

    // Algoritma
    k = 0;
    printf("Masukkan size array: ");
    scanf("%d", &n);

    // Memasukan nilai array A
    for(i=1; i<=n; i++) {
        printf("Masukkan nilai array: ");
        scanf("%d", &A[i]);
        if(A[i]>k) {
            k = A[i];
        }
    }

    // Nilai Maksimum
    printf("\n");
    printf("Nilai k = %d\n", k);
    printf("\nNilai Sebelum: ");

    // Array A
    for(i=1; i<=n; i++) {
        printf("%d ", A[i]);
    }

    // Step 1, array C sebanyak k
    for(i = 0; i <= k; i++) {
        C[i] = 0;
    }

    // Step 2, increment dari element array A
    for(j=1; j <= n; j++) {
        C[A[j]] = C[A[j]]+1;
    }

    // Step 3, menambah elemen dengan elemen sebelum
    for(i=1;i<=k;i++) {
        C[i] = C[i] + C[i-1];
    }

    for(j=n;j>=1;j--) {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    // Print sesudah
    printf("\n\nNilai Sesudah: ");
    for(i=n;i>=1;i--) {
        printf("%d ",B[i]);
    }
    printf("\n");

    return 0;

}
