
// Nama File        : DNAKambingDinamis.c
// Nama Pembuat     : Fahriant Ekrie
// NIM              : 24060121130071
// Tanggal          : 27 Mei 2022
// Deskripsi        : Diberikan kumpulan DNA kambing dalam bilangan integer
//                    sembarang yang sudah terurut ke atas. Jika selisih DNA < 3, maka kambing tersebut bersaudara,
//                    dan jika selisih DNA >= 3, maka kambing tersebut bukan saudara

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void){
    //Kamus Lokal
    int i,N;
    int kambingA[N], kambingB[N], sama = 0, beda = 0, *dnaKeA, *dnaKeB;

    //Algoritma
    printf("Masukkan Jumlah DNA yang ada : \n");
    scanf("%d", &N);

    dnaKeA = (int *)malloc(N*sizeof(int));
    dnaKeB = (int *)malloc(N*sizeof(int));
    for(i = 1; i <= N; i++){
        printf("masukkan DNA Kambing A ke %d: ", i);
        scanf("%d", dnaKeA + 1);

    }

    for(i = 1; i <= N; i++){
        printf("masukkan DNA Kambing B ke %d: ", i);
        scanf("%d", dnaKeB + 1);
    }

    for(i = 1; i <= N; i++){
        if ( (dnaKeA + 1) == (dnaKeB + 1) )
        {
            sama += 1;
        }
        else{
            beda += 1;
        }

        }
        if(beda > 3){
            printf("Kambing bukan saudara");
        }
        else{
            printf("Kambing Bersaudara");
        }
    return 0;
}

