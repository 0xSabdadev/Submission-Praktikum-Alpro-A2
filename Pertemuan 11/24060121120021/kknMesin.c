/*Nama File 	: kknMesin.c*/
/*Deskripsi 	: Menentukan jumlah palindrome dari suatu kata*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 21 Mei 2022 12.52 WIB*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum = 0; // counter polindrom

// prosedur swapping
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// proseudr permutasi dan polindrom
void palindrom(char *a, int l, int r)
{
    int i;
    int count=0;
    if (l == r) {
        int p = 0;
        int h = strlen(a) - 1;
        while (h > p){
            if (a[p++] != a[h--]){
                return;
            }
        }
        sum++;


    } else {
        for (i = l; i <= r; i++){
            swap((a+l), (a+i));
            palindrom(a, l+1, r);
            swap((a+l), (a+i));
        }

    }

}

/*Program Utama*/
int main()
{
    /*Kamus Lokal*/
    char *a[255];
    char S[255];
    int N;
    int j,k,i; //counter

    printf("Masukan Kata: ");
    scanf("%s", &S);
    N =strlen(S);
    i = 0;
    char temp[255];
    for(j = 0; j<N;j++) {
        for(k=N; k>=0;k--) {
            if((j!=k) && (S[j]==S[k])) {
                temp[j] = S[j];
                temp[j-1] = temp[j];
            }
        }
    }

    for(i=0; i<=N;i++) {
        palindrom(S,i,N-1);
    }

    if(sum==0){
        printf("Jumlah polindrom : %d",N); // karena satu huruf itu sendiri merupakan palindrome itu sendiri
    } else {
        printf("Jumlah polindrom : %d",sum);
    }

    return 0;
}