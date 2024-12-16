#include <stdio.h>

int main(){
    int banyak_ruang;
    scanf("%d", &banyak_ruang);

    int banyak_zetsu_per_ruang[banyak_ruang];

    for(int i = 0; i < banyak_ruang;i++){
        scanf("%d", &banyak_zetsu_per_ruang[i]);
    }

    for(int i = 0; i < banyak_ruang; i++){
        printf("%d ", (banyak_zetsu_per_ruang[i]) * (i + 1));
    }
    return 0;
}