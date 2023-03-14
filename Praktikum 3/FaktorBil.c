/*
Nama Program  : Faktor bilangan
deskripsi     : Menentukan faktor yang dibentuk oleh bilangan itu sendiri
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
Nim           : 24060122140112
Tanggal       : 14 maret 2023
*/

#include <stdio.h>

int main() {
    int N, total = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        total += i;
    }

    printf("Jumlah deret bilangan 1 sampai N adalah %d", total);

    return 0;
}
