/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*bitClr: Dado un puerto y un número de bit, debe cambiar su estado a 0*/

#include "HeadersofTP10.h"

void bitClr (uint8_t* puntero, int bit)
{
    int val= validar (puntero, bit);//validar da 1 si no hay error
    if(val)
        puntero[bit]= puntero[bit] & 0;   
}