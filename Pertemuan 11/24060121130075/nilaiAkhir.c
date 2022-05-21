/*Nama File 	: NilaiAkhir.c*/
/*Deskripsi 	: membantu Pak Eko merekap nilai akhir mahasiswa*/
/*Pembuat   	: Muhamad Ridwan Ash'shidqi */
/*NIMK          : 24060121130075*/


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

    FILE *dataSiswa;
    FILE *dataSiswaA, *dataSiswaB, *dataSiswaC,*dataSiswaD;
    dataSiswa = fopen("NilaiMahasiswa.txt", "r");
    dataSiswaA = fopen("Nilai_A.txt", "w");
    dataSiswaB = fopen("Nilai_B.txt", "w");
    dataSiswaC = fopen("Nilai_C.txt", "w");
    dataSiswaD = fopen("NIlai_D.txt", "w");
    retval = fscanf(dataSiswa, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);

    fprintf(dataSiswaA, "Mahasiswa dengan Nilai A\n\n");
    fprintf(dataSiswaB, "Mahasiswa dengan Nilai B\n\n");
    fprintf(dataSiswaC, "Mahasiswa dengan Nilai C\n\n");
    fprintf(dataSiswaD, "Mahasiswa dengan Nilai D\n\n");
    while(retval != EOF) {
        if(Mhs.nilai>=80) {
            fprintf(dataSiswaA, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=70 && Mhs.nilai <80) {
            fprintf(dataSiswaB, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else if (Mhs.nilai >=60 && Mhs.nilai <70) {
            fprintf(dataSiswaC, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        } else {
            fprintf(dataSiswaD, "%s %d %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
        }

        retval = fscanf(dataSiswa, "%s %d %d", &Mhs.nama, &Mhs.nim, &Mhs.nilai);
    }

    fclose(dataSiswa);
}
