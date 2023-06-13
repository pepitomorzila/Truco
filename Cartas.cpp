#include "Cartas.h"

cartas::cartas()
{
}
/*cartas::cartas(int _cartas1[3])
{
    for (int i = 0; i < 3; i++) cartas1[i] = _cartas1[i];
}*/
cartas::cartas(int _cartas2[3])
{
    for (int i = 0; i < 3; i++) cartas2[i] = _cartas2[i];
}

cartas::cartas(int _cartas1[3], int _cartas2[3], int _palos1[3], int _palos2[3]){
    for (int i = 0; i < 3; i++){
        cartas1[i] = _cartas1[i];
        cartas2[i] = _cartas2[i];
        palos1[i] = _palos1[i];
        palos2[i] = _palos2[i];
    }
}

void cartas::setCartas1(int _cartas1[3]){
    for (int i = 0; i < 3; i++){
        cartas1[i] = _cartas1[i];
        if (_cartas1[i] == 8) _cartas1[i] = 10;
        if (_cartas1[i] == 9) _cartas1[i] = 11;
        if (_cartas1[i] == 10) _cartas1[i] = 12;
    }
}
void cartas::setCartas2(int _cartas2[3]){
    for (int i = 0; i < 3; i++){
        cartas2[i] = _cartas2[i];
        if (_cartas2[i] == 8) _cartas2[i] = 10;
        if (_cartas2[i] == 9) _cartas2[i] = 11;
        if (_cartas2[i] == 10) _cartas2[i] = 12;
    }
}

void cartas::setMano(int cartas1[3], int opc, int opc1, int opc2)
{
    int mano1[3];
    mano1[0] = cartas1[opc - 1];
    mano1[1] = cartas1[opc1 - 1];
    mano1[2] = cartas1[opc2 - 1];
}
void cartas::setPalos1(int _palos1[3]){
    for (int i = 0; i < 3; i++) palos1[i] = _palos1[i];
}
void cartas::setPalos2(int _palos2[3]){
    for (int i = 0; i < 3; i++) palos2[i] = _palos2[i];
}

