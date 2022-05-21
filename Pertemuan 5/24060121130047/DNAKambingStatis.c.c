/*Nama File	    : DNAKambingStatis.c
Deskripsi	    : Menentukan banyak kambing yang bersaudara dan tidak bersaudara
Pembuat	        : Benjamin Franklin Saloom Sipayung - 24060121130047
Tgl pembuatan	: Jumat, 1 April 2022*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    int N;
    int j;
    int k;
    int bersaudara;
    int tidakbersaudara;

    // Algoritma
    printf("Masukkan banyaknya data DNA : ");
    scanf("%d",&N);
    bersaudara = 0;
    tidakbersaudara = 0;
    if(N>0){
        int DNA[N];
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke : %d ",i);
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
    }
    else{
        printf("Inputan tidak valid");
        return 0;
    }
}
