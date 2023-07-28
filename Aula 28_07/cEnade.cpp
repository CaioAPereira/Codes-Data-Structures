// Classe para implementação de métodos.

#include "cEnade.h"
#include <iostream>
#include <iomanip>

cEnade::cEnade() {
}

cEnade::cEnade(const cEnade& orig) {
}

cEnade::~cEnade() {
}

void cEnade::preencherMatriz() {

    int matriz[3][4], i = 0, j = 0, c = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            c++;
            this->matriz[i][j] = c;
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            c = this->matriz[2-i][3-j];
            this->matriz[i][j] = c;
        }
    }

}

// Todo atributo advém do this. } Ele significa: Objeto dessa classe.

void cEnade::imprimirMatriz(){
    
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            std::cout << std::setw(3) << this->matriz[i][j];
        }
        std::cout << std::endl;
    }
}

// Em orientação a objetos, tudo se baseia em instâncias, ou seja, reservar um
// espaço em memória para todas as características de um objeto.