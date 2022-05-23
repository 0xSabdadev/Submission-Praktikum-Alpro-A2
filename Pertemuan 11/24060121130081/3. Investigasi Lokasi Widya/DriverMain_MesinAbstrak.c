/*Nama File 	: DriverMain_MesinAbstrak.c*/
/*Deskripsi 	: Menhitung jumlah substring dari string yang dimasukkan, yang anagram dari T jumlah substring tersebut palindromik.*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 21/5/2022*/

#include <stdio.h> /*header file*/
#include <string.h>
#include <stdlib.h>
#include "MesinAbstrak.c"

void swap(char *str1, char *str2){
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
} 

//permutasi dan palindrom
void permupalin(char *a, int l, int r)
{
    //mencari permutasi dari kemungkinan penyusunan huruf
    int i;
    if (l == r) {
        int p = 0;
        int h = strlen(a) - 1;

        // pengecekan palindrom atau bukan dari huruf yang sudah disusun
        while (h > p){
            if (a[p++] != a[h--]){
                printf("%s bukan palindrom\n", a);
                return;
            }
        }
        printf("%s adalah palindrom\n", a);
    } 
    else {
        // fungsi rekursif untuk mencari permutasi lain
        for (i = l; i <= r; i++){
            swap((a+l), (a+i));
            permupalin(a, l+1, r);
            swap((a+l), (a+i));
        }

    }

}


/*Program Utama*/
int main(void){
    // Menjalankan mesin
    START();
    GETCC();
    while (!EOP())
    {
        INC();
        GETCC();
    }

//  Algoritma
    int N = strlen(String);
    int i = 0;
    char temp[255];
    for(int j = 0; j<N;j++) {
        for(int k=N; k>=0;k--) {
            if((j!=k) && (String[j]==String[k])) {
                temp[j] = String[j];
                temp[j-1] = temp[j];
            }
        }
    }

    for(int i=0; i<=N;i++) {
        permupalin(String,i,N-1);
    }
    // printf("%d", N);

    return 0;
}

