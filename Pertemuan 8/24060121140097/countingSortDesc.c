/*Nama File 	: CourtingSortDesc.c_*/
/*Deskripsi 	: Mengurutkan angka dari terbesar ke terkecil dengan menggunakan Courting Sort Descanding*/
/*Pembuat       : 24060121140097 - Wildan Adji Prabowo*/
/*Tgl Pembuatan : 29  April  2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus Lokal */
    int A[10];
    int B[10];
    int C[100];
    int x,y,z,n;

/* Algoritma */

    printf("\n");
    printf(" --- Counting Sort Descanding --- ");
    printf("\n");

// Sebelum //
    n = 0;
    printf("\n Masukkan panjang array: ");
    scanf("%d", &z);
    printf("\n");

    for(x=1; x<=z; x++) {
        printf("\ Masukkan nilai array ke-%x : ", x); //Batasnya sampai 100
        scanf("%d", &A[x]);
        if(A[x]>n) {
            n = A[x];
        }
    }

    printf("\n Nilai n = %d", n); //Nilai terbesar//
    printf("\n");

    printf("\n Nilai sebelum = ");
    for(x=1; x<=z; x++) {
        printf("%d ", A[x]);
    }

// Bikin array C sebanyak k //
    for(x = 0; x <= n; x++) {
        C[x] = 0;
    }

// Increment element array A //
    for(y=1; y <= z; y++) {
        C[A[y]] = C[A[y]]+1;
    }

// Menambahkan elemen sebelumnya //
    for(x=1;x<=n;x++) {
        C[x] = C[x] + C[x-1];
    }
// Array A ke array B diurutkan //
    for(y=z;y>=1;y--) {
        B[C[A[y]]] = A[y];
        C[A[y]] = C[A[y]] - 1;
    }

// Sesudah //
    printf("\n Nilai sesudah = "); //Diurutkan dari terbesar ke terkecil
    for(x=z;x>=1;x--) {
        printf("%d ",B[x]);
    }
    printf("\n");

    return 0;

}
