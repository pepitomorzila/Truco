#include "Cartas.h"

cartas::cartas()
{
}
cartas::cartas(int _cartas2[3])
{
    for (int i = 0; i < 3; i++)
        cartas2[i] = _cartas2[i];
}

cartas::cartas(int _cartas1[3], int _cartas2[3], int _palos1[3], int _palos2[3])
{
    for (int i = 0; i < 3; i++)
    {
        cartas1[i] = _cartas1[i];
        cartas2[i] = _cartas2[i];
        palos1[i] = _palos1[i];
        palos2[i] = _palos2[i];
    }
}

void cartas::setCartas1(int _cartas1[3])
{
    for (int i = 0; i < 3; i++)
    {
        cartas1[i] = _cartas1[i];
        if (_cartas1[i] == 8)
            _cartas1[i] = 10;
        if (_cartas1[i] == 9)
            _cartas1[i] = 11;
        if (_cartas1[i] == 10)
            _cartas1[i] = 12;
    }
}
void cartas::setCartas2(int _cartas2[3])
{
    for (int i = 0; i < 3; i++)
    {
        cartas2[i] = _cartas2[i];
        if (_cartas2[i] == 8)
            _cartas2[i] = 10;
        if (_cartas2[i] == 9)
            _cartas2[i] = 11;
        if (_cartas2[i] == 10)
            _cartas2[i] = 12;
    }
}

void cartas::setMano(int cartas1[3], int opc, int opc1, int opc2)
{
    int mano1[3];
    mano1[0] = cartas1[opc - 1];
    mano1[1] = cartas1[opc1 - 1];
    mano1[2] = cartas1[opc2 - 1];
}
void cartas::setPalos1(int _palos1[3])
{
    for (int i = 0; i < 3; i++)
        palos1[i] = _palos1[i];
}
void cartas::setPalos2(int _palos2[3])
{
    for (int i = 0; i < 3; i++)
        palos2[i] = _palos2[i];
}

