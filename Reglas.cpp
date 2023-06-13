#include "Reglas.h"
#include <iostream>

reglas::reglas()
{
}

reglas::reglas(int _cartas1[3], int _cartas2[3], int _palos1[3], int _palos2[3], int _tantos1, int _tantos2, int _valor_truco) : cartas(_cartas1, _cartas2, _palos1, _palos2)
{
    tantos1 = _tantos1;
    tantos2 = _tantos2;
    valor_truco = _valor_truco;
}

reglas::reglas(int _tantos1, int _tantos2, int _valor_truco)
{
    tantos1 = _tantos1;
    tantos2 = _tantos2;
    valor_truco = _valor_truco;
}

reglas::getTantos2(){
    return tantos2;
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
            tantos1 = 0;
            band = true;
        }
        // 0 y 1 no negras
        else if (palos2[0] == palos2[1] && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 20;
            band = true;
        }
        // 0 y 2 no negras
        else if (palos2[0] == palos2[2] && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 20;
            band = true;
        }
        // 0 negra y 1 no
        else if (palos2[0] == palos2[1] && cartas2[0] == 10 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 10;
            band = true;
        }
        // 0 negra y 1 no
        else if (palos2[0] == palos2[1] && cartas2[0] == 11 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 9;
            band = true;
        }
        // 0 negra y 1 no
        else if (palos2[0] == palos2[1] && cartas2[0] == 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 8;
            band = true;
        }

        // 0 negra y 2 no
        else if (palos2[0] == palos2[2] && cartas2[0] == 10 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 10;
            band = true;
        }
        // 0 negra y 2 no
        else if (palos2[0] == palos2[2] && cartas2[0] == 11 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 9;
            band = true;
        }
        // 0 negra y 2 no
        else if (palos2[0] == palos2[2] && cartas2[0] == 12 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 8;
            band = true;
        }
        // o no y 1 negra
        else if (palos2[0] == palos2[1] && cartas2[1] == 10 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 10;
            band = true;
        }
        // o no y 1 negra
        else if (palos2[0] == palos2[1] && cartas2[1] == 11 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 9;
            band = true;
        }
        // o no y 1 negra
        else if (palos2[0] == palos2[1] && cartas2[1] == 12 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[1] + 8;
            band = true;
        }
        // 0 no y 2 negra
        else if (palos2[0] == palos2[2] && cartas2[2] == 10 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 10;
            band = true;
        }
        // 0 no y 2 negra
        else if (palos2[0] == palos2[2] && cartas2[2] == 11 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 9;
            band = true;
        }

        // 0 no y 2 negra
        else if (palos2[0] == palos2[2] && cartas2[2] == 12 && cartas2[0] != 10 && cartas2[0] != 11 && cartas2[0] != 12 && band == false)
        {
            tantos1 = cartas2[0] + cartas2[2] + 8;
            band = true;
        }
        // 1 negra y 2 no
        else if (palos2[1] == palos2[2] && cartas2[1] == 10 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 10;
            band = true;
        }
        // 1 negra y 2 no
        else if (palos2[1] == palos2[2] && cartas2[1] == 11 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 9;
            band = true;
        }
        // 1 negra y 2 no
        else if (palos2[1] == palos2[2] && cartas2[1] == 12 && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 8;
            band = true;
        }

        // 1 y 2 no negras
        else if (palos2[1] == palos2[2] && cartas2[2] != 10 && cartas2[2] != 11 && cartas2[2] != 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 20;
            band = true;
        }

        // 1 no y 2 negra
        else if (palos2[1] == palos2[2] && cartas2[2] == 10 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 10;
            band = true;
        }

        // 1 no y 2 negra
        else if (palos2[1] == palos2[2] && cartas2[2] == 11 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 9;
            band = true;
        }
        // 1 no y 2 negra
        else if (palos2[1] == palos2[2] && cartas2[2] == 12 && cartas2[1] != 10 && cartas2[1] != 11 && cartas2[1] != 12 && band == false)
        {
            tantos1 = cartas2[1] + cartas2[2] + 8;
            band = true;
        }
        //
        // 0 y 2 negras
        else if (palos2[0] == palos2[2] && cartas2[0] == 10 || cartas2[0] == 11 || cartas2[0] == 12 && cartas2[2] == 10 || cartas2[2] == 11 || cartas2[2] == 12 || band == false)
        {
            tantos1 = 20;
            band = true;
        }
        else if (palos2[0] == palos2[1] && cartas2[0] == 10 || cartas2[0] == 11 || cartas2[0] == 12 && cartas2[1] == 10 || cartas2[1] == 11 || cartas2[1] == 12 || band == false)
        {
            tantos1 = 20;
            band = true;
        }
        // 1 y 2 negras
        else if (palos2[1] == palos2[2] && cartas2[2] == 10 || cartas2[2] == 11 || cartas2[2] == 12 && cartas2[1] == 10 || cartas2[1] == 11 || cartas2[1] == 12 || band == false)
        {
            tantos1 = 20;
            band = true;
        }

        return tantos2;
    }
}

void reglas::Truco(int poder1[3], int poder2[3], int jugada)
{
    int mano1 = 0, mano2 = 0;
    for (int i = 0; i < jugada; i++)
    {
        while (mano1 < 2 && mano2 < 2)
        {
            if (poder1[i] < poder2[i])
            {
                mano1++;
                std::cout << "Ganaste la mano" << std::endl;
            }
            else if (poder1[i] > poder2[i])
            {
                mano2++;
                std::cout << "Perdiste la mano" << std::endl;
            }
            else if (poder1[i] == poder2[i])
            {
                mano1++;
                mano2++;
            }
        }
    }
    if (mano1 == 2)
    {
        valor_truco = 1;
    }
    else if (mano2 == 2)
    {
        valor_truco = 2;
    }
    // Cuando valor_truco es igual 1, significa que el usuario ha ganado la mano. De manera contraria, si valor_truco es igual a 2 el bot gha
}

int reglas::getTruco()
{
    return valor_truco;
}