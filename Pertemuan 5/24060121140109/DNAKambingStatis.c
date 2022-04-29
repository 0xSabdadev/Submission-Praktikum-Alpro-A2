//Nama File     : DNAKambingStatis.c
//Deskripsi     : Menentukan banyak kambing yang bersaudara dan tidak bersaudara
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 01-04-2022, 10.21

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, N,j,k,Bersaudara,TidakBersaudara;

    // Algoritma
    printf("Masukkan banyak data DNA: ");
    scanf("%d",&N);
    Bersaudara = 0;
    TidakBersaudara =0;
    if(N>0){
        int DNA[N];
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d: ",i);
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
        printf("Jumlah kambing bersaudara adalah %d dan yang tidak bersaudara berjumlah %d",Bersaudara,TidakBersaudara);
    } else{
        printf("Inputan tidak valid");
    }
    return 0;
}
