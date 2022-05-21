//Nama File 	: nilaiAkhir.c/
//Deskripsi 	: membantu Pak Eko merekap nilai akhir mahasiswa/
//Pembuat   	: 24060121130049 - Kristian David Adi Prasetya/
//Tgl Pembuatan	: 21 Mei 2022 - 12.00/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nama[255][255];
    int nim;
    int nilai;

}RMHS;

int main()
{
    RMHS Mhs;
    int retval;
    int N;
    char Mhsnama[255][255];
    int Mhsnim[255];
    int Mhsnilai[255];

    FILE *fileku;
    FILE *filekuA, *filekuB, *filekuC,*filekuD;
    fileku = fopen("rekapNilaiMahasiswa.txt", "r");
    filekuA = fopen("lulus_A.txt", "w");
    filekuB = fopen("lulus_B.txt", "w");
    filekuC = fopen("lulus_C.txt", "w");
    filekuD = fopen("lulus_D.txt", "w");
    retval = fscanf(fileku, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);

    printf("masukkan jumlah keseluruhan kandidat: ");
    scanf("%d", &N);

    for(int i = 0; i<N;i++) {
        printf("masukkan nama ke %d: ", i+1);
        scanf("%s", &Mhsnama[i]);
        printf("masukkan nim ke %d: ", i+1);
        scanf("%d", &Mhsnim[i]);
        printf("masukkan nilai ke %d: ", i+1);
        scanf("%d", &Mhsnilai[i]);

    fprintf(filekuA, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat A\n\n");
    fprintf(filekuB, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat B\n\n");
    fprintf(filekuC, "Daftar mahasiswa yang lulus mata kuliah Algoritma Pemrograman dengan predikat C\n\n");
    fprintf(filekuD, "Daftar mahasiswa yang tidak lulus mata kuliah Algoritma Pemrograman dengan predikat D\n\n");
    while(retval != EOF) {
        if(Mhs.nilai>=80) {
            fprintf(filekuA, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=70 && Mhs.nilai <80) {
            fprintf(filekuB, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=60 && Mhs.nilai <70) {
            fprintf(filekuC, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else {
            fprintf(filekuD, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);

        }

        retval = fscanf(fileku, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);
    }

    fclose(fileku);
}
}
