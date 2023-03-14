/*
Nama Program  : Cek bilangan sempurna
deskripsi     : menngecek bilangan sempurna atau bukan
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
Nim           : 24060122140112
Tanggal       : 14 maret 2023
*/

#include <stdio.h>

int main() {
   int N, sum_faktor = 0;

   printf("Masukkan sebuah bilangan bulat positif: ");
   scanf("%d", &N);

   for (int i = 1; i <= N/2; i++) {
      if (N % i == 0) {
         sum_faktor += i;
      }
   }

   if (sum_faktor == N) {
      printf("%d adalah Bilangan Sempurna\n", N);
   } else {
      printf("%d bukan Bilangan Sempurna\n", N);
   }

   return 0;
}
