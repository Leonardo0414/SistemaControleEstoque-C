#ifndef TIPOS_H //Evita Loop de inclusao pelo compilador, Se ja foi Definido Pula Para o endif

#define TIPOS_H

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

#endif //Finaliza O Bloco