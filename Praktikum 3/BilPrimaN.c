/*
Nama Program  : Bilangan prima
deskripsi     : Mencetak bilangan prima sampai dengan bilangan integer sembbarang
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
Nim           : 24060122140112
Tanggal       : 14 maret 2023
*/

#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    printf("Masukkan nilai N: ");
    scanf("%d", &n);

    printf("Bilangan prima antara 1 dan %d adalah: ", n);

    for (i = 2; i <= n; i++) {
        is_prime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