void cartas::setPoder(int poder1[3], int poder2[3], int mano1[3], int palos1[3], int mano2[3], int palos2[3], int opc) // palos : 1.espada 2.oro 3.copa 4.basto , 10.10 9.11 8.12 7.7 6.6 5.5 4.4 3.3 2.2 1.1
{
    if (mano1[0] == 1 && palos1[0] == 1)
    {
        poder1[0] = 14; // Macho
    }
    else if (mano1[0] == 1 && palos1[0] == 4)
    {
        poder1[0] = 13; // Hembra
    }
    else if (mano1[0] == 7 && palos1[0] == 1)
    {
        poder1[0] = 12; // 7 de espada
    }
    else if (mano1[0] == 7 && palos1[0] == 2)
    {
        poder1[0] = 11; // 7 de oro
    }
    else if (mano1[0] == 3 && palos1[0] == 1 || mano1[0] == 3 && palos1[0] == 2 || mano1[0] == 3 && palos1[0] == 3 || mano1[0] == 3 && palos1[0] == 4)
    {
        poder1[0] = 10; // Cualquier 3
    }
    else if (mano1[0] == 2 && palos1[0] == 4 || mano1[0] == 2 && palos1[0] == 2 || mano1[0] == 2 && palos1[0] == 3 || mano1[0] == 2 && palos1[0] == 4)
    {
        poder1[0] = 9; // Cualquier 2
    }
    else if (mano1[0] == 1 && palos1[0] == 2 || mano1[0] == 1 && palos1[0] == 3)
    {
        poder1[0] = 8; // Cualquier 1 menos espada y basto
    }
    else if (mano1[0] == 8 && palos1[0] == 4 || mano1[0] == 8 && palos1[0] == 2 || mano1[0] == 8 && palos1[0] == 3 || mano1[0] == 8 && palos1[0] == 1)
    {
        poder1[0] = 7; // Los doces
    }
    else if (mano1[0] == 9 && palos1[0] == 4 || mano1[0] == 9 && palos1[0] == 2 || mano1[0] == 9 && palos1[0] == 3 || mano1[0] == 9 && palos1[0] == 1)
    {
        poder1[0] = 6; // Los onces
    }
    else if (mano1[0] == 10 && palos1[0] == 4 || mano1[0] == 10 && palos1[0] == 2 || mano1[0] == 10 && palos1[0] == 3 || mano1[0] == 10 && palos1[0] == 1)
    {
        poder1[0] = 5; // Los dieces
    }
    else if (mano1[0] == 7 && palos1[0] == 4 || mano1[0] == 7 && palos1[0] == 3)
    {
        poder1[0] = 4; // Los 7 menos de oro y espada
    }
    else if (mano1[0] == 6 && palos1[0] == 4 || mano1[0] == 6 && palos1[0] == 2 || mano1[0] == 6 && palos1[0] == 3 || mano1[0] == 6 && palos1[0] == 1)
    {
        poder1[0] = 3; // Los 6
    }
    else if (mano1[0] == 5 && palos1[0] == 1 || mano1[0] == 5 && palos1[0] == 2 || mano1[0] == 5 && palos1[0] == 3 || mano1[0] == 5 && palos1[0] == 4)
    {
        poder1[0] = 2; // Los 5
    }
    else if (mano1[0] == 4 && palos1[0] == 4 || mano1[0] == 4 && palos1[0] == 2 || mano1[0] == 4 && palos1[0] == 3 || mano1[0] == 4 && palos1[0] == 1)
    {
        poder1[0] = 1; // Los 4
    }
    //////////////////////////////////////////////////////////////////////
    if (mano1[1] == 1 && palos1[1] == 1)
    {
        poder1[1] = 14;
    }
    else if (mano1[1] == 1 && palos1[1] == 4)
    {
        poder1[1] = 13;
    }
    else if (mano1[1] == 7 && palos1[1] == 1)
    {
        poder1[1] = 12;
    }
    else if (mano1[1] == 7 && palos1[1] == 2)
    {
        poder1[1] = 11;
    }
    else if (mano1[1] == 3 && palos1[1] == 1 || mano1[1] == 3 && palos1[1] == 2 || mano1[1] == 3 && palos1[1] == 3 || mano1[1] == 3 && palos1[1] == 4)
    {
        poder1[1] = 10;
    }
    else if (mano1[1] == 2 && palos1[1] == 4 || mano1[1] == 2 && palos1[1] == 2 || mano1[1] == 2 && palos1[1] == 3 || mano1[1] == 2 && palos1[1] == 4)
    {
        poder1[1] = 9;
    }
    else if (mano1[1] == 1 && palos1[1] == 2 || mano1[1] == 1 && palos1[1] == 3)
    {
        poder1[1] = 8;
    }
    else if (mano1[1] == 8 && palos1[1] == 4 || mano1[1] == 8 && palos1[1] == 2 || mano1[1] == 8 && palos1[1] == 3 || mano1[1] == 8 && palos1[1] == 1)
    {
        poder1[1] = 7;
    }
    else if (mano1[1] == 9 && palos1[1] == 4 || mano1[1] == 9 && palos1[1] == 2 || mano1[1] == 9 && palos1[1] == 3 || mano1[1] == 9 && palos1[1] == 1)
    {
        poder1[1] = 6;
    }
    else if (mano1[1] == 10 && palos1[1] == 4 || mano1[1] == 10 && palos1[1] == 2 || mano1[1] == 10 && palos1[1] == 3 || mano1[1] == 10 && palos1[1] == 1)
    {
        poder1[1] = 5;
    }
    else if (mano1[1] == 7 && palos1[1] == 4 || mano1[1] == 7 && palos1[1] == 3)
    {
        poder1[1] = 4;
    }
    else if (mano1[1] == 6 && palos1[1] == 4 || mano1[1] == 6 && palos1[1] == 2 || mano1[1] == 6 && palos1[1] == 3 || mano1[1] == 6 && palos1[1] == 1)
    {
        poder1[1] = 3;
    }
    else if (mano1[1] == 5 && palos1[1] == 1 || mano1[1] == 5 && palos1[1] == 2 || mano1[1] == 5 && palos1[1] == 3 || mano1[1] == 5 && palos1[1] == 4)
    {
        poder1[1] = 2;
    }
    else if (mano1[1] == 4 && palos1[1] == 4 || mano1[1] == 4 && palos1[1] == 2 || mano1[1] == 4 && palos1[1] == 3 || mano1[1] == 4 && palos1[1] == 1)
    {
        poder1[1] = 1;
    }
    ///////////////////////////////////////////////////////////////
    if (mano1[2] == 1 && palos1[2] == 1)
    {
        poder1[2] = 14;
    }
    else if (mano1[2] == 1 && palos1[2] == 4)
    {
        poder1[2] = 13;
    }
    else if (mano1[2] == 7 && palos1[2] == 1)
    {
        poder1[2] = 12;
    }
    else if (mano1[2] == 7 && palos1[2] == 2)
    {
        poder1[2] = 11;
    }
    else if (mano1[2] == 3 && palos1[2] == 1 || mano1[2] == 3 && palos1[2] == 2 || mano1[2] == 3 && palos1[2] == 3 || mano1[2] == 3 && palos1[2] == 4)
    {
        poder1[2] = 10;
    }
    else if (mano1[2] == 2 && palos1[2] == 4 || mano1[2] == 2 && palos1[2] == 2 || mano1[2] == 2 && palos1[2] == 3 || mano1[2] == 2 && palos1[2] == 4)
    {
        poder1[2] = 9;
    }
    else if (mano1[2] == 1 && palos1[2] == 2 || mano1[2] == 1 && palos1[2] == 3)
    {
        poder1[2] = 8;
    }
    else if (mano1[2] == 8 && palos1[2] == 4 || mano1[2] == 8 && palos1[2] == 2 || mano1[2] == 8 && palos1[2] == 3 || mano1[2] == 8 && palos1[2] == 1)
    {
        poder1[2] = 7;
    }
    else if (mano1[2] == 9 && palos1[2] == 4 || mano1[2] == 9 && palos1[2] == 2 || mano1[2] == 9 && palos1[2] == 3 || mano1[2] == 9 && palos1[2] == 1)
    {
        poder1[2] = 6;
    }
    else if (mano1[2] == 10 && palos1[2] == 4 || mano1[2] == 10 && palos1[2] == 2 || mano1[2] == 10 && palos1[2] == 3 || mano1[2] == 10 && palos1[2] == 1)
    {
        poder1[2] = 5;
    }
    else if (mano1[2] == 7 && palos1[2] == 4 || mano1[2] == 7 && palos1[2] == 3)
    {
        poder1[2] = 4;
    }
    else if (mano1[2] == 6 && palos1[2] == 4 || mano1[2] == 6 && palos1[2] == 2 || mano1[2] == 6 && palos1[2] == 3 || mano1[2] == 6 && palos1[2] == 1)
    {
        poder1[2] = 3;
    }
    else if (mano1[2] == 5 && palos1[2] == 1 || mano1[2] == 5 && palos1[2] == 2 || mano1[2] == 5 && palos1[2] == 3 || mano1[2] == 5 && palos1[2] == 4)
    {
        poder1[2] = 2;
    }
    else if (mano1[2] == 4 && palos1[2] == 4 || mano1[2] == 4 && palos1[2] == 2 || mano1[2] == 4 && palos1[2] == 3 || mano1[2] == 4 && palos1[2] == 1)
    {
        poder1[2] = 1;
    }

    // MANO DEL BOT

    if (mano2[0] == 1 && palos1[0] == 1)
    {
        poder2[0] = 14;
    }
    else if (mano2[0] == 1 && palos1[0] == 4)
    {
        poder2[0] = 13;
    }
    else if (mano2[0] == 7 && palos1[0] == 1)
    {
        poder2[0] = 12;
    }
    else if (mano2[0] == 7 && palos1[0] == 2)
    {
        poder2[0] = 11;
    }
    else if (mano2[0] == 3 && palos1[0] == 1 || mano2[0] == 3 && palos1[0] == 2 || mano2[0] == 3 && palos1[0] == 3 || mano2[0] == 3 && palos1[0] == 4)
    {
        poder2[0] = 10;
    }
    else if (mano2[0] == 2 && palos1[0] == 4 || mano2[0] == 2 && palos1[0] == 2 || mano2[0] == 2 && palos1[0] == 3 || mano2[0] == 2 && palos1[0] == 4)
    {
        poder2[0] = 9;
    }
    else if (mano2[0] == 1 && palos1[0] == 2 || mano2[0] == 1 && palos1[0] == 3)
    {
        poder2[0] = 8;
    }
    else if (mano2[0] == 8 && palos1[0] == 4 || mano2[0] == 8 && palos1[0] == 2 || mano2[0] == 8 && palos1[0] == 3 || mano2[0] == 8 && palos1[0] == 1)
    {
        poder2[0] = 7;
    }
    else if (mano2[0] == 9 && palos1[0] == 4 || mano2[0] == 9 && palos1[0] == 2 || mano2[0] == 9 && palos1[0] == 3 || mano2[0] == 9 && palos1[0] == 1)
    {
        poder2[0] = 6;
    }
    else if (mano2[0] == 10 && palos1[0] == 4 || mano2[0] == 10 && palos1[0] == 2 || mano2[0] == 10 && palos1[0] == 3 || mano2[0] == 10 && palos1[0] == 1)
    {
        poder2[0] = 5;
    }
    else if (mano2[0] == 7 && palos1[0] == 4 || mano2[0] == 7 && palos1[0] == 3)
    {
        poder2[0] = 4;
    }
    else if (mano2[0] == 6 && palos1[0] == 4 || mano2[0] == 6 && palos1[0] == 2 || mano2[0] == 6 && palos1[0] == 3 || mano2[0] == 6 && palos1[0] == 1)
    {
        poder2[0] = 3;
    }
    else if (mano2[0] == 5 && palos1[0] == 1 || mano2[0] == 5 && palos1[0] == 2 || mano2[0] == 5 && palos1[0] == 3 || mano2[0] == 5 && palos1[0] == 4)
    {
        poder2[0] = 2;
    }
    else if (mano1[0] == 4 && palos1[0] == 4 || mano1[0] == 4 && palos1[0] == 2 || mano1[0] == 4 && palos1[0] == 3 || mano1[0] == 4 && palos1[0] == 1)
    {
        poder2[0] = 1;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (mano2[1] == 1 && palos1[1] == 1)
    {
        poder2[1] = 14;
    }
    else if (mano2[1] == 1 && palos1[1] == 4)
    {
        poder2[1] = 13;
    }
    else if (mano2[1] == 7 && palos1[1] == 1)
    {
        poder2[1] = 12;
    }
    else if (mano2[1] == 7 && palos1[1] == 2)
    {
        poder2[1] = 11;
    }
    else if (mano2[1] == 3 && palos1[1] == 1 || mano2[1] == 3 && palos1[1] == 2 || mano2[1] == 3 && palos1[1] == 3 || mano2[1] == 3 && palos1[1] == 4)
    {
        poder2[1] = 10;
    }
    else if (mano2[1] == 2 && palos1[1] == 4 || mano2[1] == 2 && palos1[1] == 2 || mano2[1] == 2 && palos1[1] == 3 || mano2[1] == 2 && palos1[1] == 4)
    {
        poder2[1] = 9;
    }
    else if (mano2[1] == 1 && palos1[1] == 2 || mano2[1] == 1 && palos1[1] == 3)
    {
        poder2[1] = 8;
    }
    else if (mano2[1] == 8 && palos1[1] == 4 || mano2[1] == 8 && palos1[1] == 2 || mano2[1] == 8 && palos1[1] == 3 || mano2[1] == 8 && palos1[1] == 1)
    {
        poder2[1] = 7;
    }
    else if (mano2[1] == 9 && palos1[1] == 4 || mano2[1] == 9 && palos1[1] == 2 || mano2[1] == 9 && palos1[1] == 3 || mano2[1] == 9 && palos1[1] == 1)
    {
        poder2[1] = 6;
    }
    else if (mano2[1] == 10 && palos1[1] == 4 || mano2[1] == 10 && palos1[1] == 2 || mano2[1] == 10 && palos1[1] == 3 || mano2[1] == 10 && palos1[1] == 1)
    {
        poder2[1] = 5;
    }
    else if (mano2[1] == 7 && palos1[1] == 4 || mano2[1] == 7 && palos1[1] == 3)
    {
        poder2[1] = 4;
    }
    else if (mano2[1] == 6 && palos1[1] == 4 || mano2[1] == 6 && palos1[1] == 2 || mano2[1] == 6 && palos1[1] == 3 || mano2[1] == 6 && palos1[1] == 1)
    {
        poder2[1] = 3;
    }
    else if (mano2[1] == 5 && palos1[1] == 1 || mano2[1] == 5 && palos1[1] == 2 || mano2[1] == 5 && palos1[1] == 3 || mano2[1] == 5 && palos1[1] == 4)
    {
        poder2[1] = 2;
    }
    else if (mano1[1] == 4 && palos1[1] == 4 || mano1[1] == 4 && palos1[1] == 2 || mano1[1] == 4 && palos1[1] == 3 || mano1[1] == 4 && palos1[1] == 1)
    {
        poder2[1] = 1;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (mano2[2] == 1 && palos1[2] == 1)
    {
        poder2[2] = 14;
    }
    else if (mano2[2] == 1 && palos1[2] == 4)
    {
        poder2[2] = 13;
    }
    else if (mano2[2] == 7 && palos1[2] == 1)
    {
        poder2[2] = 12;
    }
    else if (mano2[2] == 7 && palos1[2] == 2)
    {
        poder2[2] = 11;
    }
    else if (mano2[2] == 3 && palos1[2] == 1 || mano2[2] == 3 && palos1[2] == 2 || mano2[2] == 3 && palos1[2] == 3 || mano2[2] == 3 && palos1[2] == 4)
    {
        poder2[2] = 10;
    }
    else if (mano2[2] == 2 && palos1[2] == 4 || mano2[2] == 2 && palos1[2] == 2 || mano2[2] == 2 && palos1[2] == 3 || mano2[2] == 2 && palos1[2] == 4)
    {
        poder2[2] = 9;
    }
    else if (mano2[2] == 1 && palos1[2] == 2 || mano2[2] == 1 && palos1[2] == 3)
    {
        poder2[2] = 8;
    }
    else if (mano2[2] == 8 && palos1[2] == 4 || mano2[2] == 8 && palos1[2] == 2 || mano2[2] == 8 && palos1[2] == 3 || mano2[2] == 8 && palos1[2] == 1)
    {
        poder2[2] = 7;
    }
    else if (mano2[2] == 9 && palos1[2] == 4 || mano2[2] == 9 && palos1[2] == 2 || mano2[2] == 9 && palos1[2] == 3 || mano2[2] == 9 && palos1[2] == 1)
    {
        poder2[2] = 6;
    }
    else if (mano2[2] == 10 && palos1[2] == 4 || mano2[2] == 10 && palos1[2] == 2 || mano2[2] == 10 && palos1[2] == 3 || mano2[2] == 10 && palos1[2] == 1)
    {
        poder2[2] = 5;
    }
    else if (mano2[2] == 7 && palos1[2] == 4 || mano2[2] == 7 && palos1[2] == 3)
    {
        poder2[2] = 4;
    }
    else if (mano2[2] == 6 && palos1[2] == 4 || mano2[2] == 6 && palos1[2] == 2 || mano2[2] == 6 && palos1[2] == 3 || mano2[2] == 6 && palos1[2] == 1)
    {
        poder2[2] = 3;
    }
    else if (mano2[2] == 5 && palos1[2] == 1 || mano2[2] == 5 && palos1[2] == 2 || mano2[2] == 5 && palos1[2] == 3 || mano2[2] == 5 && palos1[2] == 4)
    {
        poder2[2] = 2;
    }
    else if (mano1[2] == 4 && palos1[2] == 4 || mano1[2] == 4 && palos1[2] == 2 || mano1[2] == 4 && palos1[2] == 3 || mano1[2] == 4 && palos1[2] == 1)
    {
        poder2[2] = 1;
    }
}

void cartas::getCartas1()
{
    for (int i = 0; i < 3; i++)
        std::cout << "Carta : " << i + 1 << " es: " << cartas1[i] << "\n";
}
void cartas::getCartas2()
{
    for (int i = 0; i < 3; i++)
        std::cout << "Carta : " << i + 1 << " es: " << cartas2[i] << "\n";
}
void cartas::getPalos1()
{
    for (int i = 0; i < 3; i++)
        std::cout << "Palo: " << palos1[i] << "\n";
}
void cartas::getPalos2()
{
    for (int i = 0; i < 3; i++)
        std::cout << "Palo: " << palos2[i] << "\n";
}
void cartas::getCartayPalo1(int opc, int opc1, int opc2)
{
    // palos : 1.espada 2.oro 3.copa 4.basto.
    std::string nombrePalo;
    bool first_flag = false, second_flag = false, third_flag = false;
    for (int i = 0; i < 3; i++) // Chequeador de palos y de 8, 9, 10, 11 y 12
        {
            if (palos1[i] == 1) nombrePalo = "Espada";
            if (palos1[i] == 2) nombrePalo = "Oro";
            if (palos1[i] == 3) nombrePalo = "Copa";
            if (palos1[i] == 4) nombrePalo = "Basto";
            if (cartas1[i] == 8) cartas1[i] = 10;
            if (cartas1[i] == 9) cartas1[i] = 11;
            if (cartas1[i] == 10) cartas1[i] = 12;
            if (opc == -1 && opc1 == -1 && opc2 == -1) std::cout << "Carta " << i + 1 << " : " << cartas1[i] << " de " << nombrePalo << "\n";  
        }
    std::cout << "\n";
    if (opc == 1)
    { // Elijo primera carta
        std::cout << "Carta " << 2 << " : " << cartas1[1] << " de " << nombrePalo << "\n";
        std::cout << "Carta " << 3 << " : " << cartas1[2] << " de " << nombrePalo << "\n";
        first_flag = true;
    }
    else if (opc == 2)
    { // Elijo segunda carta
        std::cout << "Carta " << 1 << " : " << cartas1[0] << " de " << nombrePalo << "\n";
        std::cout << "Carta " << 3 << " : " << cartas1[2] << " de " << nombrePalo << "\n";
        first_flag = true;
    }
    else if (opc == 3)
    { // Elijo tercera carta
        std::cout << "Carta " << 1 << " : " << cartas1[0] << " de " << nombrePalo << "\n";
        std::cout << "Carta " << 2 << " : " << cartas1[1] << " de " << nombrePalo << "\n";
        first_flag = true;
    }
    else if (opc == 1 && opc1 == 2 && first_flag == true) // Elijo primera y segunda
    {
        std::cout << "Carta " << 3 << " : " << cartas1[2] << " de " << nombrePalo << "\n";
        second_flag = true;
    }
    else if (opc == 1 && opc1 == 3 && first_flag == true) // Elijo primera y tercera
    {
        std::cout << "Carta " << 2 << " : " << cartas1[1] << " de " << nombrePalo << "\n";
        second_flag = true;
    }
    else if (opc == 2 && opc1 == 1 && first_flag == true) // Elijo segunda y primera
    {
        std::cout << "Carta " << 3 << " : " << cartas1[2] << " de " << nombrePalo << "\n";
        second_flag = true;
    }
    else if (opc == 2 && opc1 == 3 && first_flag == true) // Elijo segunda y tercera
    {
        std::cout << "Carta " << 1 << " : " << cartas1[0] << " de " << nombrePalo << "\n";
        second_flag = true;
    }
    else if (opc == 3 && opc1 == 2 && first_flag == true) // Elijo tercera y segunda
    {
        std::cout << "Carta " << 1 << " : " << cartas1[0] << " de " << nombrePalo << "\n";
        second_flag = true;
    }
    else if (opc == 3 && opc1 == 1 && first_flag == true) // Elijo tercera y primera
    {
        std::cout << "Carta " << 2 << " : " << cartas1[1] << " de " << nombrePalo << "\n";
        second_flag = true;
    }

    // std::cout << "Carta " << i + 1 << " : " << cartas1[i] << " de " << nombrePalo << "\n";
}
void cartas::getCartayPalo2(int opc, int opc1, int opc2)
{
    std::string nombrePalo;
    for (int i = 0; i < 3; i++) // Chequeador de palos y de 8, 9, 10, 11 y 12
    {
        if (palos2[i] == 1)
            nombrePalo = "Espada";
        if (palos2[i] == 2)
            nombrePalo = "Oro";
        if (palos2[i] == 3)
            nombrePalo = "Copa";
        if (palos2[i] == 4)
            nombrePalo = "Basto";
        if (cartas2[i] == 8)
            cartas2[i] = 10;
        if (cartas2[i] == 9)
            cartas2[i] = 11;
        if (cartas2[i] == 10)
            cartas2[i] = 12;
    }

    for (int i = 0; i <= 3; i++)
        std::cout << "Carta 2: " << cartas2[i] << " de " << palos2[i] << "\n";
}
