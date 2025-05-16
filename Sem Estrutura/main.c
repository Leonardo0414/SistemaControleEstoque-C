//Includes de Bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Variaveis Constantes
#define QTD_CLIENTES 30
#define QTD_PRODUTOS 30

//Classe Endereco
typedef struct Endereco {
    //Variaveis caractere, Com seus Respectivos Tamanhos em Array
    char rua[100];
    char cidade[50];
    char estado[2];
    char cep[10];
}Endereco;

//Classe Cliente
typedef struct Cliente {
    //Variaveis caractere, Com seus Respectivos Tamanhos em Array
    char nome[200];
    char contato[200];
}Cliente;

//Classe Produto
typedef struct Produto{
    char nome[50]; 
    float preco;
    int quantidade;
}Produto;

// ===== DECLARAÇÃO DE VARIÁVEIS GLOBAIS =====

//Variaveis para armazenar dados de clientes
char clientes[QTD_CLIENTES][50]={
    "Cliente 01",
    "",
    "Cliente 03"
};
struct Cliente clientes_struct[QTD_CLIENTES];//Definicao de array para armazenar dados dos clientes
int qtd_clientes_cadastrados = 3;//Inicializa a Variavel Com 3 Clientes Cadastrados

//Variaveis para armazenar dados de produtos
char produtos[QTD_PRODUTOS][50]={
    "Produto 01",
    "",
    "Produto 03"
};
struct Produto produtos_struct[QTD_PRODUTOS]; //Indica uma variavel Produto matriz de strings(nomes)
int qtd_produtos_cadastrados = 3;//Inicializa a Variavel Com 3 Produtos Cadastrados

// ===== FUNÇÕES DE CLIENTE =====

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
    scanf(" %49[^\n]", nome);

    for (i = 0; i < QTD_CLIENTES; i++) {
        if (strcmp(clientes[i], nome) == 0) {
            clientes[i][0] = '\0';
            printf("Cliente excluido com sucesso!\n");
            return;
        }
    }
    printf("Cliente nao encontrado!\n");
}

// ===== FUNÇÕES DE PRODUTO =====

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



// ===== FUNÇÃO PRINCIPAL =====

int main(){
    int opcao;

    do {
        printf("\n==== MENU ====\n");
        printf("1. Inserir cliente\n");
        printf("2. Listar clientes\n");
        printf("3. Excluir cliente\n");
        printf("4. Inserir produto\n");
        printf("5. Listar produtos\n");
        printf("6. Excluir produto\n");
        printf("7. Atualizar estoque\n");
        printf("8. Vender produto\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        while(getchar() != '\n');

        switch (opcao) {
            case 1:
                insere_cliente();
                break;
            case 2:
                printf("====================\n");
                listar_clientes();
                break;
            case 3:
                excluir_clientes();
                break;
            case 4:
                insere_produto();
                break;
            case 5:
                printf("====================\n");
                listar_produtos();
                break;
            case 6:
                excluir_produto();
                break;
            case 7:
                atualizar_estoque();
                break;
            case 8:
                vender_produto();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}