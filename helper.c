//
// Created by lenon on 26/8/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include "helper.h"

Lista *Newlista() {
    Lista * aux= malloc(sizeof (Lista));
    if(aux==NULL){
     printf("Error");
     exit -1;
    }
    aux->Pnodo=NULL;
    return aux;
}

Nodo * Newnodo(int n) {
    Nodo * aux= malloc(sizeof (Nodo));
    if(aux==NULL){
        printf("Error");
        exit -1;
    }
    aux->num=n;
    aux->sig=NULL;
    return aux;
}

void apilar(Lista * list, Nodo * nodoainsertar) {
    if(list->Pnodo==NULL){
        list->Pnodo=nodoainsertar;
    }
    else{
        Nodo * aux = list->Pnodo;
        list->Pnodo=nodoainsertar;
        nodoainsertar->sig=aux;
    }

}

void imprimir(Lista *list) {
    Nodo * aux=list->Pnodo;
    for (;aux!=NULL;aux=aux->sig) {
        printf("- %d",aux->num);
    }
    printf("\n");
}

Lista *Interseclist(Lista *list1, Lista *list2) {
    Lista * intersec=Newlista();
    Nodo * aux1=list1->Pnodo;
    Nodo * aux2=list2->Pnodo;
    while (aux1!=NULL && aux2!=NULL){
        if(aux1->num == aux2->num){
            apilar(intersec, Newnodo(aux1->num));
            aux1=aux1->sig;
            aux2=aux2->sig;
        }
        else
            if(aux1->num > aux2->num){
                aux2=aux2->sig;
            }
            else {
                aux1=aux1->sig;
            }
    }
    return intersec;
}
