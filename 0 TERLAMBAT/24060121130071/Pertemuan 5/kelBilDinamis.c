// Nama File        : KelBilDinamis.c
// Nama Pembuat     : Fahriant Ekrie
// NIM              : 24060121130071
// Tanggal          : 27 Mei 2022
// Deskripsi        : menentukan kelipatan faktor terkecil dari suatu array*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *bilKe, i, N,j,k,lipat;

    // Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    lipat = 1;
    bilKe = (int *)malloc(N*sizeof(int));

        for(i = 1;i <= N; i++){
            printf("Masukkan Bilangan ke %d : ",i);
            scanf("%d",bilKe+i);
        }
        for(j=1;j<=N;j++){
            if(*(bilKe+j)%lipat==0){
                lipat = *(bilKe+j);
            }
            else{
                lipat = lipat*(*(bilKe+j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d", lipat);

    return 0;
}
