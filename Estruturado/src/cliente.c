//Inclusao de Bibliotecas Externas
#include <stdio.h>
#include <string.h>

//Inclusao de Arquivo externo
#include "../include/cliente.h"

//Variaveis que estao declaradas no arquivo (cliente.h)
char clientes[QTD_CLIENTES][50]={
    "Cliente 01",
    "",
    "Cliente 03"
};

struct Cliente clientes_struct[QTD_CLIENTES];//Definicao de array para armazenar dados dos clientes
int qtd_clientes_cadastrados = 3;//Inicializa a Variavel Com 3 Clientes Cadastrados

//Funcao Para Inserir Novo Cliente
void insere_cliente() {
    int i = 0;

        while (strlen(clientes[i]) > 0) {
            i++;
        }
    
    printf("Nome do cliente:\n");
    scanf(" %99[^\n]", clientes[i]);
}

//Funcao Para Listar Clientes
void listar_clientes() {
    int i;
    int encontrou = 0;
    
    for (i = 0; i < QTD_CLIENTES; i++) {
        if (strlen(clientes[i]) > 0) {
            printf("%s\n", clientes[i]);
            encontrou = 1;  
        }
    }
    
    if (encontrou == 0) {   
        printf("Nenhum cliente cadastrado!\n");
    }
}

//Funcao Para Excluir Cliente
void excluir_clientes() {
    char nome[50];
    int i;
    
        printf("Nome do cliente a excluir:\n");
        scanf("%s", nome);

    for (i = 0; i < QTD_CLIENTES; i++) {

        if (strcmp(clientes[i], nome) == 0) {
            clientes[i][0] = '\0';
            printf("Cliente excluido com sucesso!\n");
            return;

        }
    }
    printf("Cliente nao encontrado!\n");
}