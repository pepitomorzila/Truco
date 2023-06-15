#include "Cartas.h"
#include "Reglas.h"
#include "bot.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void menu()
{
    cout << "Las reglas del truco son sencillas, basicamente consiste en que los jugadores (pueden ser de dos, cuatro o 6) reciben 3 cartas aleatorias de la baraja española (sin los comodines, ochos y nueves).\nEstas cartas tienen un poder en base a su numero y el palo (espada, oro, copa y basto).\n\n";
    system("PAUSE()");
    cout << "\n---Poderes de las cartas---\n\n";
    cout << "1 de Espada\n";
    cout << "1 de Basto\n";
    cout << "7 de Espada\n";
    cout << "7 de Oro\n";
    cout << "3 (TODOS)\n";
    cout << "2 (TODOS)\n";
    cout << "1 de Oro y Copa\n";
    cout << "12 (TODOS)\n";
    cout << "11 (TODOS)\n";
    cout << "10 (TODOS)\n";
    cout << "7 de Copa y Bastos\n";
    cout << "6 (TODOS)\n";
    cout << "5 (TODOS)\n";
    cout << "4 (TODOS)\n\n";
    cout << "-Se puede jugar hasta realizar 15 o 30 puntos.\n";
    cout << "-Se gana un (1) punto si se gana una mano sin cantar Truco o Envido.\n\n";
    system("PAUSE()");
    cout << "\n---Canto del Truco---\n\n";
    cout << "Truco: Tiene el mismo nombre que el juego, y cuando es cantado ocurre lo siguiente: si se canta y el otro no lo acepta, automaticamente el que lo canto recibe un punto.\nSi se quiso, entonces el que lo gana recibe dos (2) puntos.\n";
    cout << "Si se quiso el truco, al que se le cantaron puede cantar un re-truco que son tres (3) puntos para el que lo gana, y si no se quiere son dos (2).\n";
    cout << "Y por ultimo, después del re-truco se puede cantar un Vale Cuatro, que como dice el nombre, vale 4 puntos y si no se quiere, se suman 3 para el que lo canto.\n\n";
    system("PAUSE()");
    cout << "\n---Canto del Envido---\n\n";
    cout << "Envido: Para esta modalidad del juego hay que tener en cuenta ademas del numero, el palo de las cartas, debido a que si tenemos 2 cartas del mismo palo, tendremos automaticamente 20 puntos, y\na esos 20 hay que sumarle el numero de las cartas que sean del mismo palo, a excepcion del 10, 11 y 12 que solo cuentan para tener los 20 puntos.\n";
    cout << "Por ejemplo, si tengo un 12 de basto y un 5 de basto, tendria 25 puntos, y si tengo un 3 y un 7 del mismo palo, tendria 30 puntos.\n";
    cout << "Si el envido es ganado, se le suman 2 puntos al que lo canto, y si el otro no lo quiso, solo 1 punto.\n\n";
    system("PAUSE()");
    cout << "\nDoble envido: Una vez que el jugador haya cantado envido, el contrincante puede cantar otra vez un envido. En caso de ser ganado, sumaria 4 puntos, y si no se quiso, 2 puntos.\n\n";
    cout << "Real envido: Se puede cantar despues de un doble envido o un envido. Si se canta despues de un envido, se le suma un punto al envido, es decir, en caso de ser ganado se sumarian 3 puntos, y si no se quiso, solo 2 puntos.\n";
    cout << "Si se canta despues de un doble envido, se sumarian 5 puntos, y si no se quiere, 4 puntos.\n\n";
    cout << "Falta envido: Se puede cantar antes de cualquiera de los anteriores, y siempre sumara los puntos que le falten al contrincante para ganar.\nPor ejemplo, si la partida es a 30, yo canto falta envido y lo gano, y mi contrincante tenia 20 puntos, entonces a mi se me sumarian 10 puntos.\n\n";
    system("PAUSE()");
    cout << "\n---Flor---\n\n";
    cout << "La flor es cuando se tienen 3 cartas del mismo palo. Si se canta, se suman automaticamente 3 puntos, y no se puede jugar ningun tipo de envido despues de haberla cantado.\n";
    cout << "Se puede elegir si jugar con ella o no. Normalmente, en todas las partidas de Truco se juega sin ella, ya que depende literalmente del factor de la suerte y no de la habilidad.\n\n";
    system("PAUSE()");
    cout << "\n";
}

