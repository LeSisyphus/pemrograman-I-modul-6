#include <stdio.h>

int main(){
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    int tabel1[n1], tabel2[n2];

    if(n1 != n2){
        printf("Jumlah tidak sama");
        return 1;
    }

    for(int i = 0; i < n1; i++){
        scanf("%d", &tabel1[i]);
    }
    for(int i = 0; i < n1; i++){
        scanf("%d", &tabel2[i]);
    }
    
    for(int i = 0; i< n1; i++){
        printf("%d ", tabel1[i] * tabel2[i]);
    }

    return 0;
}