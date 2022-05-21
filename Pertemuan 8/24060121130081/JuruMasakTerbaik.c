/*Nama File 	: JuruMasakTerbaik.c*/
/*Deskripsi 	: Menentukan juru masak terbaik berdasarkan 3 nilai terbesar penilaian juri*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 29/4/2022*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

// procedure
void sort(int T[], int N){
    // Menggunakan selection sort descending
    // logic
    for(int i = 0;i<N-1;i++){
        int selectedInt = i;
        for(int j=i;j<N;j++){
            if (T[selectedInt] < T[j]){
                selectedInt = j;
            }
        }
        int temp = T[i];
        T[i] = T[selectedInt];
        T[selectedInt] = temp;
    }
    
}

// function
int TotalNilai(int T[]){
    int Total = 0;
    for(int i = 0; i<=2;i++){
        Total = Total + T[i];
    }
    return Total;
}

/*Program Utama*/
int main(void){
    // Kamus
    int N = 5;
    int T1[N];
    int T2[N];

    printf("Masukkan nilai juru masak 1 yang diberikan juri:\n");
    for(int i = 0;i<N;i++){
        scanf("%d", &T1[i]);
    }
    printf("\n");
    printf("Masukkan nilai juru masak 2 yang diberikan juri:\n");
    for(int i = 0;i<N;i++){
        scanf("%d", &T2[i]);
    }

    printf("\n");
    // Algoritma
    sort(T1, N);
    sort(T2, N);

    if (TotalNilai(T1) == TotalNilai(T2)){
        printf("Pertandingan Seri");
    }
    else{
        if(TotalNilai(T1) > TotalNilai(T2)){
            printf("Juru Masak 1 Menang");
        }
        else{
            printf("Juru Masak 2 Menang");
        }
    }
    return 0;
}

