/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan jarak para bola
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
NIM           : 24060122130068
Tanggal       : 07 maret 2023
*/

#include <stdio.h>

int main()
{
    //Kamus
    float v0;
    float t;
    float y;
    const float g= 9.8;

    //Algoritma
    printf("Masukan v0 : ");
    scanf ("%f", &v0);
    printf("Masukan t : ");
    scanf ("%f", &t);
    y = v0*t-0.5*(g*t*t);
    printf ("Jarak parabola adalah : %.3f", y);
    return 0;
}
