#include "Cartas.h"
#include "Reglas.h"
#pragma once
#include <iostream>

class bot : public virtual reglas
{
protected:
    int decision;

public:
    bot();
    bot(int);
    bot(int[3], int[3], int[3], int[3], int);
    int cantarenvido();
    int decidirTruco();
    int envido();
    int cantarTruco();
};
