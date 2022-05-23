/*Nama File 	: sorcererSupreme.c*/
/*Nama Pembuat  : Darrel Arsa Putranto*/
/*NIM           : 24060121140155*/
/*Deskripsi 	: membantu ancient one dalam mencari kandidat terbaik untuk sorcerer supreme*/
/*Tgl Pembuatan	: 21 mei 2022 - 14.00*/

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
    //kamus
    int N, T;
    char nama[255][255];
    int magic[255];

    //algoritma/logic
    printf("masukkan jumlah keseluruhan kandidat: ");
    scanf("%d", &N);

    printf("masukkan jumlah kandidat yang dibutuhkan: ");
    scanf("%d", &T);

    //membuat file txt
    FILE *fileku = fopen("sorcererSupreme.txt", "w");

    for(int i = 0; i<N;i++) {
        printf("masukkan nama ke %d: ", i+1);
        scanf("%s", &nama[i]);
        printf("masukkan magic ke %d: ", i+1);
        scanf("%d", &magic[i]);
    }

    // sorting magic quotent dari terbesar dengan selection sort
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

        //swap nama agar urutannya mengikuti urutan magic
        swap(nama[max],nama[pass]);

    }

    for(int i = 0;i<N; i++) {
        //menghapus isi array lainnya selain kandidat yang diperlukan
        if(i>=T) {
            strcpy(nama[i], "");
        }

        // jika magix sama, dilakukan pengurutan sesuai leksikografis
        if(magic[i]==magic[i+1]) {
            //sorting dengan bubble sort
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
        //menulis ke file txt sorcerer supreme dengan kandidat terkuat
        fprintf(fileku,"%s\n", nama[i]);
    }

    //close file txt
    fclose(fileku);

    return 0;
}


