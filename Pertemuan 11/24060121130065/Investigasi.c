/*Nama File 	: Investigasi.c*/
/*Deskripsi 	: Membantu dalam mencari Widya yang hilang saat KKN di Desa Penari dan menentukan kepalindroman inputan*/
/*Pembuat   	: 24060121130065 - Raihan Gilang Firdausy*/
/*Tgl Pembuatan	: Sabtu, 21 Mei 2022 - 12.00*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//permutasi dan palindrom
void permupalin(char *a, int l, int r)
{
    int i;
    int count=0;
    if (l == r) {
        int p = 0;
        int h = strlen(a) - 1;

        while (h > p){
            if (a[p++] != a[h--]){
                printf("%s bukan palindrom\n", a);
                return;
            }
        }
        printf("%s adalah palindrom\n", a);


    } else {
        for (i = l; i <= r; i++){
            swap((a+l), (a+i));
            permupalin(a, l+1, r);
            swap((a+l), (a+i));
        }

    }

}

int main()
{
    char *a[255];
    char S[255];
    int N;

    printf("Masukkan kata: ");
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

    return 0;
}
