/*

Con new / delete manuali i problemi noti sono:
    - memory leak (delete mai chiamato)
    - double delete (doppia cancellazione)
    - dangling pointer (cancellazione prima di assegnazione)
    - problemi di ownership

Uno smartpointer è una classe template, che incapsula un puntatore 'raw' e libera in automatico memoria

*/

#include <iostream>
#include <memory>
using namespace std;

/*

smartpointer standard

TIPO                            ownership
unique_ptr<T>                   esclusiva
shared_ptr<T>                   condivisa
weak_ptr<T>                     osservatore

*/