/*
Nama Program  : bilangan sempurna
deskripsi     : mencetak bilangan sempurna sembarang
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
Nim           : 24060122140112
Tanggal       : 14 maret 2023
*/

#include <stdio.h>

int main() {
  int N, i, j, sum;

  printf("Masukkan bilangan N: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    sum = 0;
    for (j = 1; j <= i/2; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum == i) {
      printf("%d ", i);
    }
  }

  return 0;
}
