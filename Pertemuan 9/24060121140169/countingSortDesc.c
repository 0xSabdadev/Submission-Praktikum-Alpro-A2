/*Nama File : countingSortDesc*/
/*Deskripsi : Membuat Counting Sort secara Descending*/
/*Pembuat : Majid Ilham Adhim*/
/*Tgl Pembuat : 21.26, 28 April 2022*/

#include<stdlib.h>
#include<stdio.h>

int main(void){
	//Kamus Lokal
	int A[15],B[15],C[100],i,j,n,k;
	
	//Algoritma
	k=0; //max = 0
	printf("masukkan size array : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){ //masukkan nilai array A
		scanf("%d", &A[i]);
		if(A[i]>k){
			k = A[i];
		}
	}
	printf("\n");
	printf("nilai k = %d\n",k); //print nilai max
	
	for(i=1;i<=n;i++){ //print array A
		printf("%d ",A[i]);
	}
	
	//Logic
	for(i=0;i<=k;i++){ //step 1, buat array c sebanyak K(max) isi 0 semua
		C[i]=0;
	}
	for(j=1;j<=n;j++){ // step 2, increment berdasar elemnet A
		C[A[j]] = C[A[j]] + 1 ;
	}
	for(i=1;i<=k;i++){ // step 3, tambah element dengan elemnt sebelum
		C[i]=C[i] + C[i-1];
	}
	for(j=n;j>=1;j--){ //step 4, mengurutkan array A ke array B
		B[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]]-1;
	}
	//printf sesudah
	printf("\n\n===sesudah===\n");
	for(i=n;i>=1;i--){
		printf("%d ",B[i]);
	}
	return 0;
}
