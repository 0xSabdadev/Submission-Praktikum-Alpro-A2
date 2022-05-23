/* Nama FIle    : KelBil.c
   Nama         : Annisa Kumala Dewi
   NIM          : 24060121120025
   Lab          : Alpro A2
   Tanggal      : 31 Maret 2022, 23.04
   Deskripsi    : Mencari kelipatan terkecil (kpk) dari anggota array of integer*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr;
    int i;
    int j;
    int N;
    int k;
    int KPK;

    // Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    KPK = 1;
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan ke %d  (urut dari yang terkecil ke yang terbesar) : ",i);
            scanf("%d",ptr+i);
        }
        for(j=1;j<=N;j++){
            if(*(ptr+j)%KPK==0){
                KPK = *(ptr+j);
            }
            else{
                KPK = KPK*(*(ptr+j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d",KPK);
    }else{
        printf("Inputan tidak valid");
    }
    return 0;
}
