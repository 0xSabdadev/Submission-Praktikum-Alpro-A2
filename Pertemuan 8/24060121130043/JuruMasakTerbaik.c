/*Nama File 	: JuruMasakTerbaik.c*/
/*Deskripsi 	: menentukan pemenang dari dua juru masak*/
/*Pembuat   	: 24060121130043-Zahid Muhammad Mahfudz*/
/*Tgl Pembuatan	: 28-04-2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Juru1[15], B[15], C[100];
    int i,j;
    int n;
    int max1;

    max1 = 0;
    printf("\nMasukan Jumlah Juri : ");
    scanf("%d", &n);
    printf("#untuk juru masak pertama#");
    printf("\n");
    for(i=1; i<=n; i++){
        printf("Masukan Penilaian juri : ");
        scanf("%d", &Juru1[i]);
        if(Juru1[i]>max1){
            max1 = Juru1[i];
        }
    }
    printf("Maka penilaian terbesar juru masak 1 adalah : %d", max1);
    printf("\nPenilaian dari juru masak 1 adalah : ");
    for(i=1; i<=n; i++){
        printf("%d", Juru1[i]);
    }
    //poin penilaian diurutkan dari yang terbesar
    for(int i=0; i<=max1; i++){
        C[i] = 0;
    }
    for(j=1; j<=n; j++){
        C[Juru1[j]] = C[Juru1[j]]+1;
    }
    for(i=1; i<=max1; i++){
        C[i] = C[i] + C[i-1];
    }
    for(j=n; j>=1; j--){
        B[C[Juru1[j]]] = Juru1[j];
        C[Juru1[j]] = C[Juru1[j]] -1;
    }
    printf("\npenilaian diurutkan menjadi : ");
    for(i=n; i>=1; i--){
        printf("%d", B[i]);
    }
    printf("\nmaka jumlah tiga poin tertinggi adalah : ");
    int poin1 = B[n]+B[n-1]+B[n-2];
    printf("%d", poin1);

    printf("\n");
    printf("\n");

    printf("#untuk juru masak kedua#");
    printf("\n");
    int Juru2[15], D[15], E[100];
    int k,l;
    int max2;

    max2 = 0;
    for(i=1; i<=n; i++){
        printf("Masukan Penilaian juri : ");
        scanf("%d", &Juru2[i]);
        if(Juru2[i]>max2){
            max2 = Juru2[i];
        }
    }
    printf("Maka penilaian terbesar juru masak 2 adalah : %d", max2);
    printf("\nPenilaian dari juru masak 2 adalah : ");
    for(i=1; i<=n; i++){
        printf("%d", Juru2[i]);
    }
    //poin penilaian diurutkan dari yang terbesar
    for(int i=0; i<=max2; i++){
        E[i] = 0;
    }
    for(j=1; j<=n; j++){
        E[Juru2[j]] = E[Juru2[j]]+1;
    }
    for(i=1; i<=max2; i++){
        E[i] = E[i] + E[i-1];
    }
    for(j=n; j>=1; j--){
        D[E[Juru2[j]]] = Juru2[j];
        E[Juru2[j]] = E[Juru2[j]] -1;
    }
    printf("\npenilaian diurutkan menjadi : ");
    for(i=n; i>=1; i--){
        printf("%d", D[i]);
    }
    printf("\nmaka jumlah tiga poin tertinggi adalah : ");
    int poin2 = D[n]+D[n-1]+D[n-2];
    printf("%d", poin2);
    printf("\n");
    printf("\n");

    printf("maka hasil pertandingan adalah : ");
    if(poin1>poin2){
        printf("Juru Masak 1 menang");
    }
    else if(poin1<poin2){
        printf("Juru Masak 2 menang");
    }
    else{
        printf("Pertandingan seri");
    }
    printf("\n");
    printf("\n");
    return 0;
}
