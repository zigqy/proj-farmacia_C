#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cadastProd(){

}
int listProd(){

}
int buscProd(){

}
float vendProd(){

}
int reporEst(){

}
int prodFalta(){

}

int main(){
    int escolha;

    do
    {
        system("cls");
        printf("=====================================================================\n");
        printf("                        SISTEMA DE FARMACIA     \n");
        printf("=====================================================================\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produto\n");
        printf("3 - Buscar produto\n");
        printf("4 - Vender produto\n");
        printf("5 - Repor estoque\n");
        printf("6 - Produtos em falta\n");
        printf("0 - Sair\n");
        printf("=====================================================================\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &escolha);

switch(escolha){
    case 1: 
        printf("Cadastrar produto: \n");
        break;
    case 2:
        printf("Listar produto: \n");
        break;
    case 3:
        printf("Buscar produto: \n");
        break;
    case 4: 
        printf("Vender produto \n");
        break;
    case 5:
        printf("Repor estoque \n");
        break;
    case 6:
        printf("Produtos em falta \n");
        break;
    case 0:
        printf("Saindo... \n");
        break;
    default:
        printf("Comando inexistente!");    
}
    system("pause");
    } while (escolha != 0);
    
    return 8;
}