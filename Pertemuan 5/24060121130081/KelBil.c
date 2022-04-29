/*Nama File 	: KelBil.c*/
/*Deskripsi 	: menentukan kelipatan bilangan terkecil, jika diberikan sebuah array integer A sebarang.*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 1/4/2022*/

#include <stdio.h> /*header file*/
#include <stdlib.h>
#include <math.h>

/*Program Utama*/
int main(void){
    // Kamus
    int *A, N, i, j, k, kelipatan, kali;

    // Algoritma
    printf("Masukkan banyaknya data : ");
    scanf("%d",&N);
    A = (int *)malloc(N*sizeof(int));

    if(N<=0){
        printf("Masukan harus integer positif!");
    }
    else{
        printf("Masukan harus urut dari bilangan kecil ke besar!\n");
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan ke-%d  = ", i);
            scanf("%d",A+(i-1));
        }
        kelipatan = 1;
        kali = 1;
        for(i=0;i<N;i++){
                if(*(A+i)%kelipatan==0){
                    kelipatan = *(A+i);
                }
                else{
                    kali = kali *(*(A+i));
                }
        }
        kelipatan *= kali;
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }
    free(A);

    return 0;
}

