#include "envido.h"

envido::envido(){

}
envido::envido(int _palos){
    palos = _palos;
}
int envido::getPalos(){
    return palos;
}
void envido::setPalos(int _palos){
    palos = _palos;
}