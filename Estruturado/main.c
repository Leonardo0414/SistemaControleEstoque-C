//Include Biblioteca Externa
#include <stdio.h>

//Inclusao de Arquivos Externos
#include "Include/cliente.h"
#include "Include/produto.h"

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
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

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
                case 0:
                    printf("Saindo...\n");
                    break;

                default:
                    printf("Opcao invalida!\n");
            }

    } while (opcao != 0);

        return 0;
}