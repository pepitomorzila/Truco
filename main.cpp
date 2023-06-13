<<<<<<< HEAD
#include "Cartas.h"
=======
#pragma once
>>>>>>> 8d7b0ec454769c4bd2419c6e7e87bbc915def630
#include "Reglas.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

<<<<<<< HEAD
bool menu(){
   // cout<<"-Las reglas del truco son claras\n-Ganara el primer jugador en llegar a un puntaje de 15 o 30, dependiendo de en cuanto se h "<<endl<<" la forma de conseguir puntos se basa en dos aspectos del juego , el envido y el truco donde se puede sumar de 1 a 4 puntos"<<endl<<"para el envido tendremos en cuenta q dos cartas pertenezcan al mismo palo , si es asi se puede decir q tebnes tanyo , q es el resultado de sumar el valor numerico de las cartas y ademas sumarle 20 "<<endl<<"mientras el truco se basa en tener cartas mas poderosas el rival , donde deberas ganrle en poder a la carta del adversario en almenos 2 oportunidades"<<endl;
    //cout<<" el valor de las cartas es el siguiente ordenado de mas poderosa a menos poderosa "<<endl<<"1 de espada "<<endl<<" 1 de basto "<<endl<<"7 de espadas "<<endl<<"7 de oro "<<endl<<"todos los 3 "<<endl<<"todos los 2 "<<endl<<"los 1 de copa y oro "<<endl<<"todos los 12"<<endl<<"todos los 11"<<endl<<"todos los 10"<<endl<<"los 7 de copa y basto "<<endl<<"todos los 6"<<endl<<"todos los 5"<<endl<<"todos los 4"<<endl;
=======

void instrucciones(){
    cout<<"-Las reglas del truco son claras\n-Ganara el primer jugador en llegar a un puntaje de 15 o 30, dependiendo de en cuanto se h "<<endl<<" la forma de conseguir puntos se basa en dos aspectos del juego , el envido y el truco donde se puede sumar de 1 a 4 puntos"<<endl<<"para el envido tendremos en cuenta q dos cartas pertenezcan al mismo palo , si es asi se puede decir q tebnes tanyo , q es el resultado de sumar el valor numerico de las cartas y ademas sumarle 20 "<<endl<<"mientras el truco se basa en tener cartas mas poderosas el rival , donde deberas ganrle en poder a la carta del adversario en almenos 2 oportunidades"<<endl;
    cout<<" el valor de las cartas es el siguiente ordenado de mas poderosa a menos poderosa "<<endl<<"1 de espada "<<endl<<" 1 de basto "<<endl<<"7 de espadas "<<endl<<"7 de oro "<<endl<<"todos los 3 "<<endl<<"todos los 2 "<<endl<<"los 1 de copa y oro "<<endl<<"todos los 12"<<endl<<"todos los 11"<<endl<<"todos los 10"<<endl<<"los 7 de copa y basto "<<endl<<"todos los 6"<<endl<<"todos los 5"<<endl<<"todos los 4"<<endl;
>>>>>>> 8d7b0ec454769c4bd2419c6e7e87bbc915def630
}

int main()
{
    reglas m;
    srand(time(nullptr));
    int opc, opc1, opc2, opcion;
    int n = 3;
<<<<<<< HEAD
=======
    int palos1[3];
    int cartas1[3];
    int palos2[3];
    int cartas2[3];
>>>>>>> 8d7b0ec454769c4bd2419c6e7e87bbc915def630
    int k = 1;
    int menorp = 1;
    int mayorp = 4;
    int menorc = 1;
    int mayorc = 10;
<<<<<<< HEAD
    int random[3];
    int band = 0;
    cout<<"BIENVENIDO A NUESTRA VERSION DEL CLASICO JUEGO TRUCO"<<endl;
    while(band == 0)
    {
      //  cout<<" Ingrese 1 si quiere  jugar "<<endl<<" o ingrese 2 si desea leer las reglas primero "<<endl;
    cin>> opcion;
    if (opcion == 2)
    {
        //instrucciones();
        band = 0;
    }
    else if (opcion == 1)
    band = 1;
    {
        for (int i = 0; i < 3; ++i)
        {
            random[i] = 1 + rand() % 10;
            m.setCartas1(random);
        }
            
        for (int i = 0; i < 3; ++i)
        {
            random[i] = 1 + rand() % 4;
            m.setPalos1(random);
        }
          m.getCartayPalo1();  
    } 
    }
    //palos : 1.espada 2.oro 3.copa 4.basto.Cartas :  10 = carta 10, 9 = carta 11, 8 = carta12, 7 = carta 7, 6 = carta 6, 5 = carta 5, 4 = carta 4, 3 = carta 3, 2 = carta 2, 1 = carta 1
=======
    cout<<"BIENVENIDO A NUESTRA VERSION DEL CLASICO JUEGO TRUCO"<<endl;
    cout<<" Ingrese 1 si quiere empezar  a jugar "<<endl<<" o ingrese 2 si desea leer las reglas primero "<<endl;
    cin>> opcion;
    if (opcion == 2)
    {
        instrucciones();
    }
    else if (opcion == 1)
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; j++)
            {
                palos1[i] = menorp + rand() % (mayorp - menorp + 1);
            }
            cartas1[i] = menorc + rand() % (mayorc - menorc + 1);
            cout << "Tu carta numero " << k++ << " es: " << cartas1[i] << "y el palos es : " << palos1[3] << endl;
        }
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; j++)
            {
                palos2[i] = menorp + rand() % (mayorp - menorp + 1);
            }
            cartas2[i] = menorc + rand() % (mayorc - menorc + 1);
        }
    }
>>>>>>> 8d7b0ec454769c4bd2419c6e7e87bbc915def630

    /* cout << "Que carta deseas tirar" << endl;
     cin >> opc;
     cout << "Que carta deseas tirar" << endl;
     cin >> opc1;
     cout << "Qué carta deseas tirar" << endl;
     cin >> opc2;



     */
}
