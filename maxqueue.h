/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxQueue
 * @author Cárdenas García, Cristian
 * @author Kharraz Senhaji, Morad
 * @date Noviembre 2021
 */

#ifndef _MAXSQUEUE_H_
#define _MAXQUEUE_H_

#include <iostream>
#include <stack>
#include "elemento.h"

using namespace std;

/**
  @brief T.D.A. MAXQUEUE

  Una instancia del tipo de dato abstracto Maxqueue nos permite almacenar un conjunto de enteros acompañados del máximo de la estructura .

  El TDA Maxqueue proporciona además distintas herramientas para la manipulación de estrucutras de tipo FIFO.

  Para poder usar el TDA Maxqueue se debe incluir el fichero

  \#include <maxqueue.h> <elemento.h>

  @author Cárdenas García, Cristian
  @author Kharraz Senhaji, Morad
  @date Noviembre 2021

**/

class MaxQueue{
private:
    stack<element> uno;
    stack<element> dos;
    element b;

public:

    /**
     * @brief Devuelve si la cola está vacia, es decir, si su tamaño es cero.
     * @return True si el tamaño de la cola es 0 de lo contrario un false.
     */
    bool empty();

    /**
     * @brief Devuelve el número de elementos de la cola.
     * @return el número de elementos de la cola
     */

    int size();

    /**
     * @brief Devuelve una referencia al primer elemento de la cola
     * @return Un dato de tipo element
     */

    element front();

    /**
     * @brief Devuelve una referencia al ultimo elemento de la cola
     * @return Un dato de tipo element
     */

    element back();

    /**
     * @brief Inserta un nuevo elemento en la cola
     * @param x El entero al que se inicializa el value del dato de tipo element
     */

    void push(int x);

    /**
     * @brief Elimina el primer elemento de la cola
     */

    void pop();

    /**
     * @brief Calcula el mayor de entre dos enteros
     * @param a El primer entero
     * @param b El segundo entero
     * @return El entero más grande
     */

    int max(int a, int b);
};



#endif