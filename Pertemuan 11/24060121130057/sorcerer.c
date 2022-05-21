/* Nama File: sorcerer.c 
 Deskripsi: Mencari sorcerer supreme dengan melihat nilai tertinggi dan ketentuan lainnya yang telah diberikan
 Pembuat: Safril Isnaini (240601211130057) 
 Tanggal Pembuatan: 21 May 2022 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//swap string function

int main()
{
    // Kamus
    FILE *fileku;
    FILE *hasil;
    char temp[255];
    char nama[255];
    int N = 1;
    char listname[N][255];
    int juara = 1;
    int nilai[N];
    int count = 0;
    char namesort[N][255];
    int j = 0;
    // Algoritma
    //  =====Pembacaan File=====
    fileku = fopen("sorcerer.txt", "r");
    fscanf(fileku, "%d %d", &N, &juara);
    while (!feof(fileku))
    {   
        fscanf(fileku, "%s %d", &listname[count], &nilai[count]); 
        count++;
    }
/*
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", nilai[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", listname[i]);
    }
*/
    // =====Logic=====
    //mencari nilai terbesar
    int max = 0;
    // sorting nilai quotent dari terbesar dengan selection sort
    for (int pass = 0; pass < N; pass++)
    {
        int max = pass;
        for (int i = pass + 1; i <= juara; i++)
        {
            if (nilai[max] < nilai[i])
            {
                max = i;
            }
        }
        int temp = nilai[max];
        char tempname[255];
        nilai[max] = nilai[pass];
        nilai[pass] = temp;

        strcpy(tempname, listname[max]);
        strcpy(listname[max], listname[pass]);
        strcpy(listname[pass], tempname);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", nilai[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", listname[i]);
    }
    hasil = fopen("hasil.txt", "w+");
    for (int i = 0; i < juara; i++)
    {
        fprintf(hasil, "%s %d\n", listname[i], nilai[i]);
    }
    fclose(hasil);
    fclose(fileku);
    return 0;
}
