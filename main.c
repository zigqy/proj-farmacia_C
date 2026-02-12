
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
    if(*total >= 100){
        printf("Limite de produtos atingido!\n");
        return 0;
    }
    char buffer[50];
    printf("Código: \n");
    if(fgets(buffer, sizeof(buffer), stdin) == NULL)
    return 0;

    produtos[*total].codigo = atoi(buffer);
    if(produtos[*total].codigo <= 0){
        printf("Código Inválido\n");
        return 0;
    }

    for(int i =0;i<*total;i++){
        if(produtos[i].codigo == produtos[*total].codigo){
            printf("Produto já cadastrado!\n");
            return 0;
        }
    }

    printf("Nome: ");
    fgets(produtos[*total].nome, sizeof(produtos[*total].nome), stdin);
    produtos[*total].nome[strcspn(produtos[*total].nome, "\n")] = '\0'; // tira espaco do /n

    printf("Preco: ");
    fgets(buffer, sizeof(buffer), stdin);
    produtos[*total].preco = atof(buffer); //atof é float p inteiro

    if(produtos[*total].preco < 0 ){
        printf("Preco inválido!\n");
        return 0;
    }

    printf("Quantidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    produtos[*total].quantidade = atoi(buffer);

    if(produtos[*total].quantidade < 0){
        printf("Quantidade inválida!\n");
        return 0;
    }

    (*total)++; 
    printf("\nProduto cadastrado com sucesso!\n");
    // se eu não usar, vai ficar sobrescrevendo os cadastros -> prod1[0]
    // prod2[0]
    //prod3[0]
    
    return 1;
}
void listProd(struct Prod produtos[], int total){
    if(total == 0){
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    printf("=========================================\n");
    printf("            LISTA DE PRODUTOS            \n");
    printf("=========================================\n");
    for(int i=0;i<total;i++){
        printf("Produto %d:\n", i+1);
        printf("    Código %d:\n", produtos[i].codigo);
        printf("    Nome: %s\n", produtos[i].nome);
        printf("    Preco: %.2f\n", produtos[i].preco);
        printf("    Quantidade: %d\n", produtos[i].quantidade);
        printf("=========================================\n");
    }



}
int buscProd(struct Prod produtos[], int total){
    return 0;
}
float vendProd(struct Prod produtos[], int total){
    return 0;
}
int reporEst(struct Prod produtos[], int total){
    return 0;
}
int prodFalta(struct Prod produtos[], int total){
    return 0;
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
switch(escolha){
    case 1: 
        cadastProd(produtos, &total);
        break;
    case 2:
        listProd(produtos, total);
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