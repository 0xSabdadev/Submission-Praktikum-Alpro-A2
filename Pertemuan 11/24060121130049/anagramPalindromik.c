/*Nama File 	: anagramPalindromik.c*/
/*Deskripsi 	: membantu sherloc homies untuk memecahkan password*/
/*Pembuat   	: 24060121130049- Kristian David Adi Prasetya*/
/*Tgl Pembuatan	: 21 mei 2022 - 17.20*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mChar.c"

// fungsi swap huruf
void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// fungsi permutasi dan palindrom
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


    } else {
        // fungsi rekursif untuk mencari permutasi lain
        for (i = l; i <= r; i++){
            swap((a+l), (a+i));
            permupalin(a, l+1, r);
            swap((a+l), (a+i));
        }

    }

}


int main()
{
    //kamus
    char *a[255];
    char S[255];
    int N;

    //algoritma/logic
    printf("masukkan kata: ");
    scanf("%s", &S);

    N =strlen(S);

    int i = 0;
    char temp[255];
    for(int j = 0; j<N;j++) {
        for(int k=N; k>=0;k--) {
            if((j!=k) && (S[j]==S[k])) {
                temp[j] = S[j];
                temp[j-1] = temp[j];
            }
        }
    }

    for(int i=0; i<=N;i++) {
        permupalin(S,i,N-1);
    }

    START();
    while(!EOP()) {
        INC();
    }



    return 0;
}
