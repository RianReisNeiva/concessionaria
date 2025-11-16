# Sistema de Estoque de Carros (C)

Este projeto foi desenvolvido por **Rian Reis Neiva** e **Victor Santos** para aprender Git, modularização em C e desenvolvimento colaborativo.

## 🧰 Tecnologias usadas
- Linguagem C
- Git e GitHub
- Arquivos `.h` e `.c`
- Armazenamento em arquivo TXT

## 📁 Estrutura do projeto
estoque/
│
├── src/
│   ├── main.c
│   ├── estoque.c
│   └── arquivo.c
│
├── include/
│   ├── estoque.h
│   └── arquivo.h
│
└── data/
    └── carros.txt

## 🚗 Funcionalidades
- Adicionar carro
- Listar carros cadastrados
- Atualizar carro
- Remover carro
- Salvar e carregar dados automaticamente

## ▶ Como compilar
- Para rodar o projeto apos realizar uma alteração, é necessário rodar o comando:"gcc src/main.c src/arquivo.c src/estoque.c -I include -o app.exe"

## ▶ Como executar
-Para rodar o projeto utilize o comando: ".\app.exe"
