/*Nama File 	: KelBil.c*/
/*Deskripsi 	: menentukan kelipatan faktor terkecil dari suatu array menggunakan array dinamis*/
/*Pembuat   	: Kristian David Adi Prasetya - 24060121130049*/
/*Tgl Pembuatan	: 1 April 2022 - 12.51*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int *bil, N, i, j,kelipatan = 1;

    //algoritma
    printf("masukan size array: ");
    scanf("%d", &N);
    bil = (int *)malloc(N*sizeof(int));

    if(bil == NULL) {
        printf("size penuh");
    }

    if(N>0){

        for(i=1; i <= N; i++){
            printf("Masukkan Bilangan mulai dari terkecil ke %d: ",i);
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
