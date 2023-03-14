/*
Nama Program  : Jumalah deret
deskripsi     : Menghitung jumlah deret bilangan
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
Nim           : 24060122140112
Tanggal       : 14 maret 2023
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Masukkan bilangan N: ");
    scanf("%d", &n);
    printf("Faktor bilangan dari %d adalah: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
