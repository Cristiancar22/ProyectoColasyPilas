//
// Created by Guillermo Gómez Trenado on 19/10/21.
//

#include <iostream>
#include <maxstack.h>
#include "elemento.h"



int main (int argc, char ** argv) {
   MaxStack stack;
    for (int i=1; i<argc; i++) {
        char * v = argv[i];
        if (v[0] == '.'){
            cout << stack.top() << endl;
            stack.pop();
        }
        else{
            int vint = atoi(v);
            stack.push(vint);
        }
    }
}