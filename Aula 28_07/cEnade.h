
#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    
    // OBS: Variáveis não se declara no .h .
    // Atributos: 
    int matriz[3][4];
    
    // Métodos:
    
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    void preencherMatriz();
    void imprimirMatriz();
private:

};

#endif /* CENADE_H */

