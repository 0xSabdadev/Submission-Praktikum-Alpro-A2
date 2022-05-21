/*Nama File 	: NextSorcererSupreme.c*/
/*Deskripsi 	: Menentukan Sorcerer Supreme selanjutnya dengan memanfaatkan sequential file*/
/*Pembuat   	: 24060121130081 - Rizky Akhmad Fahreza*/
/*Tgl Pembuatan	: 21/05/2022*/

#include <stdio.h> /*header file*/
#include <string.h>
#include <stdlib.h>

// procedure menukar string dari data array
void swap(char *str1, char *str2){
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
} 

/*Program Utama*/
int main(void){
    // Kamus
    int T , N;
    char Nama[255][255];
    int MagicQuotent[255];
    FILE *fileku = fopen("input.txt", "r");
    if (!fileku) //if(fileku == null)
    {
        printf("tidak ada file");
    }
    else{
        fscanf(fileku, "%d %d", &T, &N);
        while (!feof(fileku))
        {
            for (int i = 0; i < T; i++)
            {
                fscanf(fileku, "%s %d", &Nama[i], &MagicQuotent[i]);
                fflush(stdin);
            }
        }
        fclose(fileku);
    }
    
    // Algoritma
    // mengurutkan data magic menggunakan selection sort
    for(int i=0;i<T-1;i++){
        int selectedInt = i;
        for(int j=i;j<T;j++){
            if(MagicQuotent[selectedInt] < MagicQuotent[j]){
                selectedInt = j;
            }
        }
        int temp = MagicQuotent [i];
        MagicQuotent[i] = MagicQuotent[selectedInt];
        MagicQuotent[selectedInt] = temp;
        // Swap nama untuk mengikuti urutan magic
        swap(Nama[i], Nama[selectedInt]);
    }

    // output
    for (int i = 0; i < N; i++){
        if(MagicQuotent[i] == MagicQuotent[i+1]){ 
            //jika terjadi kesamaan magic maka akan diurutkan berdasarkan leksikografi
            char temp[999];
            if (strcmp(Nama[i], Nama[i+1]) > 0){
                strcpy(temp, Nama[i]);
                strcpy(Nama[i], Nama[i+1]);
                strcpy(Nama[i+1], temp);
            }
            printf("%s\n", Nama[i]);
            fflush(stdin);
        }
        else{
            printf("%s\n", Nama[i]);
            fflush(stdin);
        }
    }
    
    return 0;
}

