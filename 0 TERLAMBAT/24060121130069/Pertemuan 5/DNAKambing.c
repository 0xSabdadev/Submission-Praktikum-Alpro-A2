/* Nama             : Ririn Indah Cahyani */
/* NIM              : 24060121130069*/
/* Tgl Pembuatan    : 29 Maret 2022*/
/* Nama File        : DNAKambing.c */
/* Deskripsi        : menghitung dan menampilkan di layar berupa program yang mengeluarkan apakah DNAKambing
                      saudara maupun tidak saudara, dengan mempertimbangan perbedaan DNA dari array masukan*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int N, i, j, Sau, TdkSau; //Deklarasi

    //Algoritma
    printf("Masukan nilai N : "); scanf("%d", &N); //input masukan sebagai jumlah array

    int A[N]; //deklarasi array

    for(i=0; i<N; i++){   //perulangan untuk me-input nilai array
        printf("Masukan elemen ke [%d] : ", i);
        scanf("%d", &A[i]);
    }


    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if ((A[i] - A[j]) > 0){         //jika A[i] - A[j] positif
                if ((A[i] - A[j]) < 3){     //jika A[i] - A[j] <3 merupakan saudara
                    Sau += 1;               //body perulangan jika saudara
                } else {                    //jika A[i] - A[j] <3 merupakan tidak saudara
                    TdkSau += 1;            //body perulangan
                }
            } else {                        //jika A[i] - A[j] negatif
                if ((A[i] - A[j])*-1 < 3){
                    Sau += 1;
                } else {
                    TdkSau += 1;
                }
            }
        }
    }


    //Output
    printf("Jumlah saudara = %d\n", Sau);
    printf("Jumlah tidak saudara = %d", TdkSau);

    return 0;
}
