# Sistema de Controle de Clientes e Produtos

## Descrição
Este é um sistema simples para controle de clientes e produtos desenvolvido em C. O sistema permite cadastrar, listar e excluir clientes e produtos, além de atualizar o estoque dos produtos. Foi desenvolvido como trabalho para a disciplina de Fundamentos de Algoritmos e Programação.

O projeto está disponível em duas versões:
- **Versão estruturada**: Com arquivos separados em pastas (include e src)
- **Versão não estruturada**: Com todo o código em um único arquivo

## Funcionalidades
- Cadastro de clientes
- Listagem de clientes
- Exclusão de clientes
- Cadastro de produtos
- Listagem de produtos
- Exclusão de produtos
- Atualização de estoque

## Tecnologias Utilizadas
- Linguagem C
- Estruturas de dados
- Manipulação de strings
- Alocação de memória

## Como Executar

Para sua conveniência, os executáveis já compilados estão disponíveis na raiz do projeto:

- `programa.exe`: Versão estruturada
- `sistema.exe`: Versão não estruturada (arquivo único)

Basta clicar duas vezes sobre o arquivo executável desejado ou executá-lo via linha de comando, por exemplo:

```bash
./sistema.exe
./programa.exe
```

### Compilando o Código

> ⚠️ É necessário ter um compilador instalado na máquina.  
> Recomendo o uso do [MSYS2](https://www.msys2.org/docs/installer/)

**Versão Estruturada (na raiz do projeto):**

```bash
gcc -o programa.exe main.c src/cliente.c src/produto.c -I include
```

**Versão Não Estruturada (na raiz do projeto):**

```bash
gcc -o sistema.exe main.c
```

## Estrutura de Arquivos

### Versão Estruturada

```
projeto/
├── include/
│   ├── tipos.h          # Definições de tipos e estruturas
│   ├── cliente.h        # Declarações de funções de cliente
│   └── produto.h        # Declarações de funções de produto
├── src/
│   ├── cliente.c        # Implementação das funções de cliente
│   └── produto.c        # Implementação das funções de produto
├── main.c               # Função principal e menu
└── programa.exe         # Executável compilado
```

### Versão Não Estruturada

```
projeto/
├── main.c               # Todo o código em um único arquivo
└── sistema.exe          # Executável compilado
```

## Observações
Este projeto foi desenvolvido para fins estudantis como parte do aprendizado de programação em C. O código implementa conceitos básicos de algoritmos e estruturas de dados.

## Autor
Leonardo Pereira Porn
LinkedIn: https://www.linkedin.com/in/leonardopereira12/

## Licença
Este projeto é para fins educacionais e pode ser usado livremente para aprendizado.