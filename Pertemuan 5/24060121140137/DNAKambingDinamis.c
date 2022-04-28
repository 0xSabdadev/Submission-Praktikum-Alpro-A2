/*Nama File	    : DNAKambingDinamis.c
Deskripsi	    : Menentukan banyak kambing yang bersaudara dan tidak bersaudara
Pembuat	        : Angga Syaputra - 24060121140137
Tgl pembuatan	: Jum'at, 1 April 2022*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr,i, N,j,k,bersaudara,tidakbersaudara;

    // Algoritma
    printf("Masukkan banyaknya data DNA : ");
    scanf("%d",&N);
    bersaudara = 0;
    tidakbersaudara =0;
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke : %d ",i);
            scanf("%d",ptr+i);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(*(ptr+j)-*(ptr+k)<3){
                    bersaudara++;
                }
                else{
                    tidakbersaudara++;
                }
            }
        }
        free(ptr);
        printf("Jumlah Kambing Bersaudara adalah %d dan yang Tidak bersaudara %d",bersaudara,tidakbersaudara);
    } else{
        printf("Inputan tidak valid");
    }
    return 0;
}
