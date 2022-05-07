/*Nama File 	: juruMasakTerbaik.c*/
/*Deskripsi 	: Membuat program lomba juru masak dengan mengurutkan nilai dari terbesar hingga terkecil lalu menjumlahkan 3 nilai terbesar*/
/*Pembuat   	: <24060121120023-Arynda Anna Salsabiela>*/
/*Tgl Pembuatan	: <Jumat, 29 April pukul 01.16>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int i,j;
    int sum1 = 0;
    int sum2 = 0;
    int arr[] = {10,9,10,7,5};
	int arr2[] = {8,6,8,10,7};
    int temp = 0;

  /*Algoritma*/
    int length = sizeof(arr)/sizeof(arr[0]);
    int length2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("LOMBA JURU MASAK \n");

    for (i = 0; i < length; i++) {
    }
    printf("\nPenilaian 5 orang juri kepada Juru Masak 1: 10 9 10 7 5");

    for (i = 0; i < length2; i++) {
    }
    printf("\nPenilaian 5 orang juri kepada Juru Masak 2: 8 6 8 10 7");

    for (i = 0; i < length; i++) {
        for (j = i+1; j < length; j++) {
           if(arr[i] < arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    for (i = 0; i < length2; i++) {
        for (j = i+1; j < length2; j++) {
           if(arr2[i] < arr2[j]) {
               temp = arr2[i];
               arr2[i] = arr2[j];
               arr2[j] = temp;
           }
        }
    }
    printf("\n");

    //Nilai Juru Masak 1 Setelah Sorting
    printf("\nNilai Juru Masak 1 setelah diurutkan: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    //Total 3 nilai terbesar
    for (i = 0; i < 3; i++){
    	sum1 = sum1 + arr[i];
    }
    printf("\nTotal 3 nilai terbesar dari Juru Masak 1: %d \n",sum1);

    //Nilai Juru Masak 2 Setelah Sorting
    printf("\nNilai Juru Masak 2 setelah diurutkan: ");
    for (i = 0; i < length2; i++) {
        printf("%d ", arr2[i]);
    }
    //Total 3 nilai terbesar
    for (i = 0; i < 3; i++){
    	sum2 = sum2 + arr2[i];
    }
    printf("\nTotal 3 nilai terbesar dari Juru Masak 2: %d \n",sum2);

    printf("\nJadi, keputusan akhir adalah ");

	if (sum1 > sum2){
	printf("Juru masak 1 menang \n");
	}
	else if (sum1 < sum2){
	printf("Juru masak 2 menang \n");
	}
	else if (sum1 == sum2){
	printf("Pertandingan seri \n");
	}
    return 0;
}
