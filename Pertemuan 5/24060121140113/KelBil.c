/*Nama File 	: KelBil.c*/
/*Deskripsi 	: membuat kelipatan bilangan terkecil*/
/*Pembuat   	: Rhadiyyah Ariana Saraswati*/
/*Tgl Pembuatan	: 29 Maret 2022 */

int main(){
    int i,N,j,k,kelipatan;
	int *ptr;
	
    // Algoritma
    printf("Masukkan jumlah data = ");
    scanf("%d",&N);
    ptr = (int *)malloc(N*sizeof(int));
    
    kelipatan = 1;
    
	if(N>0){
        for(i=1;i<=N;i++){
            printf("Masukkan bilangan ke - %d  (urut dari terkecil ke terbesar) = ",i);
            scanf("%d",ptr+i);
        }
        for(j=1;j<=N;j++){
            if(*(ptr+j)%kelipatan==0){
                kelipatan = *(ptr+j);
            }
            else{
                kelipatan = kelipatan*(*(ptr+j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }else{
        printf("Masukan tidak benar ");
    }
    return 0;
}
