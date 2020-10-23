/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*bitGet: Dado un puerto y un número de bit, debe devolver su valor.*/

#include "HeadersofTP10.h"

int bitGet (int* puntero, int bit)
{
    int val;
    val = puntero[bit];
    return val; 
}