/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*bitClr: Dado un puerto y un número de bit, debe cambiar su estado a 0*/

#include "HeadersofTP10.h"

void bitClr (int* puntero, int bit)
{
    validar (puntero, bit);
    puntero[bit]= puntero[bit] & 0;   
}