#include "Reglas.h"
#include <iostream>

reglas::reglas()
{
}

reglas::reglas(int _cartas1[3], int _cartas2[3], int _palos1[3], int _palos2[3], int _tantos1, int _tantos2, int _valor1_juego1, int _valor1_juego2, int _valor2_juego1, int _valor2_juego2, int _valor3_juego1, int _valor3_juego2) : cartas(_cartas1, _cartas2, _palos1, _palos2)
{
    tantos1 = _tantos1;
    tantos2 = _tantos2;
    valor1_juego1 = _valor1_juego1;
    valor1_juego2 = _valor1_juego2;
    valor2_juego1 = _valor2_juego1;
    valor2_juego2 = _valor2_juego2;
    valor3_juego1 = _valor3_juego1;
    valor3_juego2 = _valor3_juego2;
}

reglas::reglas(int _tantos1, int _tantos2, int _valor1_juego1, int _valor1_juego2, int _valor2_juego1, int _valor2_juego2, int _valor3_juego1, int _valor3_juego2)
{
    tantos1 = _tantos1;
    tantos2 = _tantos2;
    valor1_juego1 = _valor1_juego1;
    valor1_juego2 = _valor1_juego2;
    valor2_juego1 = _valor2_juego1;
    valor2_juego2 = _valor2_juego2;
    valor3_juego1 = _valor3_juego1;
    valor3_juego2 = _valor3_juego2;
}

int reglas::Envido1()
{
    tantos1 = 0;
    bool band = false;

    if (palos1[0] == palos1[1] && palos1[0] == palos1[2] && palos1[1] == palos1[2])
    {
        tantos1 = 100;
        band = true;
    }
    // todas distintas
    else if (palos1[0] != palos1[1] && palos1[0] != palos1[2] && palos1[1] != palos1[2] && band == false)
    {
        tantos1 = 0;
        band = true;
    }
    // 0 y 1 no negras
    else if (palos1[0] == palos1[1] && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 20;
        band = true;
    }
    // 0 y 2 no negras
    else if (palos1[0] == palos1[2] && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 20;
        band = true;
    }
    // 0 negra y 1 no
    else if (palos1[0] == palos1[1] && cartas1[0] == 10 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 10;
        band = true;
    }
    // 0 negra y 1 no
    else if (palos1[0] == palos1[1] && cartas1[0] == 11 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 9;
        band = true;
    }
    // 0 negra y 1 no
    else if (palos1[0] == palos1[1] && cartas1[0] == 12 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 8;
        band = true;
    }

    // 0 negra y 2 no
    else if (palos1[0] == palos1[2] && cartas1[0] == 10 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 10;
        band = true;
    }
    // 0 negra y 2 no
    else if (palos1[0] == palos1[2] && cartas1[0] == 11 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 9;
        band = true;
    }
    // 0 negra y 2 no
    else if (palos1[0] == palos1[2] && cartas1[0] == 12 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 8;
        band = true;
    }
    // o no y 1 negra
    else if (palos1[0] == palos1[1] && cartas1[1] == 10 && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 10;
        band = true;
    }
    // o no y 1 negra
    else if (palos1[0] == palos1[1] && cartas1[1] == 11 && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 9;
        band = true;
    }
    // o no y 1 negra
    else if (palos1[0] == palos1[1] && cartas1[1] == 12 && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[1] + 8;
        band = true;
    }
    // 0 no y 2 negra
    else if (palos1[0] == palos1[2] && cartas1[2] == 10 && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 10;
        band = true;
    }
    // 0 no y 2 negra
    else if (palos1[0] == palos1[2] && cartas1[2] == 11 && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 9;
        band = true;
    }

    // 0 no y 2 negra
    else if (palos1[0] == palos1[2] && cartas1[2] == 12 && cartas1[0] != 10 && cartas1[0] != 11 && cartas1[0] != 12 && band == false)
    {
        tantos1 = cartas1[0] + cartas1[2] + 8;
        band = true;
    }
    // 1 negra y 2 no
    else if (palos1[1] == palos1[2] && cartas1[1] == 10 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 10;
        band = true;
    }
    // 1 negra y 2 no
    else if (palos1[1] == palos1[2] && cartas1[1] == 11 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 9;
        band = true;
    }
    // 1 negra y 2 no
    else if (palos1[1] == palos1[2] && cartas1[1] == 12 && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 8;
        band = true;
    }

    // 1 y 2 no negras
    else if (palos1[1] == palos1[2] && cartas1[2] != 10 && cartas1[2] != 11 && cartas1[2] != 12 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 20;
        band = true;
    }

    // 1 no y 2 negra
    else if (palos1[1] == palos1[2] && cartas1[2] == 10 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 10;
        band = true;
    }

    // 1 no y 2 negra
    else if (palos1[1] == palos1[2] && cartas1[2] == 11 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 9;
        band = true;
    }
    // 1 no y 2 negra
    else if (palos1[1] == palos1[2] && cartas1[2] == 12 && cartas1[1] != 10 && cartas1[1] != 11 && cartas1[1] != 12 && band == false)
    {
        tantos1 = cartas1[1] + cartas1[2] + 8;
        band = true;
    }
    //
    // 0 y 2 negras
    else if (palos1[0] == palos1[2] && cartas1[0] == 10 || cartas1[0] == 11 || cartas1[0] == 12 && cartas1[2] == 10 || cartas1[2] == 11 || cartas1[2] == 12 || band == false)
    {
        tantos1 = 20;
        band = true;
    }
    else if (palos1[0] == palos1[1] && cartas1[0] == 10 || cartas1[0] == 11 || cartas1[0] == 12 && cartas1[1] == 10 || cartas1[1] == 11 || cartas1[1] == 12 || band == false)
    {
        tantos1 = 20;
        band = true;
    }
    // 1 y 2 negras
    else if (palos1[1] == palos1[2] && cartas1[2] == 10 || cartas1[2] == 11 || cartas1[2] == 12 && cartas1[1] == 10 || cartas1[1] == 11 || cartas1[1] == 12 || band == false)
    {
        tantos1 = 20;
        band = true;
    }

    return tantos1;
}

