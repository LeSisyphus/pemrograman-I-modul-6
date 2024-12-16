#include <stdio.h>

int panjang_kalimat(char kalimat[]){
    int panjang = 0;

    while(kalimat[panjang] != '\0') panjang++;
    return panjang;
}

int main(){
    int jumlah_bintang = 0, jumlah_pagar = 0;
    char kode_shikamaru[99];
    char kode_musuh[99];

    scanf(" %[^\n]", kode_shikamaru);
    scanf(" %[^\n]", kode_musuh);
    
    if(panjang_kalimat(kode_shikamaru) != panjang_kalimat(kode_musuh)){
        printf("Panjang kalimat berbeda, pesan palsu");
        return 1;
    }

    for(int i = 0; i < panjang_kalimat(kode_shikamaru); i++){

        if(kode_shikamaru[i] == ' ' && kode_musuh[i] == ' '){
            continue;
        }

        if(kode_shikamaru[i] == kode_musuh[i]){
            printf("*");
            jumlah_bintang++;
        } else{
            printf("#");
            jumlah_pagar++;
        }
    }
    printf("\n* = %d \n", jumlah_bintang);
    printf("# = %d \n", jumlah_pagar);

    if(jumlah_bintang >= jumlah_pagar) printf("Pesan Asli");
    else printf("Pesan Palsu");
    return 0;
}