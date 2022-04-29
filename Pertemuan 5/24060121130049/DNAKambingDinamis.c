/*Nama File 	: DNAKambingDinamis.c*/
/*Deskripsi 	: menentukan kambing bersaudara atau tidak menggunakan array dinamis C*/
/*Pembuat   	: Kristian David Adi Prasetya - 24060121130049*/
/*Tgl Pembuatan	: 1 April 2022 - 13.11*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int N, i, j, k,b=0,tb=0, *DNA;

    //algoritma
    printf("masukan size array: ");
    scanf("%d", &N);
    DNA =(int *)malloc(N*sizeof(int));

    if(DNA == NULL){
        printf("size penuh");
    }

    for(i=1; i<=N; i++){
        printf("masukan nilai array ke %d : ", i);
        scanf("%d", DNA+i);
    }

    if (N>0) {
        for(j=0; j <= N; j++){
            for(k=1; k < j; k++) {
                if(abs(*(DNA+j)-*(DNA+k))>=3) {
                    tb = tb + 1;
                    printf("%d - %d = tidak bersaudara \n", *(DNA+j), *(DNA+k));

                } else {
                    b = b + 1;
                    printf ("%d - %d = bersaudara \n", *(DNA+j), *(DNA+k));
                    break;

                }

            }

        }
        printf("hasilnya %d bersaudara dan %d tidak bersaudara antara satu sama lainnya.\n", b, tb);
    } else {
        printf("masukan tidak tepat");
    }


    free(DNA);
    return 0;

}
