/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "HeadersofTP10.h"

void getBin (int* arreglo, int mascara,int estado)
{
    if(mascara==0)
        return;
    else
    {
        getBin(arreglo, mascara/2, estado+1);
        arreglo[estado]=(mascara%2);    
    }
}