/*Nama File 	: KelBil*/
/*Pembuat   	: Rafif Abbrar M*/
/*Tgl Pembuatan	: 30 Maret 2022*/
/*Deskripsi     : Menentukan kelipatan bilangan terkecil, jika diberikan sebuah array integer A sebarang*/

int main()
{ /*Kamus*/
    int sum,i,j,k,n;
    int a[3];

  /*Algoritma*/
  printf("Masukan banyaknya bilangan dalam array (n): ");
  scanf("%d", &n);

  if(n<=0)
  {
      printf("Banyaknya bilangan n harus positif");
  }
  else
  {
      sum=1;
      for(i=0; i<3; i++)
        {
            printf("Masukkan nilai ke-%d: ", i+1);
            scanf("%d", &a[i]);
            sum = sum*a[i];
        }
      for (j=1; j<=sum; j++)
        {
            for(k=0; k<n; k++){
                if(j%a[k] != 0){
                    break;
                }
            }
            if(k>n-1){
                break;
            }
        }
        printf("Kelipatan terkecilnya adalah ", n);
        printf("%d", j);
        printf("\n");
  }
  return 0;
}
