// Nama Pembuat : Fairuz Fachrizal Adyatma 24060121140121
// Tanggal      : 30 Maret 2022
// Nama Program : DNAKambingDinamis.c
/* Deskripsi    : mennentukan banyak kambing yang bersaudara dan tidak bersaudara*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr,a,b,c,d,saudara,tdksaudara;

    //Algoritma
    printf("Masukkan banyaknya DNA: ");
    scanf("%d", &b);
    saudara = 0;
    tdksaudara = 0;
    if(b>0){
        ptr = (int *)malloc(b*sizeof(int));
        for(a=1;a<=b;a++){
            printf("Masukkan DNA ke %d ",a);
            scanf("%d",ptr+a);
        }
        for(c=b;c>1;c--){
            for(d=1;d<c;d++){
                if(*(ptr+c)-*(ptr+d)<3){
                    saudara++;
                }
                else{
                    tdksaudara++;
                }
            }
        }
        free(ptr);
        printf("Jumlah Kambing Bersaudara adalah %d dan yang Tidak Bersaudara %d",saudara,tdksaudara);
    } else{
        printf("Invalid");
    }
    return 0;
}
