/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan menampilkan gaya sentripetal
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
NIM           : 24060122130068
Tanggal       : 07 maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float m ;
    float v ;
    float r ;
    float F ;

    //algoritma
    printf("Masukin Nilai m :");
    scanf("%f", &m);
    printf("Masukin Nilai v :");
    scanf("%f", &v);
    printf("Masukin Nilai r :");
    scanf("%f", &r);

    F = m*((v*v)/r);

    printf("gaya Sentr : %f", F) ;
    return 0;

}