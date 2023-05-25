#include "Cartas.h"
#pragma once
#include <iostream>

 class bot : public cartas
 {
    protected:
    int decision;
    public:
    bot();
    int setDecidir();
    int cantarenvido(int);
    int cantartruco(int);
 };