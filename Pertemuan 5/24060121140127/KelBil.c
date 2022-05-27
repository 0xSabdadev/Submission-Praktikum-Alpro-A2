//Nama          : Muhammad Dzaki Prasetyo
//Nim           : 24060121140127
//Tanggal       : 1 April 2022
//Nama Program  : KelBil.c
//Deskripsi     : Menentukan kelipatan faktor terkecil dari suatu array menggunakan array dinamis.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int *bil, N, i, j,kelipatan=1;

    //algoritma
    printf("Masukan banyak data : ");
    scanf("%d", &N);
    bil = (int *)malloc(N*sizeof(int));

    if(bil == NULL) {
        printf("Size penuh");
    }


    if(N>0){

        for(i=1; i <= N; i++){
            printf("Masukkan Bilangan dari terkecil ke %d : ",i);
            scanf("%d",bil+i);
        }
        int ;
        for(j=1; j<=N; j++){
            if((kelipatan%*(bil+j))==0){

            }
            else{
                kelipatan = kelipatan**(bil+j);
            }
        }
        printf("Kelipatan bilangan terkecilnya adalah %d ",kelipatan);
    } else {
        printf("masukan tidak tepat");
    }

    free(bil);


    return 0;
}
