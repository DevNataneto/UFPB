#include <iostream>
#include "lista.h"

using namespace std;

    // IMPLEMENTANDO A FUNÇÃO 'CRIA_LISTA', A PARTIR DO MÉTODO CONSTRUTOR
    lista::lista(){
        n_elementos = 0;
    }

    // VERIFICANDO SE A LISTA ESTÁ VAZIA
    bool lista::vazia(){
        // SE O NÚMERO DE ELEMENTOS FOR MAIOR QUE 0, A LISTA NÃO ESTÁ VAZIA.
        if(n_elementos > 0){
            return false;
        }
        // DO CONTRÁRIO ESTÁ.
        return true;
    }
    void lista::print_lista(){
        for(int i = 0; i < n_elementos; i++){
            cout << "[" << vetor[i] << "]"; 
        }
    }

    // VERIFICANDO SE A LISTA ESTÁ CHEIA
    bool lista::cheia(){
        // SE O NÚMERO DE ELEMENTOS FOR IGUAL AO TAMANHO MÁXIMO DA LISTA, ELA ESTÁ CHEIA.
        if(n_elementos == TAM_MAX){
            return true;
        }
        // CASO CONTRÁRIO, ELA NÃO ESTÁ CHEIA.
        return false;
    }

    // IMPLEMENTANDO A FUNÇÃO QUE RETORNA O TAMANHO DA LISTA(NÚMERO DE ELEMENTOS).
    int lista::tamanho(){
        return n_elementos;
    }

    // IMPLEMENTANDO A FUNÇÃO DE MODIFICAR UM VALOR DE UMA DETERMINADA POSIÇÃO.
    bool lista::modificar(int pos, int valor){
        if(vazia() || pos <= 0 || pos > n_elementos){
            return false;
        }
        vetor[pos-1] = valor;

        return true;

    }
    // FUNÇÃO QUE OBTEM O VALOR DE UMA DETERMINADA POSIÇÃO NA LISTA
    int lista::obter(int pos){
        if(vazia() || pos <= 0 || pos > n_elementos){
            return false;
        }

        return (vetor[pos-1]);
    }
    // FUNÇÃO QUE DADO UM VALOR, PROCURA SUA POSIÇÃO NA LISTA.
    int lista::obter_pos(int valor){
        if(vazia()){
            return -1;
        }
        for(int i = 0; i < n_elementos; i++){
            if(vetor[i] == valor){
                return (i+1);
            }
        }
        return 0;
    }
    // IMPLEMENTANDO FUNÇÃO DE INSERÇÃO NA LISTA.
    bool lista::inserir(int pos, int valor){
        // PRIMEIRO VERIFICA SE A LISTA NÃO ESTÁ CHEIA OU SE A POSIÇÃO É VÁLIDA.
        if(cheia() || pos <= 0 || pos > n_elementos+1){
            return false;
        }
        /* DEPOIS PERCORRO MINHA LISTA DO FINAL PRO COMEÇO, MOVENDO OS ELEMENTOS 
        PARA A DIREITA, ATÉ CHEGAR NA POSIÇÃO QUE QUERO INSERIR.*/
        for(int i = n_elementos; i >= pos; i--){
            vetor[i] = vetor[i-1];
        }
        // INSERINDO NA POSIÇÃO CORRETA.
        vetor[pos-1] = valor;
        n_elementos++;

        return true;
    }
    // IMPLEMENTANDO FUNÇÃO DE REMOÇÃO NA LISTA
    bool lista::remover(int pos){
        // PRIMEIRO VERIFICA SE A LISTA NÃO ESTÁ VAZIA OU SE A POSIÇÃO É VÁLIDA.
        if(vazia() || pos <= 0 || pos > n_elementos){
            return false;
        }
        // DEPOIS PERCORRO MINHA LISTA E REMOVO NA POSIÇÃO DESEJADA
        for(int i = pos - 1; i < n_elementos-1; i++){
            vetor[i] = vetor[i+1];
        }
        // DECREMENTO O TAMANHO DA MINHA LISTA
        n_elementos--;
        return true;
    }



