#include "bot.h"
#include <cstdlib>
#include <ctime>


bot::bot(){}


int bot::setDecidir()
{
    int des;
  des = rand() % 2;
  if(des = 1){
    decision = 1;
  }else if(des = 2){
    decision = 0;
  }
  return decision;
}

int bot::cantarenvido(int tantos2)
{
    if (tantos2 > 25)
    {
        decision = 1;
    }else if(tantos2 < 25)
    {
        decision = 0;
    }
    return decision;
}
int bot::cantartruco(int mano2)
{
    if (mano2 > 1)
    {
        decision = 1;
    }else if (mano2 < 1)
    {
        decision = 0;
    }
}