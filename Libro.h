//
// Created by chech on 07/05/2024.
//

#ifndef PRACTICA_8_GIA_2024_POO_CHECHU13_LIBRO_H
#define PRACTICA_8_GIA_2024_POO_CHECHU13_LIBRO_H
#include "Recurso.h"

class Libro : public Recurso {
public:
    Libro(char *t, int a, char* i,int d) : Recurso(t,a,i,d){};
    double calcularCostePrestamo();
};


#endif //PRACTICA_8_GIA_2024_POO_CHECHU13_LIBRO_H
