// Nama         : Darrel Arsa Putranto
// NIM          : 24060121140155
// Tanggal      : 1 April 2022
// Nama Program : DNAKambing.c
/* Deskripsi    : mennentukan banyak kambing yang bersaudara dan tidak bersaudara*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, N,j,k,bersaudara,tidakbersaudara;

    // Algoritma
    printf("Masukkan banyaknya data DNA: ");
    scanf("%d",&N);
    bersaudara = 0;
    tidakbersaudara =0;
    if(N>0){
        int DNA[N];
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d ",i);
            scanf("%d",&DNA[i]);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(DNA[j]-DNA[k]<3){
                    bersaudara++;
                }
                else{
                    tidakbersaudara++;
                }
            }
        }
        printf("Jumlah Kambing Bersaudara adalah %d dan yang Tidak bersaudara %d",bersaudara,tidakbersaudara);
    } else{
        printf("Inputan tidak valid");
    }
    retur
