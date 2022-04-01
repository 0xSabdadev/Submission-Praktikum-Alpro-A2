//Nama File :  DNAKambingDinamis.c
//Nama Pembuat : Muhamad Ridwan Ash'shidqi
//Tanggal : 1 April 2022
//Deskripsi : Menentukan berapa banyak kambing yang bersaudara dan tidak bersaudara dari selisih kumpulan DNA Kambing

#include<stdio.h>
#include<stdlib.h>

// Program Utama
int main(void){
    // Kamus
    int N;
    int i;
    int j;
    int k; // saudara
    int L; // tidak saudara
    int *D;

    // Algoritma
    printf("Masukan jummlah DNA : ");
    scanf("%d",&N);
    D=(int *)malloc(N*sizeof(int));
    k = 0;
    L = 0;
    if(N>0){
        for(i=0;i<N;i++){
            printf("Masukan DNA ke-%d : ",i+1);
            scanf("%d",D+i);
        }
        for(i=0;i<N-1;i++){
            for(j=i+1;k<N;j++){
               if(abs(*(D+i)-(*(D+j)))<3){
                    k++;
                } else {
                    L++;
                }
            }
        }

        printf("Kambing yang bersaudara = %d\n", k);
        printf("Kambing yang tidak bersaudara : %d", L);
    } else {
        printf("bilangan harus positif");
    }
    return 0;
}
