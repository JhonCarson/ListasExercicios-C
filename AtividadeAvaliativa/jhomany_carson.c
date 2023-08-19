#include <stdio.h>
#include <unistd.h>

int main() {

    int menu, bool = 0;

    while(!bool){
       
        printf("\n\nDigite a opcao desejada: \n\n1 - Nome e RA do Aluno que desenvolveu\n2 - Dias da semana\n3 - Uma quase piramide de Floyd\n4 - Sair\n\n Digite o numero de acordo com sua opcao: ");
        scanf(" %d", &menu);

        if(menu != 1 && menu != 2 && menu != 3 && menu != 4){

            printf("\nDigite uma opcao valida");
        } else {
            
            switch (menu) {
                case 1: 

                    printf("\nNome do aluno: Jhomany Carson\n\nRA: 18.8952");
                    printf("\n  ");

                    sleep(2);

                    break;
                case 2: 

                    int dia;
                
                    printf("\n\nDigite um numero entre 1 e 7: ");
                    scanf(" %d", &dia);
                
                    switch (dia) {
                        case 1:

                            printf("\nDomingo");
                            break;
                        case 2:

                            printf("\nSegunda-Feira");
                            break;
                        case 3:

                            printf("\nTerça-Feira");
                            break;
                        case 4:

                            printf("\nQuarta-Feira");
                            break;
                        case 5:

                            printf("\nQuinta-Feira");
                            break;
                        case 6:
                        
                            printf("\nSexta-Feira");
                            break;
                        case 7:

                            printf("\nSabado");
                            break;
                        default:

                            printf("\nOpcao invalida");
                            break;
                    }
                    break;
                case 3: 

                    int n;
                    printf("\nDigite o valor de n: ");
                    scanf("%d", &n); 

                    for (int i = 0; i <= n; i++)
                    {
                            for (int j = n; j > i; j--) {

                                printf(" "); 
                            }
                            for (int k = 0; k <= i; k++)
                            {
                                printf("#"); 
                            }   

                            printf(" ");

                            for (int j = 0; j <= i; j++)
                            {
                                printf("#");
                            }
                            
                            printf("\n"); 

                    }

                    break;
                case 4: 
                        
                    printf("\nVoce saiu do programa, espero que tenha gostado! =)");
                    printf("\n ");
                            
                    bool = 1;
                    break;
                default:

                        printf("\nOpcao invalida, por favor: ");

                        break;
            }
        }
    }
}