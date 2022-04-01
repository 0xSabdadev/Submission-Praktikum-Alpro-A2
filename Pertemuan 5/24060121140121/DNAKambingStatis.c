// Nama Pembuat : Fairuz Fachrizal Adyatma 24060121140121
// Tanggal      : 30 Maret 2022
// Nama Program : DNAKambing.c
/* Deskripsi    : mennentukan banyak kambing yang bersaudara dan tidak bersaudara*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,saudara,tdksaudara;

    // Algoritma
    printf("Masukkan banyak DNA: ");
    scanf("%d",&b);
    saudara = 0;
    tdksaudara = 0;
    if(b>0){
        int DNA[b];
        for(a=1;a<=b;a++){
            printf("Masukkan DNA ke %d ",a);
            scanf("%d",&DNA[a]);
        }
        for(c=b;c>1;c--){
            for(d=1;d<c;d++){
                if(DNA[c]-DNA[d]<3){
                    saudara++;
                }
                else{
                    tdksaudara++;
                }
            }
        }
        printf("Jumlah Kambing Bersaudara adalah %d dan yang Tidak Bersaudara %d",saudara,tdksaudara);
    } else{
        printf("Invalid");
    }
    return 0;
}
