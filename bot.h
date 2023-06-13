#include "Cartas.h"
#include "Reglas.h"
#pragma once
#include <iostream>

class bot : public reglas
{
protected:
   int decision;

public:
   bot();
   bot(int);
   bot(int[3], int[3], int[3], int[3], int);
   int cantarenvido();
   /*int doble_envido(int);
   int real_envido(int);
   int falta_envido(int);*/
   int cantartruco();
   int envido(int);
};
asda