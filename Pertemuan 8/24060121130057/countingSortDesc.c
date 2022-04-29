/* Nama File: countingSortDesc.c 
 Deskripsi: Implementasi Counting sort dengan urutan terbesar ke terkecil
 Pembuat: Safril Isnaini (240601211130057) 
 Tanggal Pembuatan: 29 April 2022 
 */ 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Kamus 
    int A[15], B[15], C[100], i, j, n, K;
    K = 0; // nilai maksimum tabel A

    //Algoritma 
    printf("=======COUNTING SORT DESCENDING=======\n");
    printf("Masukan size array :\n ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Masukan data ke-%d :\n ", i);
        scanf("%d", &A[i]);
        if (A[i] > K)
        {
            K = A[i]; // mencari nilai maksimum
        }
    }
    printf("Nilai maksimum array = %d\n", K);
    printf("===========Array yang belum terurut===========\n");
    for (i = 1; i <= n; i++)
    { 
        printf("%d ", A[i]);
    }
    // mengisi array dengan 0
    for (i = 0; i <= K; i++)
    {
        C[i] = 0;
    }

    // inkrementasi array C
    for (j = 1; j <= n; j++)
    {
        C[A[j]]++;
    }

    // menambahkan elemen C berdasarkan elemen sebelumnya
    for (i = K; i >= 1; i--)
    {
        C[i - 1] = C[i] + C[i - 1];
    }

    // memasukan data ke array B 
    for (j = 1; j <= n; j++)
    {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    //Output
    printf("\n===========Array yang sudah terurut===========\n");
    for (i = 1; i <= n; i++)
    { // print nilai array setelah diurutkan
        printf("%d ", B[i]);
    }
    return 0;
}