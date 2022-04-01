//Nama          : Muhammad Dzaki Prasetyo
//Nim           : 24060121140127
//Tanggal       : 1 April 2022
//Nama Program  : DNAKambingDinamis.c
//Deskripsi     : Menentukan DNA kambing bersaudara atau tidak dengan menggunakan array dinamis.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr,i, N,j,k,Bersaudara,TidakBersaudara;

    // Algoritma
    printf("Masukkan banyaknya data DNA : ");
    scanf("%d",&N);
    Bersaudara = 0;
    TidakBersaudara =0;
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d : ",i);
            scanf("%d",ptr+i);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(*(ptr+j)-*(ptr+k)<3){
                    Bersaudara++;
                }
                else{
                    TidakBersaudara++;
                }
            }
        }
        free(ptr);
        printf("Jumlah Kambing Bersaudara %d dan Tidak Bersaudara %d",Bersaudara,TidakBersaudara);
    } else{
        printf("Inputan tidak valid");
    }
    return 0;
}
