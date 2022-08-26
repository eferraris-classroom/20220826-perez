//
// Created by lenon on 26/8/2022.
//

#ifndef INC_20220826_HELPER_H
#define INC_20220826_HELPER_H

typedef struct nodo{
    int num;
    struct nodo *sig ;
}Nodo;

typedef struct lista{
    Nodo * Pnodo;
}Lista;

Lista * Newlista();
Nodo * Newnodo(int n);
void apilar(Lista * list, Nodo * nodoainsertar);
void imprimir(Lista * list);
Lista * Interseclist(Lista * list1,Lista * list2);


#endif //INC_20220826_HELPER_H
