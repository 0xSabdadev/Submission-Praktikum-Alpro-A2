/*Nama File 	: sorcererSupreme.c*/
/*Deskripsi 	: Membantu Ancient One dalam mencari kandidat terbaik untuk Sorcerer Supreme*/
/*Pembuat   	: 24060121140141 - Muhammad Afiat Yulianto*/
/*Tgl Pembuatan	: 21 Mei 2022, 19.37*/

#include <stdio.h>
#include <stdlib.h>

//Fungsi swap untuk menukar string
void swap(char **a, char **b){
  char *temp = (char *)malloc((strlen(a) + 1) * sizeof(char));
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
  free(temp);
}

int main()
{
  /*Kamus*/
  int N, T;
  char nama[255][255];
  int magic[255];

  /*Algoritma*/
  printf("Masukkan jumlah keseluruhan kandidat: ");
  scanf("%d", &N);
  printf("Masukkan jumlah kandidat yang dibutuhkan: ");
  scanf("%d", &T);

  //membuat file txt
    FILE *fileku = fopen("sorcererSupreme.txt", "w");

    for(int i = 0; i<N;i++){
        printf("masukkan nama ke %d: ", i+1);
        scanf("%s", &nama[i]);
        printf("masukkan magic ke %d: ", i+1);
        scanf("%d", &magic[i]);
    }

  //Sorting magic quotent dari terbesar dengan selection sort
  for(int pass = 0;pass<N;pass++){
      int max = pass;
      for(int i=pass+1; i<=T;i++) {
          if(magic[max]< magic[i]) {
              max = i;
          }
      }
      int temp = magic[max];
      magic[max] = magic[pass];
      magic[pass] = temp;

  //Swap nama agar urutannya mengikuti urutan magic
  swap(nama[max],nama[pass]);

  }

  for(int i = 0;i<N; i++){

  //Menghapus isi array lainnya selain kandidat yang diperlukan
  if(i>=T){
      strcpy(nama[i], "");
  }

  //Jika magix sama, dilakukan pengurutan sesuai leksikografis
  if(magic[i]==magic[i+1]){

  //Sorting dengan bubble sort
  char temp[255];
  for(int i=0; i<T-1; i++){
      for(int j=i+1;j<T; j++){
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

  //close file txt
  fclose(fileku);

  return 0;
}
