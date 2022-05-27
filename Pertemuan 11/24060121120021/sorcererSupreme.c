/*Nama File 	: sorcererSupreme.c*/
/*Deskripsi 	: Menentukan N kandidat sebagai sorcerer supreme dilihat dari magic power dan leksikografis*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 21 Mei 2022 12.52 WIB*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Program utama*/
int main(void)
{
    /*Kamus Lokal*/
    int nKandidat, nTerpilih, i;
    int magicPower[10];
    int restric = 0;
    char nama[10][255], temps[50];
    char (*name)[100];
    int retval;
    FILE *myFILE;

    i = 0;
    myFILE = fopen("kandidat.txt", "r");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // apabila file kandidat.txt tidak ditemukan maka akan memunculkan pesan ini
    } else {
        retval = fscanf(myFILE, "%d %d", &nKandidat, &nTerpilih);
        if(nTerpilih <= nKandidat && nKandidat >= 1 && nTerpilih >= 1) { // batasan 1 <= T <= N <= 9999
            while (retval != EOF)
            {
                retval = fscanf(myFILE, "%s %d", &nama[i], &magicPower[i]);
                i++;
            }

            name = malloc(nKandidat * sizeof(*name));
            for(int s=0;s<nKandidat;s++){ // memasukan list nama kandidat ke array name
                strcpy(name[s], nama[s]);
            }

            for(int h=0;h<nKandidat;h++){
                if(strlen(name[h])>9999 || magicPower[h]>9999 || strlen(name[h]) < 1 || magicPower[h] < 1){ // batasan untuk magic power yakni 1 <= Magic Power <= 9999
                    restric++;
                } 
            }

            if(restric == 0){   
                // Proses seleksi sorcerer berdasarkan magic power
                for(int i = 0;i<nKandidat-1;i++){
                    for(int j = 0;j<nKandidat-1;j++){
                        if(magicPower[j]<magicPower[j+1]){
                            int capacity = nKandidat + 1;
                            name = realloc(name, capacity * sizeof(*name));
                            strcpy(name[nKandidat], name[j]);
                            int temp = magicPower[j];
                            magicPower[j]=magicPower[j+1];
                            strcpy(name[j], name[j+1]);
                            magicPower[j+1]=temp;
                            strcpy(name[j+1], name[nKandidat]);
                        }
                }
                }
            
                // Seleksi berdasarkan leksikografis
                // menyimpan string ke urutan leksikografis
                for (int i = 0; i < nKandidat; ++i) {
                for (int j = i + 1; j < nKandidat; ++j) {
                   // menukar string berdasarkan urutan leksikografis
                    if (strcmp(nama[i], nama[j]) > 0) {
                        strcpy(temps, nama[i]);
                        strcpy(nama[i], nama[j]);
                        strcpy(nama[j], temps);
                    }
                }
                }

                printf("============SORCERER SUPREME============\n");
                
                for(int a=0;a<nTerpilih;a++){
                    printf("Sorcerer Terbaik ke-%d : %s %d\n",a+1,name[a],magicPower[a]); // Output sorcerer terpilih
                }
                
                
                free(name);
            } else {
                printf("Panjang nama dan Magic Power tidak boleh melebihi 9999 dan tidak kurang dari 1");
            }

        } else {
            printf("Kandidat terpilih tidak boleh lebih dari jumlah kandidat");
        }
    }
    return 0;
}