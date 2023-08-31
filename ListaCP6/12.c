/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma dos elementos
dessa matriz que estão abaixo da diagonal principal.*/

#include <stdio.h>

int main() {

    int m[5][5], soma = 0;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            
            printf("\nDigite a valor da linha %d e coluna %d: ", i +1, j +1);
            scanf(" %d", &m[i][j]);

            if (i < j && j == i +1) {
             
                soma += m[i][j];
            }
        }    
    }

    return 0;
}