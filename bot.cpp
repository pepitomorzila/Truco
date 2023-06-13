#include "bot.h"
#include "Reglas.h"
#include <cstdlib>
#include <ctime>

bot::bot()
{
}

bot::bot(int _decision)
{
    decision = _decision;
}

bot::bot(int _cartas1[3], int _cartas2[3], int _palos1[3], int _palos2[3], int _decision) : cartas(cartas1, cartas2, palos1, palos2)
{
    decision = _decision;
}
/*
bot::int doble_envido(int tantos2){
    if (tantos2 > )
}
bot::int real_envido(int tantos2){

}
bot::int falta_envido(int tantos2){

}
*/

int bot::cantarenvido()
{
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
das
int bot::cantartruco()
{
    if (mano2 > 1)
    {
        decision = 1;
    }
    else if (mano2 < 1)
    {
       decision = 0;
    }
    return decision;
}

int bot::envido(int reglas::getTantos2())
{

    int desc = 1 + rand() % 5;
    if (desc == 1) decision = 1;
    else if (desc == 2) decision = 2;
    else if (desc == 3) decision = 3;


    
    return decision;
}