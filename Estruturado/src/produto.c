//Inclusao de Bibliotecas Externas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Inclusao de Arquivo externo
#include "../include/produto.h"



//Variaveis que estao declaradas no arquivo (produto.h)
char produtos[QTD_PRODUTOS][50]={
    "Produto 01",
    "",
    "Produto 03"
};


struct Produto produtos_struct[QTD_PRODUTOS]; //Indica uma variavel Produto matriz de strings(nomes) no arquivo (produto.c)
int qtd_produtos_cadastrados = 3;//Inicializa a Variavel Com 3 Produtos Cadastrados

//Funcao Para Inserir Novo Produto
void insere_produto() {
    int i = 0;
        while (strlen(produtos[i]) > 0) {
            i++;
        }
    printf("Nome do produto:\n");
    scanf(" %99[^\n]", produtos[i]);
}
//Funcao Para Listar Produtos
void listar_produtos() {
    int i;
    int encontrou = 0;
    
    for (i = 0; i < QTD_PRODUTOS; i++) {
        if (strlen(produtos[i]) > 0) {
            printf("%s\n", produtos[i]);
            encontrou = 1; 
        }
    }
    
    if (encontrou == 0) {   
        printf("Nenhum Produto Cadastrado!\n");
    }
}
//Funcao Para Excluir Produto
void excluir_produto() {

    char nome[50];
    int i;
        printf("Nome do produto a excluir:\n");
        scanf(" %49[^\n]", nome);

    for (i = 0; i < QTD_PRODUTOS; i++) {

        if (strcmp(produtos[i], nome) == 0) {
            produtos[i][0] = '\0';
            printf("Produto excluido com sucesso!\n");
            return;

        }
    }
    printf("Produto nao encontrado!\n");
}

//Funcao Para Atualizar Estoque
void atualizar_estoque() {
    int nova_quantidade;
    char nome[50];
    int i;

        printf("Nome do produto para atualizar estoque:\n");
        scanf("%s", nome);

    for (i = 0; i < QTD_PRODUTOS; i++) {
        if (strcmp(produtos[i], nome) == 0) {
        printf("Nova quantidade em estoque:\n");
        scanf("%d", &nova_quantidade);

        produtos_struct[i].quantidade = nova_quantidade;
        printf("Estoque atualizado com sucesso!\n");
        return;

        }
    }
    printf("Produto nao encontrado!\n");
}


//Funcao Para Vender Produto
void vender_produto(){
    char continuar;
    char nome[50];
    int quantidade;
    int i;

    do{
        // Limpa a tela
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("===== VENDA DE PRODUTOS =====\n\n");

        printf("Produtos disponiveis:\n"); //Listar os Profutos
            for (i = 0; i < QTD_PRODUTOS; i++) {
                if (strlen(produtos[i]) > 0) {
                printf("- %s\n", produtos[i]);
                }
            }
        printf("\nNome do produto (ou digite 'sair' para cancelar): ");
            scanf(" %49[^\n]", nome);
            while(getchar() != '\n');

        if (strcmp(nome, "sair") == 0) {
            break;
        }
    for (i = 0; i < QTD_PRODUTOS; i++) {
        if (strcmp(produtos[i], nome) == 0) {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            while(getchar() != '\n');

                printf("\nVenda de %d unidades de %s realizada com sucesso!\n", 
                quantidade, produtos[i]);

                printf("\nDeseja realizar outra venda? (S/N): ");
                scanf(" %c", &continuar);
                while(getchar() != '\n'); 
                break;
        }
    }

        if (i == QTD_PRODUTOS) {
            printf("\nProduto não encontrado!\n");
            printf("Pressione Enter para continuar...");
            getchar();
        }


    }while(continuar =='S' || continuar == 's');
        //Limpar A Tela
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

}
