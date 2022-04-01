/*Nama File 	: DNAKambingDinamis.c*/
/*Deskripsi 	: Menghitung jumlah kambing yang bersaudara dan yang tidak dengan array dinamis*/
/*Pembuat   	: <24060121120023-Arynda Anna Salsabiela>*/
/*Tgl Pembuatan	: <Kamis, 31 Maret 2022 pukul 21.57>*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    /* Kamus */
    int n,i,j,TB,S;
    int *dna;

    /* Algoritma */
    printf("Masukkan nilai n: ");
    scanf("%d",&n);
    dna=(int *)malloc(n*sizeof(int));
    S = 0;
    TB = 0;
    if(n>0){
        for(i=0;i<n;i++){
            printf("Masukan DNA ke-%d : ",i+1);
            scanf("%d",dna+i);
        }
        for(i=0;i<n-1;i++){
            for(i=j+1;i<n;i++){
               if(abs(*(dna+j)-(*(dna+i)))<3){
                    S++;
                } else {
                    TB++;
                }
            }
        }
        printf("Kambing yang bersaudara ada %d \n", S);
        printf("Kambing yang tidak bersaudara ada %d \n", TB);
    } else {
        printf("Masukkan harus lebih dari 0");
    }
    return 0;
}
