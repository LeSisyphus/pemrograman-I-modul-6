#include <stdio.h>

int main(){
    int ordo;
    scanf("%d", &ordo);
    int matriks_A[ordo][ordo], matriks_B[ordo][ordo], matriks_C[ordo][ordo];
    printf("Matriks A \n");
    
    for(int i = 0; i < ordo; i++){
        for( int j = 0; j < ordo; j++){
            scanf("%d", &matriks_A[i][j]);
        }
    }

    printf("Matriks B \n");

    for(int i = 0; i < ordo; i++){
        for( int j = 0; j < ordo; j++){
            scanf("%d", &matriks_B[i][j]);
        }
    }
 
    printf("Matriks %dX%d \n", ordo, ordo);

    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            matriks_C[i][j] = 0;
            for (int k = 0; k < ordo; k++){
                matriks_C[i][j] += matriks_A[i][k] * matriks_B[k][j];
            }
        }
    }

    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            printf("%d ", matriks_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}