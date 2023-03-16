#ifndef LISTA_H
#define LISTA_H

// DEFININDO TAMANHO MÁXIMO DO VETOR COMO 10
#define TAM_MAX 10

// CRIANDO A CLASSE LISTA
class lista{
private:
    // CRIANDO CAMPOS COM VETOR ESTÁTICO E UMA VARIÁVEL PARA GUARDAR O TAMANHO DA LISTA
    int vetor[TAM_MAX];
    int n_elementos;  
public:
    // ASSINATURAS DOS MÉTODOS DA LISTA
    lista();
    bool vazia();
    bool cheia();
    int tamanho();
    bool modificar(int pos, int valor);
    int obter(int pos);
    void print_lista();
    int obter_pos(int valor);
    bool inserir(int pos, int valor);
    bool remover(int pos);
};


       
        

#endif