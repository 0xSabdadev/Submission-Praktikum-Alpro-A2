// Nama: Thirafi Syahir Saputra
// NIM: 24060121140139
// Tanggal: 01 April 2022
// Deskripsi: Menentukan Banyak Kambing yang Bersaudara dan Tidak Bersaudara

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int p,q,r,s,saudara,tdksaudara;

    // Algoritma
    printf("Masukkan banyak DNA: ");
    scanf("%d",&q);
    saudara = 0;
    tdksaudara = 0;
    if(q>0){
        int DNA[q];
        for(p=1;p<=q;p++){
            printf("Masukkan DNA ke %d ",p);
            scanf("%d",&DNA[p]);
        }
        for(r=q;r>1;r--){
            for(s=1;s<r;s++){
                if(DNA[r]-DNA[s]<3){
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
