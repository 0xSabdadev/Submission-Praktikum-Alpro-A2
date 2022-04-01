//Nama File     : DNAKambingDinamis.c
//Deskripsi     : Menentukan banyak kambing yang bersaudara dan tidak bersaudara
//Pembuat       : Ajeng Nurhaliza Ar Rachman - 24060121140109
//Tgl Pembuatan : 01-04-2022, 05.47

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr,i,N,j,k,Bersaudara,TidakBersaudara;

    // Algoritma
    printf("Masukkan banyak data DNA: ");
    scanf("%d",&N);
    Bersaudara = 0;
    TidakBersaudara = 0;
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d: ",i);
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
        printf("Jumlah kambing Bersaudara adalah %d dan yang tidak bersaudara berjumlah %d",Bersaudara,TidakBersaudara);
    } else{
        printf("Input tidak valid");
    }
    return 0;
}
