/*Nama File 	: No1.c*/
/*Deskripsi 	: menentukan kandidat terbaik untuk sorcerer supreme*/
/*Pembuat   	: 24060121140169-Majid Ilham Adhim*/
/*Tgl Pembuatan	: 21 mei 2022 - 19.23*/

#include <stdio.h>
#include <stdlib.h>


void swap(char **a, char **b) {
  char *temp = (char *)malloc((strlen(a) + 1) * sizeof(char));
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
  free(temp);
}

int main(void)
{
    //kamus
    int N, T,i,pass,j;
    char nama[255][255];
    int magic[255];
    //logic
    printf("masukkan jumlah keseluruhan kandidat: ");
    scanf("%d", &N);
    printf("masukkan jumlah kandidat yang dibutuhkan: ");
    scanf("%d", &T);
    //membuat file txt
    FILE *fileku = fopen("sorcererSupreme.txt", "w");
    for(i = 0; i<N;i++) {
        printf("masukkan nama ke %d: ", i+1);
        scanf("%s", &nama[i]);
        printf("masukkan magic ke %d: ", i+1);
        scanf("%d", &magic[i]);
    }
    for(pass = 0;pass<N;pass++) {
        int max = pass;
        for(i=pass+1; i<=T;i++) {
            if(magic[max]< magic[i]) {
                max = i;
            }
        }
        int temp = magic[max];
        magic[max] = magic[pass];
        magic[pass] = temp;
        swap(nama[max],nama[pass]);

    }
    for(i = 0;i<N; i++) {

        if(i>=T) {
            strcpy(nama[i], "");
        }
        // dilakukan pengurutan sesuai leksikografis
        if(magic[i]==magic[i+1]) {
            char temp[255];
            for (i=0; i<T-1; i++){
                for (j=i+1;j<T; j++){
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


