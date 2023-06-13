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
    int opc, opc1, opc2, opcion, choice_env;
    int n = 3, k = 1;
    int max_puntos, choice_punto;
    int menorp = 1, mayorp = 4, menorc = 1, mayorc = 10;
    int random[3], cartas1[3], palos1[3];
    bool band = false;
    int puntaje1 = 0, puntaje2 = 0;
    cout << "BIENVENIDO A NUESTRA VERSION DEL CLASICO JUEGO TRUCO" << endl;
    cout << "\n1. Para jugar a 15 puntos\n2. Para jugar a 30 puntos.\n";
    cin >> choice_punto;
    if (choice_punto == 1)
    {
        max_puntos = 15;
    }
    else if (choice_punto == 2)
    {
        max_puntos = 30;
    }



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
            for (int i = 0; i < 3; ++i)
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
            m.getCartayPalo1();
        }
    }
    do
    {
        cout << "Desea cantar Envido, Real Envido o Falta Envido?\n1. Envido\n2. Real Envido\n3. Falta envido\n4. Flor\n5. No cantar nada ";
        cin >> choice_env;
        switch (choice_env)
        {
        case 1:
            if (b.envido() == 1)
            {
                if (m.Envido1() != 100)
                {
                    cout << m.Envido1();
                    cout << m.Envido2();
                    if (m.Envido1() > m.Envido2())
                    {
                        cout << "Has ganado el envido\n";
                        cout << "Tus tantos son : " << m.Envido1() << "\n";
                        puntaje1 = puntaje1 + 4;
                    }
                    else if(m.Envido1() < m.Envido2() )
                    {
                        cout << "" << endl;
                        puntaje2 = puntaje2 + 4;
                    }
                }
            }
            else if (b.envido() == 0)
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
                            puntaje1 = puntaje1 + 2;
                        }
                        else if (m.Envido1() < m.Envido2())
                        {
                            cout << "tenes menos tantos , perdiste " << endl;
                            puntaje2 = puntaje2 + 2;
                        }
                    }
                }
            }
            else if(b.envido() == 2){
                
            }
            break;
        case 2:
            if (b.cantarenvido() == 1)
            {
                if (m.Envido1() != 100)
                {
                    cout << m.Envido1();
                    cout << m.Envido2();
                    if (m.Envido1() > m.Envido2())
                    {
                        cout << "Has ganado el envido\n";
                        cout << "Tus tantos son : " << m.Envido1() << "";
                        puntaje1 = puntaje1 + 3;
                    }
                    else if(m.Envido1() < m.Envido2())
                    {
                        cout << "tenes menos tantos , perdiste " << endl;
                        puntaje2 = puntaje2 + 3;
                    }
                }
            }
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
                        cout << "Has ganado el falta envido\n";
                        cout << "Tus tantos son : " << m.Envido1() << "\n";
                        puntaje1 = puntaje1 + (max_puntos - puntaje2);
                    }
                    else if(m.Envido1() < m.Envido2())
                    {
                        cout << "Has perdido el falta envido\n";
                        puntaje2 = puntaje2 + (max_puntos - puntaje1);
                    }
                }
            }
            break;
        case 4:
            if (m.Envido1() > 100) cout << "Tienes flor, has ganado 3 puntos.\n";
            else cout << "No tienes flor, no puedes cantar envido ahora.\n";
            break;
        case 5:
            cout << "No cantaste nada\n";
            break;
        }
        default:
            cout << "Ingrese una opcion valida.\n";
            break;
    } while (choice_env < 1 || choice_env > 4);

    
}
