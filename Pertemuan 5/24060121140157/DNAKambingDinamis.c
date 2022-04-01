/* 
Nama File: DNAKambingDinamis.c
Deskripsi: menghitung dan menampilkan jumlah saudara kambing berdasarkan DNA
Pembuat: Muhamad Aditya Yusuf Jatikusumo
Tgl Pembuatan:28 Maret 2022
*/


#include <stdio.h>
#include <stdlib.h>

//Program Utama
int main(){
// kamus Lokal
    int N, i, j, nSaudara=0, notSaudara=0, *ptr;
// Algoritma
    printf("Masukkan input:");
    scanf("%d", &N);
    if(N <= 0) printf("N harus positif");
    else{
        ptr = (int*) malloc(N * sizeof *ptr);
        for(i = 0; i < N; i++) scanf("%d", ptr + i);
        for(i = 0; i < N; i++){
            for(j = i+1; j < N; j++){
                if(T[j] - T[i] < 3) nSaudara++;
                else notSaudara++;
            }
        }
        printf("%d,%d", nSaudara, notSaudara);
    }
    free(ptr);
    return 0;
}