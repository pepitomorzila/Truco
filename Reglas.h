#include "Cartas.h"
#pragma once
#include <iostream>

class reglas : public cartas
{

protected:
    int tantos1;
    int tantos2;
    int valor_truco;
    
public:
    reglas();
    reglas(int [3], int [3], int [3], int [3], int, int, int);
    reglas(int,int,int);
    int Envido1(int[3]);
    int Envido2(int[3]);
<<<<<<< HEAD
    void Truco(int[3],int[3],int);
=======
    void Truco(int[3],int[3]);
>>>>>>> 8d7b0ec454769c4bd2419c6e7e87bbc915def630
    int getTruco();
};
