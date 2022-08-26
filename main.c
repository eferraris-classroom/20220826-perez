#include <stdio.h>
#include "helper.h"

int main() {
    Lista * list1=Newlista();
    apilar(list1, Newnodo(5));
    apilar(list1, Newnodo(4));
    apilar(list1, Newnodo(3));
    apilar(list1, Newnodo(2));
    apilar(list1, Newnodo(1));
    imprimir(list1);
    Lista * list2=Newlista();
    apilar(list2, Newnodo(7));
    apilar(list2, Newnodo(5));
    apilar(list2, Newnodo(2));
    imprimir(list2);
    Lista * list3=Interseclist(list1,list2);
    imprimir(list3);
    return 0;
}
