/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author Cárdenas García, Cristian
 * @author Kharraz Senhaji, Morad
 * @date Noviembre 2021
 */

#ifndef _MAXSTACK_H_
#define _MAXSTACK_H_

#include <iostream>
#include <queue>
#include "elemento.h"

using namespace std;


/**
  @brief T.D.A. MAXSTACK

  Una instancia del tipo de dato abstracto Maxstack nos permite almacenar un conjunto de enteros acompañados del máximo de la estructura .

  El TDA Maxstack proporciona además distintas herramientas para la manipulación de estrucutras de tipo LIFO.

  Para poder usar el TDA Maxstack se debe incluir el fichero

  \#include <maxstack.h> <elemento.h>



**/

class MaxStack{
private:
    /**
     * @brief Estructura donde se guarda pila.
     */
    queue<element> pila;

public:
    /**
     * @brief Devuelve si la pila está vacía, es decir, si su tamaño es cero.
     * @return true si el tamaño de la pila es 0, de lo contrario false.
     */
    bool empty();

    /**
     * @brief Devuelve el número de elementos de la pila.
     * @return el número de elementos de la pila
     */
    int size();

    /**
     * @brief Devuelve una referencia al elemento superior de la pila
     * @return Un dato de tipo element
     */

    element top();

    /**
     * @brief Inserta un nuevo elemento en la parte superior de la pila
     * @param i El entero al que se inicializa el value del dato de tipo element
     */

    void push(int i);

    /**
     * @brief Elimina el elemento de la parte suprior de la pila
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