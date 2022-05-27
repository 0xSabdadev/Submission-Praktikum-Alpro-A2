//Nama File 	: kandidatSorcererSupreme.c
//Pembuat   	: Fairuz Fachrizal Adyatma - 24060121140121
//Tgl Pembuatan	: 21 Mei 2022
//Deskripsi 	: Menentukan Sorcerer Supreme selanjutnya dengan memanfaatkan sequential file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *str1, char *str2){
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}

int main(void){
    int T , N;
    char Nama[255][255];
    int MagicQuotent[255];
    FILE *fileku = fopen("kandidat.txt", "r");
    if (!fileku)
    {
        printf("file tidak terdeteksi");
    }
    else{
        fscanf(fileku, "%d %d", &T, &N);
        while (!feof(fileku))
        {
            for (int i = 0; i < T; i++)
            {
                fscanf(fileku, "%s %d", &Nama[i], &MagicQuotent[i]);

            }
        }
        fclose(fileku);
    }

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
        swap(Nama[i], Nama[selectedInt]);
    }

    for (int i = 0; i < N; i++){
        if(MagicQuotent[i] == MagicQuotent[i+1]){
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
