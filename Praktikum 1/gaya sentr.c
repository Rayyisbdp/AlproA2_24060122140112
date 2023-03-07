/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan menampilkan gaya sentripetal
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
NIM           : 24060122130068
Tanggal       : 07 maret 2023
*/

#include <stdio.h>

int main(){
    //Kamus
    float m,v,r,f;

    //Algoritma
    printf("Masukan m : ");
    scanf ("%f", &m);
    printf("Masukan v : ");
    scanf ("%f", &v);
    printf("Masukan r : ");
    scanf ("%f", &r);

    f = m*(v*v/r);

    printf ("Sebtripental : %.1f", f);
    return 0;
}

