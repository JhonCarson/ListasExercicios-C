/*2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida,
declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição
<<<<<<< HEAD
(0,0).*/

=======
(0,0). */
>>>>>>> 08d51057e23b58c5f296d0a512a3a1d509e15351

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
<<<<<<< HEAD
=======
#include <math.h>

struct ponto {
    
    float x, y;
};
>>>>>>> 08d51057e23b58c5f296d0a512a3a1d509e15351


int main(){

<<<<<<< HEAD
=======
    struct ponto Ponto;
    float distancia;

    printf("\nDigite o valor do ponto X: ");
    scanf(" %f", &Ponto.x);

    printf("\nAgora, digite o valor do ponto Y: ");
    scanf(" %f", &Ponto.y);

    distancia = sqrt((pow(Ponto.x, 2)) + (pow(Ponto.y, 2)));

    printf("\nA distancia ate 0,0 eh de: %.2f\n\n", distancia);

>>>>>>> 08d51057e23b58c5f296d0a512a3a1d509e15351
    return 0;
}