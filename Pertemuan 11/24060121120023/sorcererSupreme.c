/*Nama File 	: sorcererSupreme.c*/
/*Deskripsi 	: Membantu Ancient One dalam mencari kandidat terbaik untuk sorcerer supreme*/
/*Pembuat   	: <24060121120023-Arynda Anna Salsabiela>*/
/*Tgl Pembuatan	: <Sabtu, 21 Mei 12.00>*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

//Fungsi swap untuk menukar string
void swap(char **a, char **b) {
  char *temp = (char *)malloc((strlen(a) + 1) * sizeof(char));
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
  free(temp);
}

int main(void)
{
    //Kamus
    int N, T;
    char nama[255][255];
    int magic[255];

    //Algoritma
    printf("Masukkan jumlah keseluruhan kandidat: ");
    scanf("%d", &N);

    printf("Masukkan jumlah kandidat yang dibutuhkan: ");
    scanf("%d", &T);

    //File txt
    FILE *fileku = fopen("sorcererSupreme.txt", "w");

    for(int i = 0; i<N;i++) {
        printf("Masukkan nama ke-%d: ", i+1);
        scanf("%s", &nama[i]);
        printf("Masukkan magic ke-%d: ", i+1);
        scanf("%d", &magic[i]);
    }

    //Sorting magic quotent dari terbesar menggunakan selection sort
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

        //Swap nama agar urutannya mengikuti magic
        swap(nama[max],nama[pass]);

    }

    for(int i = 0;i<N; i++) {
        //Menghapus isi array lainnya selain kandidat yang diperlukan
        if(i>=T) {
            strcpy(nama[i], "");
        }

        //Jika magic sama, pengurutan sesuai leksikografis
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
        //Menulis ke file txt sorcerer supreme dengan kandidat terkuat
        fprintf(fileku,"%s\n", nama[i]);
    }

    //Close file txt
    fclose(fileku);

    return 0;
}

