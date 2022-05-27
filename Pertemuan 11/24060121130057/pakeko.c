/* Nama File: pakeko.c 
 Deskripsi: membantu mencari maahasiswa yang lolos ujian dengan masukan file 
 Pembuat: Safril Isnaini (240601211130057) 
 Tanggal Pembuatan: 21 May 2022 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char const *argv[])
{
    //Kamus
    FILE *teks;
    FILE *lolosA;
    FILE *lolosB;
    FILE *lolosC;
    FILE *tidakLolos;
    char mahas[155];
    char listmhs[255][155];
    char nims[255][255];
    int nilai[255];
    int count = 0;
    char predikat[255];
    //READ text file
    teks = fopen("mahasiswa.txt", "r");
    while (!feof(teks))
    {
        fscanf(teks, "%s %s %d", &mahas[count], &nims[count], &nilai[count]);
        count++;
    }
/*
    for (int i = 0; i < count; i++)
    {
        printf("%s %s %d\n", listmhs[i], nims[i], nilai[i]);
    }
  */
 for (int i = 0; i < count; i++)
 {
    if (nilai[i] >= 80)
    {
        predikat[i] = "A";  

    }
    else if (nilai[i] >= 70)
    {
        predikat[i] = 'B'; 
    }
    
    else if (nilai[i] >= 60)
    {
        predikat[i] = 'C';
    }
    else
    {
        predikat[i] = 'D'; 
    }
    
    
 }
    lolosA = fopen("lolosA.txt", "w+");
    lolosB = fopen("lolosB.txt", "w+");
    lolosC = fopen("lolosC.txt", "w+");
    tidakLolos = fopen("tidaklolos.txt", "w+");
    for (int i = 0; i < count; i++)
    {
        if (predikat[i] == "A")
        {
            fprintf(lolosA, "%s %s %d\n", listmhs[i], nims[i], nilai[i]);
        }
        else if (predikat[i] == "B")
        {
            fprintf(lolosB, "%s %s %d\n", listmhs[i], nims[i], nilai[i]);
        }
        
        else if (predikat[i] == "C")
        {
            fprintf(lolosC, "%s %s %d\n", listmhs[i], nims[i], nilai[i]);
        }
        else
        {
            fprintf(tidakLolos, "%s %s %d\n", listmhs[i], nims[i], nilai[i]);
        }
        
    }
    

    fclose(teks);
    fclose(lolosA);
    fclose(lolosB);
    fclose(lolosC);
    return 0;
}
