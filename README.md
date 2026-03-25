# 🚀 Estudos C++ - FATEC

Repositório destinado ao armazenamento de exercícios e projetos desenvolvidos durante as aulas de Algoritmos e Programação da FATEC.

## 📌 Sumário
* [Calculadora de Médias](#-projeto-calculadora-de-médias)
* [Operação com Quatro Valores](#-projeto-operação-com-quatro-valores)
* [Reajuste Salarial](#-projeto-reajuste-salarial)

## 🧮 Projeto: Calculadora de Médias
Este é um programa simples em C++ que calcula a média aritmética de duas notas (P1 e P2).

### ✨ Funcionalidades:
* **Validação de Dados:** O programa não aceita notas menores que 0 ou maiores que 10.
* **Laço de Repetição:** Utiliza `while` para garantir que o usuário digite uma nota válida antes de prosseguir.
* **Feedback ao Aluno:** Exibe se o aluno foi aprovado ou reprovado com base na média 6.0.
* **Lógica Aplicada:** $$Média = \frac{P1 + P2}{2}$$

### 🛠️ Tecnologias Utilizadas:
* Linguagem C++
* Compilador G++ (MinGW/MSYS2)
* VS Code

### 📖 Como rodar o código:
1. Abra o terminal na pasta do arquivo.
2. Compile com: `g++ calculadora.cpp -o calculadora.exe`
3. Execute com: `./calculadora.exe`

## 🧮 Projeto: Operação com quatro valores
Este programa efetua a leitura de quatro valores inteiros e realiza cálculos específicos entre eles com base na escolha do usuário.

### ✨ Funcionalidades:
* **Estruturação de Dados:** Utiliza struct para organizar os quatro valores de entrada de forma coesa.
* **Modularização:** Cálculos de Produto e Soma são realizados por funções independentes.
* **Menu Interativo:** O usuário utiliza um menu baseado em switch-case para decidir qual operação visualizar.
* **Lógica Aplicada:** Realiza o Produto ($A \times C$) e a Soma ($B + D$).

### 🛠️ Tecnologias Utilizadas:
* Linguagem C++
* Compilador G++ (MinGW/MSYS2)
* VS Code

### 📖 Como rodar o código:
1. Abra o terminal na pasta do arquivo.
2. Compile com: g++ Operacoes_com_quatro_valores.cpp -o operacoes.exe
3. Execute com: ./operacoes.exe

## 🧮 Projeto: Reajuste Salarial
Algoritmo para calcular o impacto de um percentual de reajuste sobre o salário mensal.

### ✨ Funcionalidades:
* **Precisão:** Uso de float para garantir cálculos corretos com centavos e porcentagens.
* **Modularidade:** Possui uma função dedicada ao cálculo do reajuste.
* **Lógica Aplicada:** O cálculo do Novo Salário ($NS$) é feito somando o salário atual ao valor do reajuste:
$$NS = SM + \left( \frac{SM \times PR}{100} \right)$$

### 🛠️ Tecnologias Utilizadas:
* Linguagem C++
* Compilador G++ (MinGW/MSYS2)
* VS Code

### 📖 Como rodar o código:
1. Abra o terminal na pasta do arquivo.
2. Compile com: g++ Reajuste_salarial.cpp -o reajuste.exe
3. Execute com: ./reajuste.exe