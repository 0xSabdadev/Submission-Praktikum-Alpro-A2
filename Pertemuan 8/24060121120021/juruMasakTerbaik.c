/*Nama File 	: juruMasakTerbaik.c*/
/*Deskripsi 	: Menentukan juru masak terbaik dengan pengurutan nilai dari 5 juri kemudian jumlah 3 nilai tertinggi dari masing-masing juru masak akan dibandingkan untuk menentukan pemenangnya*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 29 April 2022 09.52 WIB*/

/*header file*/
#include<stdio.h>
#include<stdlib.h>

void sortDesc(int T[], int n, int i, int j);
void dispTab(int T[], int n, int a);
void inpuTab(int T[],int n, int a);

/*Program Utama*/
int main(void){
    /* Kamus */
    int N[5]; // tabel nilai juru masak 1
    int M[5]; // tabel nilai juru masak 2
    int i,j,n;
    int NJ1; // jumlah 3 nilai terbaik juru masak 1
    int NJ2; // jumlah 3 nilai terbaik juru masak 2
    n=5; // banyak dewan juri yakni 5

    /* Algoritma */
    printf("============JURU MASAK TERBAIK============\n");
    printf("Masukan nilai untuk juru masak 1 \n");
    inpuTab(N,n,0); // input data ke tabel nilai juru masak 1
    printf("Masukan nilai untuk juru masak 2 \n");
    inpuTab(M,n,0); // input data ke tabel nilai juru masak 2

    printf("-----------Tabel Nilai dari Juri----------\n");
    printf("Nilai juru masak 1 :\n");
    dispTab(N,n,0); // menampilkan data dari tabel nilai juru masak 1
    printf("\nNilai juru masak 2 :\n");
    dispTab(M,n,0); // menampilkan data dari tabel nilai juru masak 2
    // Pengurutan nilai secara descending
    sortDesc(N,n,0,0);
    sortDesc(M,n,0,0);

    printf("\n------Tabel Nilai Setelah Diurutkan------\n");
    printf("Juru Masak 1\n");
    dispTab(N,n,0); // menampilkan data dari tabel nilai juru masak 1 setelah diurutkan
    NJ1 = N[0]+N[1]+N[2]; // jumlah 3 nilai tertinggi juru masak 1
    printf("\n==> Jumlah 3 nilai terbesar : %d \n",NJ1);

    printf("\nJuru Masak 2\n");
    dispTab(M,n,0); // menampilkan data dari tabel nilai juru masak 2 setelah diurutkan
    NJ2 = M[0]+M[1]+M[2]; // jumlah 3 nilai tertinggi juru masak 2
    printf("\n==> Jumlah 3 nilai terbesar : %d ",NJ2);

    printf("\n----------Hasil Keputusan Juri----------\n");
    if(NJ1>NJ2){ // Membandingkan jumlah nilai juru masak 1 dan 2
        printf("Juru masak 1 menang");
    } else if(NJ1<NJ2){
        printf("Juru masak 2 menang");
    } else {
        printf("Pertandingan seri");
    }
    printf("\n==========================================\n");
    return 0;
}

/* Prosedur Pengurutan Nilai Secara Descending dengan Metode BubbleSort */
void sortDesc(int T[],int n,int i, int j){
    for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
            if(T[i]<T[j]){
                int temp = T[i];
                T[i]=T[j];
                T[j]=temp;
            }
        }
    }
}

/* Prosedur Menampilkan Tabel */
void dispTab(int T[], int n, int a){
    for(int i=a;i<n;i++){
        printf("%d ",T[i]);
    }
}

/* Prosedur Input Tabel */
void inpuTab(int T[],int n, int a){
    for(int i=a;i<n;i++){
        printf("Nilai juri ke-%d : ",i+1);
        scanf("%d",&T[i]);
    }    
}