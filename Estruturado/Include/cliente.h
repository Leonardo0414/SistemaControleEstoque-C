#ifndef CLIENTE_H //Evita Loop de inclusao pelo compilador, Se ja foi Definido Pula Para o endif

#define CLIENTE_H

#include "tipos.h" //Inclusao do arquivo pra utilizar estrutas e variaveis 



void insere_cliente(); //Funcao que nao retorna valor
void listar_clientes(); //Funcao que mostrara clientes cadastrados
void excluir_clientes(); //Funcao que serve para remover cliente


extern char clientes[QTD_CLIENTES][50]; //Indica uma variavel clientes matriz de strings(nomes) no arquivo (cliente.c)
extern struct Cliente clientes_struct[QTD_CLIENTES]; //Indica que existe um array com estrutura Cliente no arquivo (tipos.h)

extern int qtd_clientes_cadastrados; //Variavel inteira que faz a contagem de clientes cadastrados

#endif //Finaliza o bloco