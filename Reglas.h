#include "Cartas.h"
#pragma once
#include <iostream>

class reglas : public virtual cartas
{

protected:
    int tantos1;
    int tantos2;
    int valor1_juego1;
    int valor1_juego2;
    int valor2_juego1;
    int valor2_juego2;
    int valor3_juego1;
    int valor3_juego2;

public:
    reglas();
    reglas(int[3], int[3], int[3], int[3], int, int, int, int, int, int, int, int);
    reglas(int, int, int, int, int, int, int, int);
    int Envido1();
    int Envido2();
    void Juego1();
    void Juego2();
    void Juego3();
    int getJuego1_1();
    int getJuego1_2();
    int getJuego2_1();
    int getTantos2();
    int getJuego2_2();
    int getJuego3_1();
    int getJuego3_2();
};