void cartas::setPoder(int mano1[3], int palos1[3], int mano2[3], int palos2[3],int opc) //palos : 1.espada 2.oro 3.copa 4.basto , 10.10 9.11 8.12 7.7 6.6 5.5 4.4 3.3 2.2 1.1
{
    int poder1[3];
    int poder2[3];
    
    {
        int i = opc -1;
        if (mano1[i] == 1 && palos1[i] == 1)
        {
            poder1[i] = 14;
        }
        else if(mano1[i] == 1 && palos1[i] == 4)
        {
            poder1[i] = 13;
        }
        else if(mano1[i] == 7 && palos1[i] == 1)
        {
            poder1[i] = 12;
        }
        else if(mano1[i] == 7 && palos1[i] == 2)
        {
            poder1[i] = 11;
        }
        else if(mano1[i] == 3 && palos1[i] == 1 || mano1[i] == 3 && palos1[i] == 2 || mano1[i] == 3 && palos1[i] == 3 || mano1[i] == 3 && palos1[i] == 4)
        {
            poder1[i] = 10;
        }
        else if(mano1[i] == 2 && palos1[i] == 4 || mano1[i] == 2 && palos1[i] == 2 || mano1[i] == 2 && palos1[i] == 3 || mano1[i] == 2 && palos1[i] == 4)
        {
            poder1[i] = 9;
        }
        else if(mano1[i] == 1 && palos1[i] == 2 || mano1[i] == 1 && palos1[i] == 3)
        {
            poder1[i] = 8;
        }
        else if(mano1[i] == 8 && palos1[i] == 4 || mano1[i] == 8 && palos1[i] == 2 || mano1[i] == 8 && palos1[i] == 3 || mano1[i] == 8 && palos1[i] == 1)
        {
            poder1[i] = 7;
        }
        else if(mano1[i] == 9 && palos1[i] == 4 || mano1[i] == 9 && palos1[i] == 2 || mano1[i] == 9 && palos1[i] == 3 || mano1[i] == 9 && palos1[i] == 1)
        {
            poder1[i] = 6;
        }
        else if(mano1[i] == 10 && palos1[i] == 4 || mano1[i] == 10 && palos1[i] == 2 || mano1[i] == 10 && palos1[i] == 3 || mano1[i] == 10 && palos1[i] == 1)
        {
            poder1[i] = 5;
        }
        else if(mano1[i] == 7 && palos1[i] == 4 || mano1[i] == 7 && palos1[i] == 3)
        {
            poder1[i] = 4;
        }
        else if(mano1[i] == 6 && palos1[i] == 4 || mano1[i] == 6 && palos1[i] == 2 || mano1[i] == 6 && palos1[i] == 3 || mano1[i] == 6 && palos1[i] == 1)
        {
            poder1[i] = 3;
        }
        else if(mano1[i] == 5 && palos1[i] == 1 || mano1[i] == 5 && palos1[i] == 2 || mano1[i] == 5 && palos1[i] == 3 || mano1[i] == 5 && palos1[i] == 4)
        {
            poder1[i] = 2;
        }
        else if(mano1[i] == 4 && palos1[i] == 4 || mano1[i] == 4 && palos1[i] == 2 || mano1[i] == 4 && palos1[i] == 3 || mano1[i] == 4 && palos1[i] == 1)
        {
            poder1[i] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (mano2[i] == 1 && palos1[i] == 1)
        {
            poder2[i] = 14;
        }
        else if(mano2[i] == 1 && palos1[i] == 4)
        {
            poder2[i] = 13;
        }
        else if(mano2[i] == 7 && palos1[i] == 1)
        {
            poder2[i] = 12;
        }
        else if(mano2[i] == 7 && palos1[i] == 2)
        {
            poder2[i] = 11;
        }
        else if(mano2[i] == 3 && palos1[i] == 1 || mano2[i] == 3 && palos1[i] == 2 || mano2[i] == 3 && palos1[i] == 3 || mano2[i] == 3 && palos1[i] == 4)
        {
            poder2[i] = 10;
        }
        else if(mano2[i] == 2 && palos1[i] == 4 || mano2[i] == 2 && palos1[i] == 2 || mano2[i] == 2 && palos1[i] == 3 || mano2[i] == 2 && palos1[i] == 4)
        {
            poder2[i] = 9;
        }
        else if(mano2[i] == 1 && palos1[i] == 2 || mano2[i] == 1 && palos1[i] == 3)
        {
            poder2[i] = 8;
        }
        else if(mano2[i] == 8 && palos1[i] == 4 || mano2[i] == 8 && palos1[i] == 2 || mano2[i] == 8 && palos1[i] == 3 || mano2[i] == 8 && palos1[i] == 1)
        {
            poder2[i] = 7;
        }
        else if(mano2[i] == 9 && palos1[i] == 4 || mano2[i] == 9 && palos1[i] == 2 || mano2[i] == 9 && palos1[i] == 3 || mano2[i] == 9 && palos1[i] == 1)
        {
            poder2[i] = 6;
        }
        else if(mano2[i] == 10 && palos1[i] == 4 || mano2[i] == 10 && palos1[i] == 2 || mano2[i] == 10 && palos1[i] == 3 || mano2[i] == 10 && palos1[i] == 1)
        {
            poder2[i] = 5;
        }
        else if(mano2[i] == 7 && palos1[i] == 4 || mano2[i] == 7 && palos1[i] == 3)
        {
            poder2[i] = 4;
        }
        else if(mano2[i] == 6 && palos1[i] == 4 || mano2[i] == 6 && palos1[i] == 2 || mano2[i] == 6 && palos1[i] == 3 || mano2[i] == 6 && palos1[i] == 1)
        {
            poder2[i] = 3;
        }
        else if(mano2[i] == 5 && palos1[i] == 1 || mano2[i] == 5 && palos1[i] == 2 || mano2[i] == 5 && palos1[i] == 3 || mano2[i] == 5 && palos1[i] == 4)
        {
            poder2[i] = 2;
        }
        else if(mano1[i] == 4 && palos1[i] == 4 || mano1[i] == 4 && palos1[i] == 2 || mano1[i] == 4 && palos1[i] == 3 || mano1[i] == 4 && palos1[i] == 1)
        {
            poder2[i] = 1;
        }
    }
}

void cartas::getCartas1()
{
    for (int i = 0; i < 3; i++) std::cout << "Carta : " << i+1 << " es: " << cartas1[i] << "\n";
}
void cartas::getCartas2()
{
    for (int i = 0; i < 3; i++) std::cout << "Carta : " << i+1 << " es: " << cartas2[i] << "\n";
}
void cartas::getPalos1()
{
    for (int i = 0; i < 3; i++) std::cout << "Palo: " << palos1[i] << "\n";
}
void cartas::getPalos2()
{
    for (int i = 0; i < 3; i++) std::cout << "Palo: " << palos2[i] << "\n";
}
void cartas::getCartayPalo1()
{
    //palos : 1.espada 2.oro 3.copa 4.basto.
    std::string nombrePalo;
    for (int i = 0; i < 3; i++){
        if (palos1[i] == 1) nombrePalo = "Espada";
        if (palos1[i] == 2) nombrePalo = "Oro";
        if (palos1[i] == 3) nombrePalo = "Copa";
        if (palos1[i] == 4) nombrePalo = "Basto";
        if (cartas1[i] == 8) cartas1[i] = 10;
        if (cartas1[i] == 9) cartas1[i] = 11;
        if (cartas1[i] == 10) cartas1[i] = 12;
        std::cout << "Carta "<<i+1<<" : " << cartas1[i] << " de " << nombrePalo << "\n";
    }
}
void cartas::getCartayPalo2()
{
    std::string nombrePalo;
    for (int i = 0; i < 3; i++){
        std::cout << "Carta 2: " << cartas2[i] << " de " << palos2[i] << "\n";
    }
}