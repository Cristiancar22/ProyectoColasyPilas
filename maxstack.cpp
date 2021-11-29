/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include <queue>
#include <iostream>

#include <maxstack.h>

using namespace std;

/**************************
    FUNCIONES PRIVADAS
***************************/

/************************
    FUNCIONES PUBLICAS
*************************/


bool MaxStack::empty() {
    return pila.empty();
}

int MaxStack::size() {
    return pila.size();
}

element MaxStack::top() {
    return pila.back();
}

void MaxStack::push(int i) {
    element aux;

    if (pila.empty()){
        aux.value = i;
        aux.maximum = i;
    }
    else{
        aux.value = i;
        aux.maximum = max(i,top().maximum);
    }


    pila.push(aux);

}

void MaxStack::pop() {
    queue<element> aux;

    int s = size() - 1 ;
    for (int i = 0; i < s; i++) {
        aux.push(pila.front());
        pila.pop();
    }
    pila = aux;
}

int MaxStack::max(int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}


