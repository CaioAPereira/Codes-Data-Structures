// A main serve para chamarmos os métodos e para inicialização.

#include <cstdlib>

#include "cEnade.h"

using namespace std;


int main(int argc, char** argv) {

    
    cEnade obj1;
    obj1.preencherMatriz();
    obj1.imprimirMatriz();

    return 0;
}

