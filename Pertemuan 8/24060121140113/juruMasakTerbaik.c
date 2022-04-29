/*Nama File 	: juruMasakTerbaik.c*/
/*Deskripsi 	: membuat program lomba juru masak dengan mengurukan angka dari terbesar hingga terkecil lalu menjumlahnya 3 nilai terbesar*/
/*Pembuat   	: Rhadiyyah Ariana Saraswati - 24060121140113*/
/*Tgl Pembuatan	: 27-04-2022 */

#include <stdio.h> /*header file*/

int main(){    
    //Kamus Lokal 
	int i,j,n,sum1,sum2=0;
    int arr[5];
    int arr2[5];
    int temp = 0;    
    
    // inputan 
    printf("Masukkan banyaknya penilaian dari juri yang akan diberikan \n");
        scanf("%d", &n);
 
    printf("Masukkan penilaian Juru Masak 1 \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &arr[i]);

    printf("Masukkan penilaian Juru Masak 2 \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &arr2[i]);

    //Panjang array arr  
    int length = sizeof(arr)/sizeof(arr[0]);    
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    
    //Algoritma      
    printf("\n");
    for (i = 0; i < length; i++) {   
        printf("Penilaian Juru Masak 1 = %d \n", arr[i]);      
    }      

    printf("\n");
    
    for (i = 0; i < length2; i++) { 
        printf("Penilaian Juru Masak 2 = %d \n",arr2[i]);        
    } 

	//Logic 
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
 
    //Nilai Juru Masak setelah diurutkan
    printf("\n Nilai Juru Masak 1 setelah diurutkan : \n ");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }
    printf("\n Nilai Juru Masak 2 setelah diurutkan : \n ");
    for (i = 0; i < length2; i++) {     
        printf("%d ", arr2[i]);    
    }
    
    printf("\n \n");
    
    // Total 3 nilai terbesar
    for (i = 0; i < 3; i++){
    	sum1 = sum1 + arr[i];
    }
    printf("Total 3 nilai terbesar dari Juru Masak 1 = %d \n",sum1);
    for (i = 0; i < 3; i++){
    	sum2 = sum2 + arr2[i];
    }
    printf("Total 3 nilai terbesar dari Juru Masak 2 = %d \n",sum2);
    
    printf("==========\n ");
    
    // conditional statement
	if (sum1 > sum2){
	printf("Juru masak 1 menang");
	}
	else if (sum1 < sum2){
	printf("Juru masak 2 menang");
	}
	else if (sum1 == sum2){
	printf("Pertandingan seri");
	}
    return 0;
}