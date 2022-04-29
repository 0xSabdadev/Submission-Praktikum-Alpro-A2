//Nama File       : juruMasakTerbaik.c
//Dekscripsi      : Membuat program dengan memanfaatkan materi sorting untuk memberikan output juru masak mana yang terbaik antara
//                  2 juru masak dengan input 5 nilai juri untuk masing-masing juru masak dan akan diambil 3 nilai terbesar
//                  yang kemudin akan dijumlahkan dan hasilkan akan di bandingkan diantara keduanya mana yang terbesar yyang menjadi terbaik
//Pembuat         : 24060121130069 - Ririn Indah Cahyani
//Tgl Pembuatanan : 25 April 2022 - 15:33

#include <stdio.h>
#include <stdlib.h>

//Kamus Global
int i, j, temp;


int Sorting(int C[]){
    //Logic
    for (i=1; i<=5-1; i++){
        for (j=i+1; j<=5; j++){
            if(C[i] < C[j]){
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }
}


int main(void){
    //Kamus Lokal
    int A[5], B[5];
    /*array A untuk juru masak 1 sedangkan array B untuk juru masak 2 */

    //Algoritma
    //input untuk juru masak 
    printf("Masukan nilai untuk juru masak 1, nilai (0-10)\n");
    for (i=1; i<=5; i++){
        printf("Masukan nilai dari juri %d : ", i);
        scanf("%d", &A[i]);
    }

    printf("\n\nMasukan nilai untuk juru masak 2, nilai (0-10)\n");
    for (i=1; i<=5; i++){
        printf("Masukan nilai dari juri %d : ", i);
        scanf("%d", &B[i]);
    }


    //Nilai Juru Masak
    printf("\n\nNilai juru masak 1: ");
    for (i=1; i<=5; i++){
        printf("%d ", A[i]);
    } 

    printf("\nNilai juru masak 2: ");
    for (i=1; i<=5; i++){
        printf("%d ", B[i]);
    } 
    printf("\n\n");

    Sorting(A);
    Sorting(B);


    //Nilai Juru Masak Setelah diurutkan
    int a=0, b=0;
    printf("Nilai juru masak 1 setelah diurutkan: ");
    for (i=1; i<=5; i++){
        printf("%d ", A[i]);
    }
    for (j=1; j<=3; j++){
        a += A[j];
    }
    printf("\nTotal nilai 3 terbesar dari juru masak 1 adalah : %d", a);

    printf("\n\nNilai juru masak 2 Setelah diurutkan: ");
    for (i=1; i<=5; i++){
        printf("%d ", B[i]);
    } 
    for (i=1; i<=3; i++){
        b += B[i];
    }
    printf("\nTotal nilai 3 terbesar dari juru masak 2 adalah : %d", b);


    printf("\n\n");

    //perbandingan 3 nilai terebesar sekaligus output
    if (a == b) {
        printf("Pertandingan seri\n");
    } else if (a>b) {
        printf("Juru masak 1 menang\n");
    } else {
        printf("Juru masak 2 menang\n");
    }
    

    return 0;
}