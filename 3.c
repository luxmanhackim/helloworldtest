#include <stdio.h>
#include <string.h>

int main()
{
    char nilai;

    printf("Masukkan Nilai dari A sampai E :");
    scanf("%c",&nilai);

    switch (nilai) {
        case 'A':
            printf("\n Bagus Pertahankan");
            break;
        case 'B' :
            printf("\n Perbaiki lagi tinggal dikit");
            break;
        case 'C' :
            printf("\n Banyak - banyak belajar");
            break;
        case 'D' :
            printf("\n Jangan keseringan main");
            break;
        case 'E' :
            printf("\n Kebanyakan main game");
            break;
        default :
            printf("\n itu bukan nilai Bro");

    }

    return 0;
}