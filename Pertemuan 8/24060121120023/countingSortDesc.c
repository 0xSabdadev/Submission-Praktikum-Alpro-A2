/*Nama File 	: countingSortDesc.c*/
/*Deskripsi 	: Membuat program Counting Sort Descending (mengurutkan angka dari yang terbesar hingga terkecil)*/
/*Pembuat   	: <24060121120023-Arynda Anna Salsabiela>*/
/*Tgl Pembuatan	: <Kamis, 28 April pukul 23.45>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
  	int i, j;
    int arr[] = {24,4,2,10,8,9,12,5};
    int temp = 0;

  /*Algoritma*/
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("COUNTING SORT DESCENDING");
    printf("\n \n");

    //Display elements original array
    printf("Elements original array: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    //Sort array dalam descending order
    for (i = 0; i < length; i++) {
        for (j = i+1; j < length; j++) {
           if(arr[i] < arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    printf("\n");

    //Display elements array setelah sorting
    printf("Elements array setelah sorting: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
