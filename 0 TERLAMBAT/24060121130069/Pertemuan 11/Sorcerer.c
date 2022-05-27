
#ifndef SORCERER
#define SORCERER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sorcerer.h"


//KAMUS GLOBAL
int A, B, i, max, pass;
char nama[9999][9999];
int magic[9999];


void Tukar(char *Arsip1, char *Arsip2) {
    char *temp = (char *)malloc((strlen(Arsip1) + 1) * sizeof(char));
    strcpy(temp, Arsip1);
    strcpy(Arsip1, Arsip2);
    strcpy(Arsip2, temp);
    free(temp);
}

void Input(){
    //algoritma/logic
    printf("masukkan jumlah keseluruhan kandidat: ");
    scanf("%d", &A);

    printf("masukkan jumlah kandidat yang dibutuhkan: ");
    scanf("%d", &B);
}

void MaxForce(){
    for(int pass = 0;pass<A;pass++) {
        int max = pass;
        for(int i=pass+1; i<=B;i++) {
            if(magic[max]< magic[i]) {
                max = i;
            }
        }
        int temp = magic[max];
        magic[max] = magic[pass];
        magic[pass] = temp;
    }
}

void Remove(){
    for(int i = 0;i<A; i++) {
    //menghapus isi array lainnya selain kandidat yang diperlukan
        if(i>=B) {
            strcpy(nama[i], "");
        }
    }
}

void Urut(){
    for(int i = 0;i<A; i++) {
        if(magic[i]==magic[i+1]) {
        //sorting dengan bubble sort
            char temp[255];
            for (int i=0; i<B-1; i++){
                for (int j=i+1;j<B; j++){
                    if (strcmp(nama[i], nama[j]) > 0){
                        strcpy(temp, nama[i]);
                        strcpy(nama[i], nama[j]);
                        strcpy(nama[j], temp);
                    }
                }
            }
        }
    }
}


void Sorcerer(){
    //OPEN
    FILE *FileOutput = fopen("Supreme.txt", "w");

    //LOGIC
    Input();
    MaxForce();
    Tukar(nama[max],nama[pass]);
    Remove();
    Urut();
    fprintf(FileOutput,"%s\n", nama[i]);
    fclose(FileOutput); 
}

#endif
