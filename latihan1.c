#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
    
    int papan [4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {16,15,14,13}
    };

    int Vektorx [4] = {2,1,3,4};

    int perkalian [4];

    for (int i = 0; i < 4; i++){
        perkalian [i]= 0;
        for (int j = 0; j < 4; j++) {
            perkalian[i] += papan[i][j] * Vektorx [j];
        }
    }

    printf("Matriks 4x4\n");
    for (int i = 0; i < 4; i++){
        printf ("[ ");
        for (int j = 0; j < 4; j++){
            printf("%3d", papan[i][j]);
            
        }
        printf("]\n");
    }
    
    printf("matriks 4x1\n");
    for (int i = 0; i < 4; i++) {
    printf("[%d]\n", Vektorx [i]);
}   

    printf("\nHasil Perkalian Vektor 4x1:\n");
    for (int i = 0; i < 4; i++) {
        printf("[%d]\n", perkalian[i]);

        
    }
    return 0;
}

    


