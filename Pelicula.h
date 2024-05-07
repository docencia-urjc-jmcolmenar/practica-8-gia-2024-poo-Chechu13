//
// Created by chech on 07/05/2024.
//

#ifndef PRACTICA_8_GIA_2024_POO_CHECHU13_PELICULA_H
#define PRACTICA_8_GIA_2024_POO_CHECHU13_PELICULA_H
#include "Recurso.h"

class Pelicula : public Recurso{
public:
    Pelicula(char *t, int a, char* i,int d) : Recurso(t,a,i,d){};
    double calcularCostePrestamo();
};


#endif //PRACTICA_8_GIA_2024_POO_CHECHU13_PELICULA_H
