
// Nama File        : DNAKambingStatis.c
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
    int kambingA[N], kambingB[N], sama = 0, beda = 0;

    //Algoritma
    printf("Masukkan Jumlah DNA yang ada : \n");
    scanf("%d", &N);

    printf("masukkan DNA Kambing A : ");
    for(i = 1; i <= N; i++){
        scanf("%d", &kambingA[i]);
    }

    printf("masukkan DNA Kambing B : ");
    for(i = 1; i <= N; i++){
        scanf("%d", &kambingB[i]);
    }

    for(i = 1; i <= N; i++){
        if (kambingA[i] == kambingB[i])
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
        printf("Kambing Berasudara");
    }

    return 0;
}

