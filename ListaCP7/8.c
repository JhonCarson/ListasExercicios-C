
/*8) Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da
primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
 
    char str[20], str2[20];
    int bool = 0, qtd1 = 0, qtd2 = 0, i = 0, j = 0;

    printf("\Digite a palavra 1: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    printf("\nDigite a palavra 2: ");
    setbuf(stdin, NULL);
    fgets(str2, sizeof(str2), stdin);

    qtd1 = strlen(str);
    qtd2 = strlen(str2);

    qtd1 = qtd1 -1;
    qtd2 = qtd2 -1;

    for (i = 0; i < qtd1; i++) {

        for (j = 0; j < qtd2; j++) {

            if (str[i + j] != str2[j]) {
                
                break;
            }
        }
        if (j == qtd2) {
            
            bool = 1;
            break;
        }
    }

    if (bool == 1) {

        printf("A segunda palavra esta contida na primeira.\n");
        printf("\n ");
    } else {

        printf("A segunda palavra nao esta contida na primeira.\n");
        printf("\n ");
    }

    return 0;
}