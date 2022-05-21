/*Nama File     : Sorcerer Supreme.c*/
/*Deskripsi     : Mencari kandidat Sorcerer Supreme selanjutnya */
/*Pembuat       : 24060121140097 - Wildan Adji Prabowo*/
/*Tgl Pembuatan : 21 Mei 2022*/


#include <stdio.h>
#include <stdlib.h>

//fungsi swap untuk menukar string
void swap(char **a, char **b) {
  char *temp = (char *)malloc((strlen(a) + 1) * sizeof(char));
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
  free(temp);
}

int main(void)
{
/* kamus */
    int N, T, magic[255];
    char nama[255][255];


/*Algoritma */
    printf("Masukkan Jumlah Total Kandidat: ");
    scanf("%d", &N);

    printf("Masukkan Jumlah Kandidat Yang Dibutuhkan: ");
    scanf("%d", &T);

/* File txt */
    FILE *fileku = fopen("sorcererSupreme.txt", "w");

    for(int i = 0; i<N;i++) {
        printf("Masukkan Nama Kandidat ke %d: ", i+1);
        scanf("%s", &nama[i]);
        printf("Masukkan Magic Kandidat ke %d: ", i+1);
        scanf("%d", &magic[i]);
    }

    for(int pass = 0;pass<N;pass++) {
        int max = pass;
        for(int i=pass+1; i<=T;i++) {
            if(magic[max]< magic[i]) {
                max = i;
            }
        }
        int temp = magic[max];
        magic[max] = magic[pass];
        magic[pass] = temp;
        swap(nama[max],nama[pass]);

    }

    for(int i = 0;i<N; i++) {
        // Mencantumkan kandidat yang diperlukan //
        if(i>=T) {
            strcpy(nama[i], "");
        }

        // jika magic ada yang sama, maka dilakukan leksikografis
        if(magic[i]==magic[i+1]) {
            char temp[255];
            for (int i=0; i<T-1; i++){
                for (int j=i+1;j<T; j++){
                    if (strcmp(nama[i], nama[j]) > 0){
                        strcpy(temp, nama[i]);
                        strcpy(nama[i], nama[j]);
                        strcpy(nama[j], temp);
                    }
                }
            }
        }

        fprintf(fileku,"%s\n", nama[i]);
    }

    fclose(fileku);

    return 0;
}

