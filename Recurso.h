//
// Created by chech on 07/05/2024.
//

#ifndef PRACTICA_8_GIA_2024_POO_CHECHU13_RECURSO_H
#define PRACTICA_8_GIA_2024_POO_CHECHU13_RECURSO_H

#include <cstring>

class Recurso {
protected:
    char* titulo;
    int anno;
    char* identificador;
    int extension;
public:
    Recurso(char* t ,int a,char* i ,int d) : titulo(t),anno(a),identificador(i),extension(d){}
    char *getTitulo() const {
        return titulo;
    }
    virtual double calcularCostePrestamo() = 0;
};


#endif //PRACTICA_8_GIA_2024_POO_CHECHU13_RECURSO_H
