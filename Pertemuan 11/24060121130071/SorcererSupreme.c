// Nama File     : SorcereSupreme.c
// Nama/NIM      : Fahriant Ekrie / 24060121130071
// Tanggal       : 22 May 2022
// Deskripsi     : Mencari sorcerer supreme dari kandidat pada file txt

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

// subprogram untuk memasukkan/menukar data dari array file
void swap(char *str1, char *str2){
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
} 

int main(void){
    // Kamus Lokal
    int X,Y;
    char name[255][255];
    int magicPwr[255];
    FILE *file = fopen("file.txt", "r");
    // Jika file tidak ditemukan
    if (!file)  
    {
        printf("file tidak ditemukan");
    }
    else{
        fscanf(file, "%d %d", &X, &Y);
        while (!feof(file))
        {
            for (int i = 0; i < X; i++)
            {
                fscanf(file, "%s %d", &name[i], &magicPwr[i]);
                fflush(stdin);
            }
        }
        fclose(file);
    }

    // Algoritma
    
    for(int i=0;i<X-1;i++){
        int swapIdx = i;
        for(int j=i;j<X;j++){
            if(magicPwr[swapIdx] < magicPwr[j]){
                swapIdx = j;
            }
        }
        int temp = magicPwr [i];
        magicPwr[i] = magicPwr[swapIdx];
        magicPwr[swapIdx] = temp;
        // Swap nama untuk mengikuti urutan magic power
        swap(name[i], name[swapIdx]);
    }

    // output
    for (int i = 0; i < Y; i++){
        if(magicPwr[i] == magicPwr[i+1]){ 
            //jika terjadi ada magic power yang sama maka akan diurutkan berdasarkan leksikografi
            char temp[999];
            if (strcmp(name[i], name[i+1]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[i+1]);
                strcpy(name[i+1], temp);
            }
            printf("%s\n", name[i]);
            fflush(stdin);
        }
        else{
            printf("%s\n", name[i]);
            fflush(stdin);
        }
    }

    return 0;
}
