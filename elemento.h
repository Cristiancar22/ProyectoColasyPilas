//
// Created by Morad on 24/10/2021.
//
#include <ostream>
#include <iostream>

using namespace std;

#ifndef P03_PILAS_COLAS_ELEMENTO_H
#define P03_PILAS_COLAS_ELEMENTO_H


/**
 * @struct element
 * @brief Representa un par de enteros.
 */
struct element{
    /**
     * @brief Representa a un entero que almacena el valor actual.
     */
    int value;

    /**
     * @brief Representa al maximo entero de la estructura.
     */
    int maximum;
};

/**
 * @brief Sobrecarga del operador <<.
 * @param out Referencia a una variable ostream.
 * @param e Referencia a una variable de tipo element.
 * @return Un dato de tipo ostream.
 */
inline ostream &operator<<(ostream & out, const element &e) {

    out << e.value << "," << e.maximum ;

    return out;
}


#endif //P03_PILAS_COLAS_ELEMENTO_H