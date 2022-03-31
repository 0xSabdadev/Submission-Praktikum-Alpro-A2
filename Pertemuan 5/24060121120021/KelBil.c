/*Nama File :  KelBil.c*/
/*Nama Pembuat : Resma Adi Nugroho */
/*Tanggal : 30 Maret 2022 */
/*Deskripsi : menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer A sebarang*/

#include<stdio.h>
#include<stdlib.h>

// Program Utama
int main(void){
    // Kamus
    int N,i,min,min2;
    
    // Algoritma
    printf("===========================================\n");
    printf("========Program Kelipatan Bilangan=========\n");
    printf("Masukan banyak bilangan : ");
    scanf("%d",&N);
    
    int A[N]; // Deklarasi array A dengan ukuran dari masukan N

    if(N>0){
        for(i=0;i<N;i++){
            printf("Masukan bilangan ke-%d : ",i+1);
            scanf("%d",&A[i]);
        }
        for(i=0;i<N;i++){
            if(A[i]<min){
                min = A[i];
            }
        }
        for(i=0;i<N;i++){
            if(A[i]!=min){
                if(A[i]*min<min2){
                    min2 = A[i]*min;
                }
            }
        }
        printf("Kelipatan terkecilnya : %d",min2);
    } else {
        printf("Masukan harus lebih dari 0");
    }
    return 0;
}