int reglas::Envido2()
{
    {
        tantos2 = 0;
        bool band = false;
        // todas dsitintos
        if (palos2[0] != palos2[1] && palos2[0] != palos2[2] && palos2[1] != palos2[2] && band == false)
        {
            tantos2 = 0;
            band = true;
        }
        // 0 y 1 no negras
        else if (palos2[0] == palos2[1] && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 20;
            band = true;
        }
        // 0 y 2 no negras
        else if (palos2[0] == palos2[2] && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 20;
            band = true;
        }
        // 0 negra y 1 no
        else if (palos2[0] == palos2[1] && cartas2[0] == 10 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 10;
            band = true;
        }
        // 0 negra y 1 no
        else if (palos2[0] == palos2[1] && cartas2[0] == 11 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 9;
            band = true;
        }
        // 0 negra y 1 no
        else if (palos2[0] == palos2[1] && cartas2[0] == 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 8;
            band = true;
        }

        // 0 negra y 2 no
        else if (palos2[0] == palos2[2] && cartas2[0] == 10 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 10;
            band = true;
        }
        // 0 negra y 2 no
        else if (palos2[0] == palos2[2] && cartas2[0] == 11 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 9;
            band = true;
        }
        // 0 negra y 2 no
        else if (palos2[0] == palos2[2] && cartas2[0] == 12 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 8;
            band = true;
        }
        // o no y 1 negra
        else if (palos2[0] == palos2[1] && cartas2[1] == 10 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 10;
            band = true;
        }
        // o no y 1 negra
        else if (palos2[0] == palos2[1] && cartas2[1] == 11 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 9;
            band = true;
        }
        // o no y 1 negra
        else if (palos2[0] == palos2[1] && cartas2[1] == 12 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[1] + 8;
            band = true;
        }
        // 0 no y 2 negra
        else if (palos2[0] == palos2[2] && cartas2[2] == 10 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 10;
            band = true;
        }
        // 0 no y 2 negra
        else if (palos2[0] == palos2[2] && cartas2[2] == 11 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 9;
            band = true;
        }

        // 0 no y 2 negra
        else if (palos2[0] == palos2[2] && cartas2[2] == 12 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos2 = cartas2[0] + cartas2[2] + 8;
            band = true;
        }
        // 1 negra y 2 no
        else if (palos2[1] == palos2[2] && cartas2[1] == 10 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 10;
            band = true;
        }
        // 1 negra y 2 no
        else if (palos2[1] == palos2[2] && cartas2[1] == 11 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 9;
            band = true;
        }
        // 1 negra y 2 no
        else if (palos2[1] == palos2[2] && cartas2[1] == 12 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 8;
            band = true;
        }

        // 1 y 2 no negras
        else if (palos2[1] == palos2[2] && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 20;
            band = true;
        }

        // 1 no y 2 negra
        else if (palos2[1] == palos2[2] && cartas2[2] == 10 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 10;
            band = true;
        }

        // 1 no y 2 negra
        else if (palos2[1] == palos2[2] && cartas2[2] == 11 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 9;
            band = true;
        }
        // 1 no y 2 negra
        else if (palos2[1] == palos2[2] && cartas2[2] == 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos2 = cartas2[1] + cartas2[2] + 8;
            band = true;
        }
        //
        // 0 y 2 negras
        else if (palos2[0] == palos2[2] && cartas2[0] == 10 || cartas2[0] == 11 || cartas2[0] == 12 && cartas2[2] == 10 || cartas2[2] == 11 || cartas2[2] == 12 || band == false)
        {
            tantos2 = 20;
            band = true;
        }
        else if (palos2[0] == palos2[1] && cartas2[0] == 10 || cartas2[0] == 11 || cartas2[0] == 12 && cartas2[1] == 10 || cartas2[1] == 11 || cartas2[1] == 12 || band == false)
        {
            tantos2 = 20;
            band = true;
        }
        // 1 y 2 negras
        else if (palos2[1] == palos2[2] && cartas2[2] == 10 || cartas2[2] == 11 || cartas2[2] == 12 && cartas2[1] == 10 || cartas2[1] == 11 || cartas2[1] == 12 || band == false)
        {
            tantos2 = 20;
            band = true;
        }

        return tantos2;
    }
}

