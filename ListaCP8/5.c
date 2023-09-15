/*5) Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura
<<<<<<< HEAD
Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo.*/

=======
Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo*/
>>>>>>> 08d51057e23b58c5f296d0a512a3a1d509e15351

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
<<<<<<< HEAD


int main(){

    return 0;
}
=======
#include <math.h>

struct Ponto {
    
    float x, y;
};

struct Retangulo {
    
    struct Ponto esquerdo, direito;
};

int main() {

    struct Retangulo retangulo;
    struct Ponto ponto;

    printf("\nDigite o valor do ponto X superior esquero: ");
    scanf(" %f", &retangulo.esquerdo.x);

    printf("\nAgora, digite o valor do pont Y superior esquerdo: ");
    scanf(" %f", &retangulo.esquerdo.y);

    printf("\nDigite o valor do ponto X inferior direito: ");
    scanf(" %f", &retangulo.direito.x);

    printf("\nAgora, digite o valor do pont Y inferior direito: ");
    scanf(" %f", &retangulo.direito.y);

    printf("\nDigite o valor do ponto flutuante X: ");
    scanf(" %f", &ponto.x);

    printf("\nAgora, digite o valor do ponto flutuante Y: ");
    scanf(" %f", &ponto.y);

    if (ponto.x >= retangulo.esquerdo.x && ponto.x <= retangulo.direito.x && ponto.y >= retangulo.esquerdo.y && ponto.y <= retangulo.direito.y) {
        
        printf("\nO ponto esta dentro do retangulo.");
    }
    else {

        printf("\nO ponto esta fora do retangulo.");
    }
    
    return 0;
}

>>>>>>> 08d51057e23b58c5f296d0a512a3a1d509e15351
