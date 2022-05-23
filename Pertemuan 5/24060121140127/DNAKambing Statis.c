//Nama          : Muhammad Dzaki Prasetyo
//Nim           : 24060121140127
//Tanggal       : 28 Maret 2022
//Nama Program  : DNAKambingStatis.c
//Deskripsi     : Menentukan DNA kambing bersaudara atau tidak dengan menggunakan array statis
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Kamus
    int i,j,k,N,Bersaudara,TidakBersaudara;

    //Algoritma
    printf("Masukkan banyak DNA : ");
    scanf("%d", &N);
    Bersaudara = 0;
    TidakBersaudara = 0;
    if(N>0){
        int DNA[N];
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke : ");
            scanf("%d",&DNA[i]);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(DNA[j]-DNA[k]<3){
                    Bersaudara++;
                }
                else{
                    TidakBersaudara++;
                }
            }
        }
        printf("Jumlah kambing bersaudara %d dan tidak bersaudara %d",Bersaudara,TidakBersaudara);
        }else{
            printf("Inputan tidak valid");
        }
        return 0;
}
