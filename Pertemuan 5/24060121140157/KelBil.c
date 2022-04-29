/* 
Nama File: KelBil.c
Deskripsi: membuat orogram kelbil
Pembuat: Muhamad Aditya Yusuf Jatikusumo
Tgl Pembuatan:28 Maret 2022
*/

//Header File
#include <stdio.h>
#include <stdlib.h>

//Program Utama
int main(){
    int i, N,j,k,kelipatan;

    // Algoritma
    printf("Masukkan input: ");
    scanf("%d",&N);
    kelipatan = 1;
    if(N>0){
        int Bilangan[N];
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan(kecil ke besar) ke %d  ",i);
            scanf("%d",&Bilangan[i]);
        }
        for(j=1;j<=N;j++){
            if(Bilangan[j]%kelipatan==0){
                kelipatan = Bilangan[j];
            }
            else{
                kelipatan = kelipatan*Bilangan[j];
            }
        }
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }else{
        printf("Inputan tidak valid");
    }
    return 0;
}