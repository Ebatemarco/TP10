/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*bitSet: Dado un puerto y un número de bit, debe cambiar su estado a 1.*/

#include "EmuladordePuertos.h"

void bitSet (int* puntero, int bit)
{
    validar (puntero, bit);
    puntero[bit]= puntero[bit] | 1;
}