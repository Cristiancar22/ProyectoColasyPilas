//
// Created by Guillermo Gómez Trenado on 19/10/21.
//

#include <iostream>
#include <maxqueue.h>
#include "elemento.h"

int main (int argc, char ** argv) {
  MaxQueue queue;
    for (int i=1; i<argc; i++) {
        char * v = argv[i];
        if (v[0] == '.'){
            cout << queue.front() << endl;
            queue.pop();
        }
        else{
            int vint = atoi(v);
            queue.push(vint);
        }
    }
}