/*
Nama Program  : JumFrekNilTabel
Deskripsi     : Menghitung dan menampilkan jumlah dari nilai yang frekuensinya muncul lebih dari 2 kali
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
NIM           : 24060122140112
Tanggal       : 11 Juni 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int j;
    int sama;
    int nomor;
    int jumlah = 0;
    int *tabel;

    printf("Masukkan nilai n : ");
    scanf("%d", &n);

    tabel = (int*)malloc(n * sizeof(int));

    for (i = 0; i<n; i++){
        scanf("%d", &tabel[i]);
    }

    for (i = 0; i<n; i++){
        sama = 0;
        for (j = 0 ; j < n; j++){
            if (tabel[i] == tabel[j]){
                sama++;
            }
        }
        if (sama > 1){
            jumlah+=tabel[i];
        }
    }

    printf("%d", jumlah);
    return 0;
}