void reglas::Juego1()
{
    valor1_juego1 = 0;
    valor1_juego2 = 0;
    int mano1 = 0, mano2 = 0;
    if (poder1[0] > poder2[0])
    {
        mano1++;
      
        std::cout << "Ganaste la mano 1" << std::endl;
    }
    else if (poder1[0] < poder2[0])
    {
        mano2++;
       

        std::cout << "Perdiste la mano 1" << std::endl;
    }
    else if (poder1[0] == poder2[0])
    {
        mano1++;
        mano2++;
    }

    if (mano1 == 1)
    {
        
        valor1_juego1 = 1;
    }
    else if (mano2 == 1)
    {
        
        valor1_juego2 = 1;
    }
    
}
void reglas::Juego2()
{
    valor2_juego1 = 0;
    valor2_juego2 = 0;
    int mano1 = 0, mano2 = 0;
    if (poder1[1] > poder2[1])
    {
        mano1++;
        std::cout << "Ganaste la mano 2" << std::endl;
    }
    else if (poder1[1] < poder2[1])
    {
        mano2++;
        std::cout << "Perdiste la mano 2" << std::endl;
    }
    else if (poder1[1] == poder2[1])
    {
        mano1++;
        mano2++;
    }

    if (mano1 == 1)
    {
        
        valor2_juego1 = 1;
    }
    else if (mano2 == 1)
    {
        
        valor2_juego2 = 1;
    }
}
void reglas::Juego3()
{
    valor3_juego1 = 0;
    valor3_juego2 = 0;
    int mano1 = 0, mano2 = 0;
    if (poder1[2] > poder2[2])
    {
        mano1++;
        std::cout << "Ganaste la mano 3" << std::endl;
    }
    else if (poder1[2] < poder2[2])
    {
        mano2++;
        std::cout << "Perdiste la mano 3" << std::endl;
    }
    else if (poder1[2] == poder2[2])
    {
        mano1++;
        mano2++;
    }

    if (mano1 == 1)
    {
       
        valor3_juego1 = 1;
    }
    else if (mano2 == 1)
    {
        
        valor3_juego2 = 1;
    }
}

int reglas::getJuego1_1()
{
    return valor1_juego1;
}
int reglas::getJuego1_2()
{
    return valor1_juego2;
}

int reglas::getJuego2_1()
{
    return valor2_juego1;
}
int reglas::getJuego2_2()
{
    return valor2_juego2;
}

int reglas::getJuego3_1()
{
    return valor3_juego1;
}
int reglas::getJuego3_2()
{
    return valor3_juego2;
}
int reglas::getTantos2()
{
    return tantos2;
}

/*
    if mano1 == 2 && mano2 < 2 -------> gane la jugada
    if mano1 < 2 && mano2 == 2 -------> perdi la jugada
    if mano1 == 3 && mano2 < 3 -------> gane la jugada
    if mano1 < 3 && mano2 == 3 -------> perdi la jugada
*/
