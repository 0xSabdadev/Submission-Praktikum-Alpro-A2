/* Nama file	: DNAKambingStatis.c */
/* Deskripsi    : Menentukan jumlah kambing yang bersaudara dan tidak bersaudara */
/* Pembuat		: 24060121130065 - Raihan Gilang Firdausy */
/* Tanggal      : 31 Maret 2022, 21.00 WIB */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Program Utama */

int main(){
	
	/* Kamus */
    int i, N,j,k,bersaudara,tidakbersaudara;

    /* Algoritma */
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
        printf("Jumlah kambing bersaudara adalah %d dan yang tidak bersaudara %d",bersaudara,tidakbersaudara);
    } else{
        printf("Inputan tidak valid");
    }
    return 0;
}
