/*
Nama File       : JuruMasakTerbaik
Deskripsi       : Menentukan pemenang dari lomba yang memiliki 2 peseta dengan 5 juri
Pembuat         : Benjamin Sipayung - 24060121130047
Tgl Pembuatan   : 28 April 2022 Pukul 16.00
*/

#include <stdio.h>
#include <math.h>

int sub_array[10]; // input jumlah data

int counting_sort(int *array, int size){
	int max;
	int count=0;
	for (int i=0;i<size; i++){	// fungsi sorting (penyimpanan jumlah data ke sub_array)
		sub_array[*array]++;
		array++;
	}
	for (int j =10; j>=0; j--){	// mulai menghitung data dari belakang
		if (sub_array [j]==0){
			continue;
		}
		else{
			if (count == 3){	// logic agar nilai yang terhitung adalah 3 data terakhir
				break;
			}
			max += j;			// penjumlahan nilai max dari juru masak
			count++;			// counter agar nilai yang terhitung tepat 3 data terakhir
		}
	}
	for (int i=0; i<10; i++){
		sub_array[i] = 0;		// assign nilai dalam sub_array agar 0 semua, agar data tidak berutmpuk ketika dimasukkan nilai
	}							//juru masak 2
	return max; 				// mengembalikan nilai max dari data yang sudah di sorting
}

int main (){
	int array [5];
	int command;
	int max_1=0,max_2=0;
	// fungsi mendapat nilai max dari setiap juru masak
	printf ("\nNilai terhadap juru masak 1	: ");
	for (int i=0; i<5; i++){
		scanf ("%d", &array[i]);
	}
	max_1 = counting_sort(array, 5);
	printf ("\nNilai terhadap juru masak 2	: ");
	for (int i=0; i<5; i++){
		scanf ("%d", &array[i]);
	}
	max_2 = counting_sort(array, 5);
	//logic print juru masak terbaik
	if (max_1 < max_2){
		printf ("Juru masak 2 menang");
	}
	else if (max_1 > max_2){
		printf ("Juru masak 1 menang");
	}
	else {
		printf ("Pertandingan seri");
	}
return 0;
}
