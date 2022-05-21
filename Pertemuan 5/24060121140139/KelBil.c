// Nama: Thirafi Syahir Saputra
// NIM: 24060121140139
// Tanggal: 01 April 2022
// Deskripsi: Menentukan Kelipatan Faktor Terkeci dari Suatu Array

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr, p,q,r,s,kelipatan;

    // Algoritma
    printf("Masukkan banyak data: ");
    scanf("%d",&q);
    kelipatan = 1;
    if(q>0){
        ptr = (int *)malloc(q
                            *sizeof(int));
        for(p=1;p<=q;p++){
            printf("Masukkan bilangan ke %d (kecil ke besar)",p);
            scanf("%d",ptr+p);
        }
        for(r=1;r<=q;r++){
            if(*(ptr+r)%kelipatan==0){
                kelipatan = *(ptr+r);
            }
            else{
                kelipatan = kelipatan*(*(ptr+r));
            }
        }
        printf("Kelipatan terkecil adalah %d",kelipatan);
    }else{
        printf("Invalid");
    }
    return 0;
}
