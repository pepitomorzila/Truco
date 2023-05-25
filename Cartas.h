#pragma once
#include <iostream>

class cartas
{
protected:
    int cartas1[3];
    int cartas2[3];
    int palos1[3];
    int palos2[3];
    
    
public:
    cartas();
    cartas(int[3],int[3],int[3],int[3]);
    //cartas(int[3]);
    cartas(int[3]);
    void setCartas1(int[3]);
    void setCartas2(int[3]);
    void setMano(int [3],int,int,int);
    void setPoder(int[3],int[3], int[3], int[3],int);
    void setPalos1(int [3]);
    void setPalos2(int [3]);
    void getCartas1();
    void getCartas2();
    void getPalos1();
    void getPalos2();
    void getCartayPalo1();
    void getCartayPalo2();
};