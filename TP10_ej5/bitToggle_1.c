/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*bitToggle:  Dado  un  puerto  y  un  número  de  bit,  debe  cambiar  al  estado*/

#include "HeadersofTP10.h"

void bitToggle(int* puntero, int bit)
{
    validar (puntero, bit);
    if(puntero[bit] & 1 == 0)
        puntero[bit]= puntero[bit] | 1;
    else
        puntero[bit]= puntero[bit] & 0;
}