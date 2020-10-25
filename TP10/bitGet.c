/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*bitGet: Dado un puerto y un número de bit, debe devolver su valor.*/

#include "EmuladordePuertos.h"

int bitGet (int* puntero, int bit)
{
    validar (puntero, bit);
    
    int val;
    
    if(puntero[bit] & 1 == 0)
        val=0;
    else
        val=1;
    
    return val;
               
}