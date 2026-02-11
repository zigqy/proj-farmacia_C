
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


    // cod + nome + preco + qnt
    // molde de prod, lugar na memoria, contador p saber qnts existem
struct Prod{
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};  // pq é uma declaracao de tipo.
int cadastProd(struct Prod produtos[], int* total){
    char buffer[50];
    
    printf("Código: ");
    fgets(buffer, sizeof(buffer), stdin);
    produtos[*total].codigo = atoi(buffer); //atoi é pra converter string em inteiro

    printf("Nome: ");
    fgets(produtos[*total].nome, 50, stdin);
    produtos[*total].nome[strcspn(produtos[*total].nome, "\n")] = '\0'; // tira espaco do /n

    printf("Preco: ");
    fgets(buffer, sizeof(buffer), stdin);
    produtos[*total].preco = atof(buffer); //atof é float p inteiro

    printf("Quantidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    produtos[*total].quantidade = atoi(buffer);

    (*total)++; 
    printf("\nProduto cadastrado com sucesso!");
    // se eu não usar, vai ficar sobrescrevendo os cadastros -> prod1[0]
    // prod2[0]
    //prod3[0]
    
    return 1;
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
    struct Prod produtos[100];
    int total=0;
    char buffer[10];
    do
    {
        system("clear");
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
        fgets(buffer, sizeof(buffer), stdin);
        escolha  = atoi(buffer);    
        getchar();

switch(escolha){
    case 1: 
        cadastProd(produtos, &total);
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
    printf("\nPressione ENTER para continuar...");
    getchar();
    getchar();
    } while (escolha != 0);
    
    return 8;
}