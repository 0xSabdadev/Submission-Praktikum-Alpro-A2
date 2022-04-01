/*Nama File 	: DNAKambingDinamis.c*/
/*Deskripsi 	: Menghitung jumlah saudara yang dimiliki kambing berdasarkan selisih DNA menggunakan array dinamis*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 1/4/2022*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void){
    // Kamus
    int *DNAKambing, N, i, j, sel, Saudara, NotSaudara;

    // Algoritma
    printf("Masukkan banyaknya kambing = ");
    scanf(" %d", &N);
    DNAKambing = (int *)malloc(N*sizeof(int));

    if (N <= 0 ){
        printf("Masukan banyak kambing harus integer positif!");
    }
    else{
        for(i=1; i<=N;i++){
            printf("Masukkan DNA Kambing ke-%d = ", i);
            scanf(" %d", DNAKambing+(i-1));
        }
    }
    printf("\n");

    for(i=0; i<N; i++){
        Saudara = 0;
        NotSaudara = 0;
        for(j=N-1; j>=0; j--){
            if(i == j){
                Saudara += 0;
                NotSaudara += 0;
            }
            else if(i < j){
                sel = *(DNAKambing+j) - *(DNAKambing+i);
                if(sel < 3){
                    Saudara += 1;
                }
                else{
                    NotSaudara += 1;
                }
            }
            else if(i > j){
                sel = *(DNAKambing+i) - *(DNAKambing+j);
                if(sel < 3){
                    Saudara += 1;
                }
                else{
                    NotSaudara += 1;
                }
            }
        }
        printf("Kambing ke-%d\n", i+1);
        printf("Jumlah Saudara = %d\n", Saudara);
        printf("Jumlah Bukan Saudara = %d\n", NotSaudara);
        printf("\n");
    }
    free(DNAKambing);






    return 0;
}

