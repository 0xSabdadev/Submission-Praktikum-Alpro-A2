/* Nama File    : DNAKambingDinamis.c
   Nama         : Annisa Kumala Dewi
   NIM          : 24060121120025
   Lab			: Alpro A2
   Deskripsi    : Menghitung banyaknya kambing bersaudara tanpa array dinamis
   Tanggal      : Jum'at, 1 April 2022*/


#include<stdio.h>
#include<stdlib.h>

int main(void){
    /* Kamus */
    int N;
    int i;
    int j;
    int BS; // bukan saudara
    int S; // saudara
    int *DNA;

 printf("Masukkan nilai n: ");
    scanf("%d",&N);
    DNA=(int *)malloc(N*sizeof(int));
    S = 0;
    BS = 0;
    if(N>0){
        for(i=0;i<N;i++){
            printf("Masukan DNA ke-%d : ",i+1);
            scanf("%d",DNA+i);
        }
        for(i=0;i<N-1;i++){
            for(i=j+1;i<N;i++){
               if(abs(*(DNA+j)-(*(DNA+i)))<3){
                    S++;
                } else {
                    BS++;
                }
            }
        }
        printf("Jumlah kambing yang bersaudara : %d \n", S);
        printf("Jumlah kambing yang tidak bersaudara : %d \n", BS);
    } else {
        printf("Masukkan harus lebih dari 0");
    }
    return 0;
}
