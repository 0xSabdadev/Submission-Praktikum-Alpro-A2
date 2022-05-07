// Nama: Thirafi Syahir Saputra
// Tanggal: 01 April 2022
// Nama Program: DNAKambingDinamis.c
// Deskripsi: Menentukan Banyak Kambing yang Bersaudara dan Tidak Bersaudara

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr,p,q,r,s,saudara,tdksaudara;

    //Algoritma
    printf("Masukkan banyaknya DNA: ");
    scanf("%d", &q);
    saudara = 0;
    tdksaudara = 0;
    if(q>0){
        ptr = (int *)malloc(q*sizeof(int));
        for(p=1;p<=q;p++){
            printf("Masukkan DNA ke %d ",p);
            scanf("%d",ptr+p);
        }
        for(r=q;r>1;r--){
            for(s=1;s<r;s++){
                if((ptr+r)-(ptr+s)<3){
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
