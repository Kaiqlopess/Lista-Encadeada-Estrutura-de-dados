# 📚 Implementação de Lista Encadeada em C++

Este projeto apresenta a implementação da estrutura de dados **Lista Encadeada Simples** em C++ usando alocação dinâmica e ponteiros.

---

## 📌 O que é uma Lista Encadeada?

A **Lista Encadeada** é uma coleção de elementos (nós) onde cada elemento aponta para o próximo, formando uma sequência dinâmica.

Diferente de arrays, a lista encadeada permite inserir e remover elementos com mais flexibilidade, sem precisar deslocar os demais.

---

## 🧠 Lógica da Implementação

A lista é representada por um ponteiro chamado `cabeca` que aponta para o primeiro nó da lista.

### Métodos principais:

- `adicionarElemento(int d)`: adiciona um elemento ao final da lista;
- `exibirElementos()`: exibe todos os elementos da lista na ordem;
- `removerItem(int d)`: remove o primeiro nó que contenha o valor `d`.

---

## 🖥️ Exemplo de Execução

```cpp
ListaEncadeada l;

l.adicionarElemento(4);
l.adicionarElemento(5);
l.adicionarElemento(6);

l.removerItem(4);

l.exibirElementos();  
// Saída:
// 5->6->NULL
