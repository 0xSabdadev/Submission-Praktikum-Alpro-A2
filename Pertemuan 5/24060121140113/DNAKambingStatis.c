/*Nama File 	: DNAKambingStatis*/
/*Deskripsi 	: membuat DNA Kambing dengan array statis*/
/*Pembuat   	: Rhadiyyah Ariana Saraswati*/
/*Tgl Pembuatan	: 29 Maret 2022 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 	// Kamus
    int i,j,N,k,saudara,tidaksaudara;

    // Algoritma
    printf("Membuat Program DNA Kambing: \n");
    printf("Masukkan Total Kambing : ");
    scanf("%d",&N);
    
    saudara = 0;
    tidaksaudara = 0;
    
    if(N>0){
        int T[N];
        for(i=1;i<=N;i++){
            printf("Masukkan Kambing %d : ",i);
            scanf("%d",&T[i]);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
                if(T[j]-T[k]<3){
                    saudara++;
                }
                else{
                    tidaksaudara++;
                }
            }
        }
        printf("Jumlah Kambing yang bersaudara = %d \n", saudara);
        printf("Jumlah Kambing yang tidak bersaudara = %d \n",tidaksaudara);
    } else{
        printf("Input yang dimasukkan tidak benar, masukan input lain");
    }
    return 0;
}
