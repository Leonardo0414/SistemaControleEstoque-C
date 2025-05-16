#ifndef PRODUTO_H //Evita Loop de inclusao pelo compilador, Se ja foi Definido Pula Para o endif

#define PRODUTO_H


#include "tipos.h"

void insere_produto(); //Funcao que nao retorna valor
void listar_produtos(); //Funcao que mostrara produtos cadastrados
void excluir_produto(); //Funcao que serve para remover produtos
void atualizar_estoque(); //Funcao para alterar a quantidade de produtos


extern char produtos[QTD_PRODUTOS][50]; //Indica uma variavel produtos matriz de strings(nomes) no arquivo (produto.c)
extern struct Produto produtos_struct[QTD_PRODUTOS]; //Indica que existe um array com estrutura Produto no arquivo (tipos.h)

extern int qtd_produtos_cadastrados; //Variavel inteira que faz a contagem de produtos cadastrados


#endif //Finaliza o bloco