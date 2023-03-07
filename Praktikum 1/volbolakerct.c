/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan menampilkan volume bola dan kerucut
Nama Pembuat  : Muhammad Rayyis Budi Prasetyo
NIM           : 24060122130068
Tanggal       : 07 maret 2023
*/

#include <stdio.h>

int main(){
    //Kamus
    float r,vB,vK;
    const float phi = 3.1415;

    //Algoritma
    printf("Masukan r : ");
    scanf ("%f", &r);

    vB = 1.3*(phi/r*r*r);
    vK = 0.5*vB;

    printf ("bola : %f\n", vB);
    printf ("kerucut : %f", vK);
    return 0;
}

