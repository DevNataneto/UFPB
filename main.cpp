#include <iostream>
#include "lista.h"


using namespace std;


int main(){


    // TESTANDO A LISTA
    lista l1;


    l1.inserir(1, 10);
    l1.inserir(2, 3);
    l1.inserir(3, 15);
    
    l1.modificar(2, 25);

    l1.remover(3);

    cout << "==== TAMANHO DA LISTA ====" << endl;
    cout << l1.tamanho() << endl;
    cout << "==== A LISTA ESTA CHEIA? ====" << endl;
    if(l1.cheia() == 1){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    cout << "==== A LISTA ESTA VAZIA? ====" << endl;    
    if(l1.vazia() == 1){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    cout << "==== ELEMENTOS DA LISTA ====" << endl;
    l1.print_lista();


    
    


    return 0;
    

    
    

    
}