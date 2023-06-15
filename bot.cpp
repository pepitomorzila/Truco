#include "bot.h"
#include "Reglas.h"
#include <cstdlib>
#include <ctime>

bot::bot()
{
}

bot::bot(int _cartas1[3], int _cartas2[3], int _palos1[3], int _palos2[3], int _decision) : cartas(cartas1, cartas2, palos1, palos2)
{
    decision = _decision;
}

int bot::cantarenvido()
{
    reglas::getTantos2();
    if (tantos2 > 25)
    {
        decision = 1;
    }
    else if (tantos2 < 25)
    {
        decision = 0;
    }
    return decision;
}

int bot::envido()
{
    int desc = 1 + rand() % 5;
    if (desc == 1) decision = 1;
    else if(desc == 2) decision == 2;
    else if (desc == 3) decision = 3;
    else if(desc == 4 ||desc == 5 ) decision = 0;
    return decision;
}

int bot::decidirTruco()
{
    int desc = 1 + rand() % 6;
    if (desc == 2 || desc == 1)
        decision = 1;
    else if (desc == 3 || desc == 4 || desc == 5 || desc == 6)
    {
        decision = 0;
    }

    return decision;
}
int bot::cantarTruco()
{
    int desc = 1 + rand() % 8;
    if (desc == 1 || desc == 2 || desc == 3)
        decision = 1;
    else if (desc == 4 || desc == 5 || desc == 6 || desc == 7 || desc == 8)
    {
        decision = 0;
    }

    return decision;
}