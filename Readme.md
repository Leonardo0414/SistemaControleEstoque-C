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

Basta clicar duas vezes sobre o arquivo executável desejado ou executá-lo via linha de comando ex:(sistema.exe) ou (programa.exe).

### Compilando o Código
Se preferir compilar o código você mesmo !! NECESSITA TER COMPILADOR INSTALADO NA MAQUINA RECOMENDO(https://www.msys2.org/docs/installer/)

**Versão Estruturada:**
**NA RAIZ DO PROJETO EXECUTE NO TERMINAL**
gcc -o programa.exe main.c src/cliente.c src/produto.c -I include

**NA RAIZ DO PROJETO EXECUTE NO TERMINAL**
**Versão Não Estruturada:**
gcc -o sistema.exe main.c

## Estrutura de Arquivos
### Versão Estruturada
projeto/
│
├── include/
│   ├── tipos.h      (definições de tipos e estruturas)
│   ├── cliente.h    (declarações de funções de cliente)
│   └── produto.h    (declarações de funções de produto)
│
├── src/
│   ├── cliente.c    (implementação das funções de cliente)
│   └── produto.c    (implementação das funções de produto)
│
├── main.c           (função principal e menu)
│
└── programa.exe     (executável compilado)

### Versão Não Estruturada
projeto/
│
├── main.c  (todo o código em um único arquivo)
│
└── sistema.exe         (executável compilado)

## Observações
Este projeto foi desenvolvido para fins estudantis como parte do aprendizado de programação em C. O código implementa conceitos básicos de algoritmos e estruturas de dados.

## Autor
Leonardo Pereira Porn
LinkedIn: https://www.linkedin.com/in/leonardopereira12/

## Licença
Este projeto é para fins educacionais e pode ser usado livremente para aprendizado.