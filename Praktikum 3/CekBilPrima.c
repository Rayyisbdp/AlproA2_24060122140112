/*
Nama Program  : Cek bilangan prima
deskripsi     : mengecek bilangan prima atau bukan
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
Nim           : 24060122140112
Tanggal       : 14 maret 2023
*/

#include <stdio.h>

int main() {
    int N, count = 0;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d adalah bilangan prima\n", N);
    } else {
        printf("%d bukan bilangan prima\n", N);
    }

    return 0;
}
