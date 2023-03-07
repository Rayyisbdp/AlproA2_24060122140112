/*
Nama Program  : jarakPBola
Deskripsi     : Menghitung dan menampilkan jarak parabola
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
NIM           : 24060122140112
Tanggal       : 7 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    float v0;
    float t;
    float y;
    const float g = 9.8;

    //ALGORITMA
    printf("Masukkan nilai v0 : ");
    scanf("%f", &v0);
    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    y = v0*t - 0.5*g*t*t;

    printf("jarak parabola : %.1f", y);
    return 0;
}