int main()
{

    bot b;
    reglas m;
    srand(time(nullptr));
    int opc = -1, opc1 = -1, opc2 = -1, tru, opcion, des_redoblar, choice_env;
    int n = 3, k = 1;
    int max_puntos, choice_punto;
    int random[3], cartas1[3], palos1[3], cartas2[3], palos2[3];
    bool band = false, truco_check = false;
    int puntaje1 = 0, puntaje2 = 0;
    int jugada, querer, redoblar, des_retruco, while_flag;
    int incremento_partidas = 0;
    cout << "BIENVENIDO A NUESTRA VERSION DEL CLASICO JUEGO TRUCO" << endl;
    cout << "\n1. Para jugar a 15 puntos\n2. Para jugar a 30 puntos.\n";
    cin >> choice_punto;
    if (choice_punto == 1)
        max_puntos = 15;
    else if (choice_punto == 2)
        max_puntos = 30;
    while (band == false)
    {
        cout << "-1. Si quiere jugar\n-2. Si desea leer las reglas primero" << endl;
        cin >> opcion;
        if (opcion == 2)
        {
            menu();
        }
        else if (opcion == 1)
        {
            band = true;
            /*
            for (int i = 0; i < 3; ++i) // se generan aleatoriamente tus cartas
            {
                random[i] = 1 + rand() % 10;
                cartas1[i] = random[i];
                m.setCartas1(random);
            }
            for (int i = 0; i < 3; ++i)
            {
                random[i] = 1 + rand() % 4;
                palos1[i] = random[i];
                m.setPalos1(random);
            }
            m.getCartayPalo1(opc, opc1, opc2);
            for (int i = 0; i < 3; ++i) // se generan aleatoriamente las cartas del bot
            {
                random[i] = 1 + rand() % 10;
                cartas2[i] = random[i];
                m.setCartas2(random);
            }
            for (int i = 0; i < 3; ++i)
            {
                random[i] = 1 + rand() % 4;
                palos2[i] = random[i];
                m.setPalos2(random);
            }
            */
        }
    }
    do
    {
        for (int i = 0; i < 3; ++i) // se generan aleatoriamente tus cartas
        {
            random[i] = 1 + rand() % 10;
            cartas1[i] = random[i];
            m.setCartas1(random);
        }
        for (int i = 0; i < 3; ++i)
        {
            random[i] = 1 + rand() % 4;
            palos1[i] = random[i];
            m.setPalos1(random);
        }
        m.getCartayPalo1(opc, opc1, opc2);
        for (int i = 0; i < 3; ++i) // se generan aleatoriamente las cartas del bot
        {
            random[i] = 1 + rand() % 10;
            cartas2[i] = random[i];
            m.setCartas2(random);
        }
        for (int i = 0; i < 3; ++i)
        {
            random[i] = 1 + rand() % 4;
            palos2[i] = random[i];
            m.setPalos2(random);
        }
        do
        {
            while_flag = false;
            try
            {
                cout << "Desea cantar Envido, Real Envido o Falta Envido?\n1. Envido\n2. Real Envido\n3. Falta envido\n4. Flor\n5. No cantar nada ";
                cin >> choice_env;
                if (choice_env < 1)
                    throw "Elija un valor mayor o igual a 1.";
                else if (choice_env > 5)
                    throw "Elija un valor menor o igual a 5.";
                switch (choice_env)
                {
                case 1:
                    if (b.envido() == 1)
                    {
                        cout << "El bot quiso el envido\n";
                        cout << m.Envido1() << endl;
                        cout << m.Envido2() << endl;
                        if (m.Envido1() > m.Envido2())
                        {
                            cout << "Has ganado el envido\n";
                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                            puntaje1 += 2;
                        }
                        else if (m.Envido1() < m.Envido2())
                        {
                            cout << "Has perdido el envido\n";
                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                            cout << "" << endl;
                            puntaje2 += 2;
                        }
                    }
                    if (b.envido() == 2)
                    {
                        cout << "El bot le ha cantado envido-envido!!\nDesea cantar mas?\n1. Para no cantar nada mas \n2. Real envido\n3. Falta envido?\n";
                        cin >> redoblar;
                        if (redoblar == 1)
                        {
                            cout << "1. Si desea aceptar el doble-envido\n2. Si desea rechazarlo\n";
                            cin >> querer;
                            if (m.Envido1() != 100 && querer == 2)
                            {
                                puntaje2 += 2;
                            }
                            else if (m.Envido1() != 100 && querer == 1)
                            {
                                cout << m.Envido1() << endl;
                                cout << m.Envido2() << endl;
                                if (m.Envido1() > m.Envido2())
                                {
                                    cout << "Has ganado el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    puntaje1 += 4;
                                }
                                else if (m.Envido1() < m.Envido2())
                                {
                                    cout << "Has perdido el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    cout << "" << endl;
                                    puntaje2 += 4;
                                }
                            }
                            if (b.envido() == 0)
                            {
                                if (b.cantarenvido() == 1)
                                {
                                    if (m.Envido1() != 100)
                                    {
                                        cout << m.Envido1();
                                        cout << m.Envido2();
                                        if (m.Envido1() > m.Envido2())
                                        {
                                            cout << "Has ganado el envido\n";
                                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                            puntaje1 += 2;
                                        }
                                        else if (m.Envido1() < m.Envido2())
                                        {
                                            cout << "Has perdido el envido\n";
                                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                            cout << "\n";
                                            puntaje2 += 2;
                                        }
                                    }
                                }
                                else if (b.cantarenvido() == 0)
                                {
                                    puntaje1 += 1;
                                }
                            }
                        }
                        else if (redoblar == 2)
                        {
                            if (b.envido() == 3)
                            {
                                cout << "El bot le ha cantado envido-envido-Falta envido\n";
                                cout << "\n1. Si desea aceptar el Falta envido\n2. Si desea rechazarlo\n";
                                cin >> querer;
                                if (m.Envido1() != 100 && querer == 2)
                                {
                                    puntaje2 += 5;
                                }
                                else if (m.Envido1() != 100 && querer == 1)
                                {
                                    cout << m.Envido1() << endl;
                                    cout << m.Envido2() << endl;
                                    if (m.Envido1() > m.Envido2())
                                    {
                                        cout << "Has ganado el envido\n";
                                        cout << "Tus tantos son : " << m.Envido1() << "\n";
                                        cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                        puntaje1 = puntaje1 + (max_puntos - puntaje2);
                                    }
                                    else if (m.Envido1() < m.Envido2())
                                    {
                                        cout << "Has perdido el envido\n";
                                        cout << "Tus tantos son : " << m.Envido1() << "\n";
                                        cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                        cout << "" << endl;
                                        puntaje2 = puntaje2 + (max_puntos - puntaje1);
                                    }
                                }
                            }
                            if (b.envido() == 0)
                            {
                                if (b.cantarenvido() == 1)
                                {
                                    if (m.Envido1() != 100)
                                    {
                                        cout << m.Envido1();
                                        cout << m.Envido2();
                                        if (m.Envido1() > m.Envido2())
                                        {
                                            cout << "\nHas ganado el envido\n";
                                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                            cout << "\n";
                                            puntaje1 += 7;
                                        }
                                        else if (m.Envido1() < m.Envido2())
                                        {
                                            cout << "\nHas perdido el envido\n";
                                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                                            cout << "Los tantos del rival son: " << m.Envido2() << "\n";
                                            cout << "\n";
                                            puntaje2 += 7;
                                        }
                                    }
                                }
                                else if (b.cantarenvido() == 0)
                                {
                                    puntaje1 += 4;
                                }
                            }
                        }
                        else if (redoblar == 3)
                        {
                            if (b.envido() == 3)
                            {
                                cout << m.Envido1() << endl;
                                cout << m.Envido2() << endl;
                                if (m.Envido1() > m.Envido2())
                                {
                                    cout << "Has ganado el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    puntaje1 = puntaje1 + (max_puntos - puntaje2);
                                }
                                else if (m.Envido1() < m.Envido2())
                                {
                                    cout << "Has perdido el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    cout << "" << endl;
                                    puntaje2 = puntaje2 + (max_puntos - puntaje1);
                                }
                            }
                            else if (b.envido() != 3)
                            {
                                puntaje1 = puntaje1 + 2;
                            }
                        }
                    }
                    else if (b.envido() == 0)
                    {
                        cout << "El bot no quiso el envido, ganas un punto.\n";
                        puntaje1++;
                    }
                    else if (b.envido() == 3)
                    {
                        cout << "El bot a cantado real-envido\n1. Aceptar\n2. No aceptar\n";
                        cin >> querer;
                        if (querer == 1)
                        {
                            cout << "Deseas cantar falta envido?\n1. Cantar\n2. No cantar\n";
                            cin >> redoblar;
                            switch (redoblar)
                            {
                            case 1:
                                if (b.envido() == 1)
                                {
                                    cout << m.Envido1() << endl;
                                    cout << m.Envido2() << endl;
                                    if (m.Envido1() > m.Envido2())
                                    {
                                        cout << "Has ganado el envido\n";
                                        cout << "Tus tantos son : " << m.Envido1() << "\n";
                                        cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                        puntaje1 = puntaje1 + (max_puntos - puntaje2);
                                    }
                                    else if (m.Envido1() < m.Envido2())
                                    {
                                        cout << "Has perdido el envido\n";
                                        cout << "Tus tantos son : " << m.Envido1() << "\n";
                                        cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                        cout << "" << endl;
                                        puntaje2 = puntaje2 + (max_puntos - puntaje1);
                                    }
                                }
                                break;
                            case 2:
                                cout << m.Envido1() << endl;
                                cout << m.Envido2() << endl;
                                if (m.Envido1() > m.Envido2())
                                {
                                    cout << "Has ganado el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    puntaje1 = puntaje1 + 5;
                                }
                                else if (m.Envido1() < m.Envido2())
                                {
                                    cout << "Has perdido el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    cout << "" << endl;
                                    puntaje2 = puntaje2 + 5;
                                }

                                break;
                            }
                        }
                        else if (querer == 0)
                        {
                            puntaje2 = puntaje2 + 2;
                        }
                    }
                    while_flag = true;
                    break;
                case 2:
                    if (b.envido() == 3)
                    {
                        cout << "El jugador do le ha cantado Real envido-Falta envido\n";
                    }

                    cout << "1. Si desea aceptar el Falta envido\n2. Si desea rechazarlo\n";
                    cin >> querer;
                    if (m.Envido1() != 100 && querer == 2)
                    {
                        puntaje2 += 3;
                    }
                    else if (m.Envido1() != 100 && querer == 1)
                    {
                        cout << m.Envido1() << endl;
                        cout << m.Envido2() << endl;
                        if (m.Envido1() > m.Envido2())
                        {
                            cout << "Has ganado el envido\n";
                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                            puntaje1 = puntaje1 + (max_puntos - puntaje2);
                        }
                        else if (m.Envido1() < m.Envido2())
                        {
                            cout << "Has perdido el envido\n";
                            cout << "Tus tantos son : " << m.Envido1() << "\n";
                            cout << "los tantos del rival son: " << m.Envido2() << "\n";
                            cout << "" << endl;
                            puntaje2 = puntaje2 + (max_puntos - puntaje1);
                        }
                    }
                    if (b.envido() == 0)
                    {
                        if (b.cantarenvido() == 1)
                        {
                            if (m.Envido1() != 100)
                            {
                                cout << m.Envido1();
                                cout << m.Envido2();
                                if (m.Envido1() > m.Envido2())
                                {
                                    cout << "Has ganado el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    puntaje1 += 3;
                                }
                                else if (m.Envido1() < m.Envido2())
                                {
                                    cout << "Has perdido el envido\n";
                                    cout << "Tus tantos son : " << m.Envido1() << "\n";
                                    cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                    cout << "\n";
                                    puntaje2 += 3;
                                }
                            }
                        }
                        else if (b.cantarenvido() == 0)
                        {
                            puntaje1 += 1;
                        }
                    }
                    while_flag = true;
                    break;
                case 3:
                    if (b.cantarenvido() == 1)
                    {
                        if (m.Envido1() != 100)
                        {
                            cout << m.Envido1();
                            cout << m.Envido2();
                            if (m.Envido1() > m.Envido2())
                            {
                                cout << "Has ganado el envido\n";
                                cout << "Tus tantos son : " << m.Envido1() << "\n";
                                cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                puntaje1 = puntaje1 + (max_puntos - puntaje2);
                            }
                            else if (m.Envido1() < m.Envido2())
                            {
                                cout << "Has perdido el envido\n";
                                cout << "Tus tantos son : " << m.Envido1() << "\n";
                                cout << "los tantos del rival son: " << m.Envido2() << "\n";
                                cout << "\n";
                                puntaje2 = puntaje2 + (max_puntos - puntaje1);
                            }
                        }
                    }
                    else if (b.cantarenvido() == 0)
                    {
                        puntaje1 += 1;
                    }
                    while_flag = true;
                    break;
                case 4:
                    if (m.Envido1() > 100)
                    {
                        cout << "Tienes flor, has ganado 3 puntos.\n";
                    }
                    else
                    {
                        cout << "No tienes flor, no puedes cantar envido ahora.\n";
                    }
                    while_flag = true;
                    break;
                case 5:
                    cout << "No cantaste nada\n";
                    while_flag = true;
                    break;
                default:
                    cout << "Ingrese una opcion valida.\n";
                    while_flag = true;
                    break;
                }
                break;
            }
            catch (const char *dato)
            {
                cout << dato << endl;
            }
        } while (while_flag = true);
        cout << "Tu puntaje es: " << puntaje1 << endl;
        cout << "El puntaje del bot es: " << puntaje2 << endl;
        do
        {
            try
            {
                cout << "Desea cantar truco?\n\n1. Si\n2. No\n";
                cin >> tru;
                if (tru < 1)
                    throw "Elija un valor mayor o igual a 1.";
                else if (tru > 5)
                    throw "Elija un valor menor o igual a 5.";
                switch (tru)
                {
                case 1: // El usuario canta truco
                    b.cantarTruco();
                    if (b.cantarTruco() == 0) // El bot no canta re-truco
                    {
                        b.decidirTruco();
                        if (b.decidirTruco() == 1) // El bot acepta truco
                        {
                            cout << "el bot acepta el truco\n ";
                            m.getCartayPalo1(opc, opc1, opc2);
                            cout << "Que carta desea tirar?\n";
                            cin >> opc;
                            m.Juego1(); // Se tiran las primeras cartas
                            b.cantarTruco();
                            if (b.cantarTruco() == 0) // El bot no canta re-truco
                            {

                                cout << "\n\naca llego negri" << endl;
                                m.getCartayPalo1(opc, opc1, opc2);
                                cout << "Que carta desea tirar?\n";
                                cin >> opc1;
                                m.Juego2();                                                                                  // Se juega la segunda mano
                                if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2)) // Comparamos si las dos cartas que tiró el usuario son mayores a las del bot, por ende que ganó el usuario
                                {
                                    puntaje1 += 2;
                                    cout << "\nGanaste el truco\n";
                                    truco_check = true;
                                }
                                else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2)) // Lo contrario
                                {
                                    puntaje2 += 2;
                                    cout << "\nPerdiste el truco\n";
                                    truco_check = true;
                                }

                                if (b.cantarTruco() == 0 && truco_check == false) // El bot no canta re-truco
                                {
                                    m.getCartayPalo1(opc, opc1, opc2);
                                    cout << "Que carta desea tirar?\n";
                                    cin >> opc2;
                                    m.Juego3(); // Se tiran las ultimas cartas
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2()) < 3))
                                    {
                                        puntaje1 += 2;
                                        cout << "\nGanaste el truco\n";
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2()) == 3))
                                    {
                                        puntaje2 += 2;
                                        cout << "\nPerdiste el truco\n";
                                    }
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                    {
                                        puntaje1 += 2;
                                        cout << "\nGanaste el truco\n";
                                        truco_check = true;
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                    {
                                        puntaje2 += 2;
                                        cout << "\nPerdiste el truco\n";
                                        truco_check = true;
                                    }
                                }
                                else if (b.cantarTruco() == 1 && truco_check == false) // El bot canta re-truco después de que se hayan tirado la segunda carta
                                {
                                    cout << "El bot te ha cantado retruco, desea aceptarlo?\n1. Aceptar re-truco\n2. Cantar vale-cuatro\n3. No querer el re-truco\n";
                                    cin >> des_retruco;
                                    if (des_retruco == 1) // Quise
                                    {
                                        m.getCartayPalo1(opc, opc1, opc2);
                                        cout << "Que carta desea tirar?\n";
                                        cin >> opc2;
                                        m.Juego3();
                                        if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) < 3))
                                        {
                                            puntaje1 += 3;
                                            cout << "\nGanaste el truco\n";
                                        }
                                        else if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) == 3))
                                        {
                                            puntaje2 += 3;
                                            cout << "\nPerdiste el truco\n";
                                        }
                                        if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) < 2))
                                        {
                                            puntaje1 += 3;
                                            cout << "\nGanaste el truco\n";
                                        }
                                        else if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) == 2))
                                        {
                                            puntaje2 += 3;
                                            cout << "\nPerdiste el truco\n";
                                        }
                                    }
                                    else if (des_retruco == 2)
                                    {
                                        b.decidirTruco();
                                        if (b.decidirTruco() == 1) // El bot aceptó el vale-cuatro
                                        {
                                            m.getCartayPalo1(opc, opc1, opc2);
                                            cout << "Que carta desea tirar?\n";
                                            cin >> opc2;
                                            m.Juego3(); // Se tiran las ultimas cartas
                                            if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) < 3))
                                            {
                                                puntaje1 += 4;
                                                cout << "\nGanaste el truco\n";
                                            }
                                            else if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) == 3))
                                            {
                                                puntaje2 += 4;
                                                cout << "\nPerdiste el truco\n";
                                            }
                                            if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) < 2))
                                            {
                                                puntaje1 += 4;
                                                cout << "\nGanaste el truco\n";
                                            }
                                            else if (((m.getJuego1_1() + m.getJuego2_1() + m.getJuego3_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2() + m.getJuego3_2()) == 2))
                                            {
                                                puntaje2 += 4;
                                                cout << "\nPerdiste el truco\n";
                                            }
                                        }
                                        else if (des_retruco == 3) // No quise el re-truco
                                        {
                                            puntaje2 += 2;
                                            cout << "\nNo quisiste el re-truco\n";
                                        }
                                    }
                                }
                            }
                        }
                        else if (b.decidirTruco() == 0)
                        {
                            cout << "El bot no acepto el truco" << endl;
                            puntaje1++;
                            cout << "\nTus puntos: " << puntaje1 << "\n"
                                 << "\nPuntos del bot: " << puntaje2 << "\n";
                        }
                    }
                    else if (b.cantarTruco() == 1)
                    {
                        cout << "El bot te ha cantado retruco, desea aceptarlo?\n\n1. Si\n2. No\n";
                        cin >> des_retruco;
                        if (des_retruco == 1)
                        {
                            cout << "Desea cantar vale 4?\n\n1. Si\n2. No\n";
                            cin >> des_redoblar;
                            if (des_redoblar == 1)
                            {
                                b.cantarTruco();
                                if (b.cantarTruco() == 0)
                                {
                                    puntaje1 += 3;
                                    cout << "El bot no acepto el vale 4, ganas 3 puntos\n";
                                }
                                else if (b.cantarTruco() == 1)
                                {
                                    m.getCartayPalo1(opc, opc1, opc2);
                                    cout << "Que carta desea tirar?\n";
                                    cin >> opc;
                                    m.Juego1();
                                    m.getCartayPalo1(opc, opc1, opc2);
                                    cout << "Que carta desea tirar?\n";
                                    cin >> opc1;

                                    m.Juego2();
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                    {
                                        puntaje1 += 4;
                                        cout << "\nGanaste el truco\n";
                                        truco_check = true;
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                    {
                                        puntaje2 += 4;
                                        cout << "\nPerdiste el truco\n";
                                        truco_check = true;
                                    }
                                }
                                if (truco_check == false)
                                {
                                    m.getCartayPalo1(opc, opc1, opc2);
                                    cout << "Que carta desea tirar?\n";
                                    cin >> opc2;
                                    m.Juego3();
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2()) < 3))
                                    {
                                        puntaje1 += 2;
                                        cout << "\nGanaste el truco\n";
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2()) == 3))
                                    {
                                        puntaje2 += 2;
                                        cout << "\nPerdiste el truco\n";
                                    }
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                    {
                                        puntaje1 += 2;
                                        cout << "\nGanaste el truco\n";
                                        truco_check = true;
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                    {
                                        puntaje2 += 2;
                                        cout << "\nPerdiste el truco\n";
                                        truco_check = true;
                                    }
                                }
                                cout << "\nTus puntos: " << puntaje1 << "\n"
                                     << "\nPuntos del bot: " << puntaje2 << "\n";
                            }
                            else if (des_redoblar == 0)
                            {
                                m.getCartayPalo1(opc, opc1, opc2);
                                cout << "Que carta desea tirar?\n";
                                cin >> opc;
                                m.Juego1();
                                cout << "Desea cantar vale 4?\n\n1. Si\n2. No\n";
                                cin >> des_redoblar;
                                if (des_redoblar == 1)
                                {
                                    if (b.cantarTruco() == 0)
                                    {
                                        puntaje1 += 3;
                                    }
                                    else if (b.cantarTruco() == 1)
                                    {
                                        m.getCartayPalo1(opc, opc1, opc2);
                                        cout << "Que carta desea tirar?\n";
                                        cin >> opc1;
                                        m.Juego2();
                                        if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                        {
                                            puntaje1 += 4;
                                            cout << "\nGanaste el truco\n";
                                            truco_check = true;
                                        }
                                        else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                        {
                                            puntaje2 += 4;
                                            cout << "\nPerdiste el truco\n";
                                            truco_check = true;
                                        }
                                    }
                                    if (truco_check == false)
                                    {
                                        m.getCartayPalo1(opc, opc1, opc2);
                                        cout << "Que carta desea tirar?\n";
                                        cin >> opc2;
                                        m.Juego3();
                                        if (((m.getJuego1_1() + m.getJuego2_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2()) < 3))
                                        {
                                            puntaje1 += 4;
                                            cout << "\nGanaste el truco\n";
                                        }
                                        else if (((m.getJuego1_1() + m.getJuego2_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2()) == 3))
                                        {
                                            puntaje2 += 4;
                                            cout << "\nPerdiste el truco\n";
                                        }
                                        if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                        {
                                            puntaje1 += 4;
                                            cout << "\nGanaste el truco\n";
                                            truco_check = true;
                                        }
                                        else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                        {
                                            puntaje2 += 4;
                                            cout << "\nPerdiste el truco\n";
                                            truco_check = true;
                                        }
                                    }
                                }
                                cout << "\nTus puntos: " << puntaje1 << "\n"
                                     << "\nPuntos del bot: " << puntaje2 << "\n";
                            }
                            else if (des_redoblar == 0)
                            {
                                m.getCartayPalo1(opc, opc1, opc2);
                                cout << "Que carta desea tirar?\n";
                                cin >> opc1;
                                m.Juego2();
                                if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                {
                                    puntaje1 += 4;
                                    cout << "\nGanaste el truco\n";
                                    truco_check = true;
                                }
                                else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                {
                                    puntaje2 += 4;
                                    cout << "\nPerdiste el truco\n";
                                    truco_check = true;
                                }
                                if (truco_check == false)
                                    cout << "Desea cantar vale 4?\n\n1. Si\n2. No\n";
                                cin >> des_redoblar;
                                if (des_redoblar == 0)
                                {
                                    m.getCartayPalo1(opc, opc1, opc2);
                                    cout << "Que carta desea tirar?\n";
                                    cin >> opc2;
                                    m.Juego3();
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2()) < 3))
                                    {
                                        puntaje1 += 4;
                                        cout << "\nGanaste el truco\n";
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2()) == 3))
                                    {
                                        puntaje2 += 4;
                                        cout << "\nPerdiste el truco\n";
                                    }
                                    if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                    {
                                        puntaje1 += 4;
                                        cout << "\nGanaste el truco\n";
                                        truco_check = true;
                                    }
                                    else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                    {
                                        puntaje2 += 4;
                                        cout << "\nPerdiste el truco\n";
                                        truco_check = true;
                                    }
                                }
                                else if (des_redoblar == 1)
                                {
                                    if (b.cantarTruco() == 0)
                                    {
                                        puntaje1 += 3;
                                    }
                                    else if (b.cantarTruco() == 1)
                                    {
                                        if (truco_check == false)
                                        {
                                            m.getCartayPalo1(opc, opc1, opc2);
                                            cout << "Que carta desea tirar?\n";
                                            cin >> opc2;
                                            m.Juego3();
                                            if (((m.getJuego1_1() + m.getJuego2_1()) == 3) && ((m.getJuego1_2() + m.getJuego2_2()) < 3))
                                            {
                                                puntaje1 += 4;
                                                cout << "\nGanaste el truco\n";
                                            }
                                            else if (((m.getJuego1_1() + m.getJuego2_1()) < 3) && ((m.getJuego1_2() + m.getJuego2_2()) == 3))
                                            {
                                                puntaje2 += 4;
                                                cout << "\nPerdiste el truco\n";
                                            }
                                            if (((m.getJuego1_1() + m.getJuego2_1()) == 2) && ((m.getJuego1_2() + m.getJuego2_2()) < 2))
                                            {
                                                puntaje1 += 4;
                                                cout << "\nGanaste el truco\n";
                                                truco_check = true;
                                            }
                                            else if (((m.getJuego1_1() + m.getJuego2_1()) < 2) && ((m.getJuego1_2() + m.getJuego2_2()) == 2))
                                            {
                                                puntaje2 += 4;
                                                cout << "\nPerdiste el truco\n";
                                                truco_check = true;
                                            }
                                        }
                                    }
                                }
                            }
                            cout << "\nTus puntos: " << puntaje1 << "\n"
                                 << "\nPuntos del bot: " << puntaje2 << "\n";
                        }
                    }
                    while_flag = true;
                    break;
                case 2:
                    m.getCartayPalo1(opc, opc1, opc2);
                    cout << "Que carta desea tirar?\n";
                    cin >> opc;
                    m.Juego1();
                    while_flag = true;
                    cout << "\nTus puntos: " << puntaje1 << "\n"
                         << "\nPuntos del bot: " << puntaje2 << "\n";
                    break;
                default:
                    while_flag = true;
                    break;
                }
            }
            catch (const char *dato)
            {
                cout << dato << endl;
            }
            incremento_partidas++;
        } while (while_flag = false);
    } while (incremento_partidas <= max_puntos || puntaje1 <= max_puntos || puntaje2 <= max_puntos);
    return 0;
}
